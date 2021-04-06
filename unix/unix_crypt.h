/*
 * Copyright © 2021-2022 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the “License”); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an “AS IS” BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
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
