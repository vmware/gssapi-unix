/*
 * Copyright © 2021 VMware, Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "unix_crypt.h"
#include <gssapi_creds_plugin.h>

/*
 * plugin load
*/
int
creds_plugin_load_interface(
    PCREDS_PLUGIN_INTERFACE *ppInterface
    )
{
    int sts = 0;
    PCREDS_PLUGIN_INTERFACE pInterface = NULL;

    if(!ppInterface)
    {
        sts = EINVAL;
        goto error;
    }

    pInterface = (PCREDS_PLUGIN_INTERFACE)
                 malloc(sizeof(CREDS_PLUGIN_INTERFACE));
    if(!pInterface)
    {
        sts = ENOMEM;
        goto error;
    }

    pInterface->pfnGetHashedCreds = get_salt_and_v_value;
    *ppInterface = pInterface;

cleanup:
    return sts;

error:
    if(ppInterface)
    {
        *ppInterface = NULL;
    }
    if(pInterface)
    {
        free(pInterface);
    }
    goto cleanup;
}
