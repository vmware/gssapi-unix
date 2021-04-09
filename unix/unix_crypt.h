/*
 * Copyright © 2021 VMware, Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _UNIX_CRYPT_H
#define _UNIX_CRYPT_H

int get_sp_salt(const char *username,
                char **ret_salt,
                char **ret_encpwd);

int
get_salt_and_v_value(
    int plugin_type,
    const char *username,
    char **ret_salt,
    unsigned char **ret_bytes_s,
    int *ret_len_s,
    unsigned char **ret_bytes_v,
    int *ret_len_v
    );
#endif
