/*
 * Copyright 2021 VMware, Inc.
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

/*
 * 1.2.840.113554.1.2.10
 *
 * {iso(1) member-body(2) US(840) mit(113554) infosys(1) gssapi(2) srp(10)}
 * "Made up" SRP OID,
 * "Made up" SRP OID, which is actually in MIT GSSAPI OID namespace,
 *  based on existing GSSAPI mech OIDs.
 * This is being depricated in future releases.
 */
#ifndef GSS_SRP_MECH_OID
#define GSS_SRP_MECH_OID_LENGTH 9
#define GSS_SRP_MECH_OID "\x2a\x86\x48\x86\xf7\x12\x01\x02\x0a"
#endif

/*
 * 1.3.6.1.4.1.27433.3.1
 *
 * {iso(1) identified-organization(3) dod(6) internet(1) private(4)
 *   enterprise(1) 27433}
 * Centeris Corporation
 * Note: No OIDs are officially registered under the father Centeris Corp OID.
 * "\x06\x08\x2b\x06\x01\x04\x01\x81\xd6\x29"
 *
 * Note: This is the exact OID as found in lsass/include/ntlm/gssntlm.h;
 */
#ifndef GSS_CRED_OPT_PW
#define GSS_CRED_OPT_PW     "\x2b\x06\x01\x04\x01\x81\xd6\x29\x03\x01"
#define GSS_CRED_OPT_PW_LEN 10
#endif

/*
 * 1.3.6.1.4.1.6876.11711.2.1.1
 *
 * {iso(1) identified-organization(3) dod(6) internet(1) private(4)
 *   enterprise(1) 6876 vmwSecurity(11711) vmwAuthentication(2) vmwGSSAPI(1)
 *   vmwSRP(1)}
 * Official registered GSSAPI_SRP Mech OID
 */
#ifndef GSSAPI_SRP_MECH_OID_LENGTH
#define GSSAPI_SRP_MECH_OID_LENGTH 12
#endif

#ifndef GSSAPI_SRP_MECH_OID
#define GSSAPI_SRP_MECH_OID "\x2b\x06\x01\x04\x01\xb5\x5c\xdb\x3f\x02\x01\x01"
#endif

/*
 * 1.3.6.1.4.1.6876.11711.2.1.1.1
 *
 * {iso(1) identified-organization(3) dod(6) internet(1) private(4)
 *   enterprise(1) 6876 vmwSecurity(11711) vmwAuthentication(2) vmwGSSAPI(1)
 *   vmwSRP(1) vmwSrpCredOptPwd(1)}
 * Official registered GSSAPI_SRP password cred option OID
 */
#ifndef GSSAPI_SRP_CRED_OPT_PW
#define GSSAPI_SRP_CRED_OPT_PW  \
    "\x2b\x06\x01\x04\x01\xb5\x5c\xdb\x3f\x02\x01\x01\x01"
#define GSSAPI_SRP_USERNAME  \
    "\x2b\x06\x01\x04\x01\xb5\x5c\xdb\x3f\x02\x01\x01\x02"
#endif

#ifndef GSSAPI_SRP_CRED_OPT_PW_LEN
#define GSSAPI_SRP_CRED_OPT_PW_LEN  13
#endif

/*
 * vmwUnix 1.3.6.1.4.1.6876.11711.2.1.2
 *   vmwUnixCredOptPwd 1.3.6.1.4.1.6876.11711.2.1.2.1
 */

/*
 * 1.3.6.1.4.1.6876.11711.2.1.2
 *
 * {iso(1) identified-organization(3) dod(6) internet(1) private(4)
 *   enterprise(1) 6876 vmwSecurity(11711) vmwAuthentication(2) vmwGSSAPI(1)
 *   vmwUNIX(2)}
 * Official registered GSSAPI_UNIX Mech OID
 */
#ifndef GSSAPI_UNIX_MECH_OID_LENGTH
#define GSSAPI_UNIX_MECH_OID_LENGTH 12
#endif

#ifndef GSSAPI_UNIX_MECH_OID
#define GSSAPI_UNIX_MECH_OID "\x2b\x06\x01\x04\x01\xb5\x5c\xdb\x3f\x02\x01\x02"
#endif

/*
 * 1.3.6.1.4.1.6876.11711.2.1.2.1
 *
 * {iso(1) identified-organization(3) dod(6) internet(1) private(4)
 *   enterprise(1) 6876 vmwSecurity(11711) vmwAuthentication(2) vmwGSSAPI(1)
 *   vmwUNIX(2) vmwSrpCredOptPwd(1)}
 * Official registered GSSAPI_UNIX password cred option OID
 */
#ifndef GSSAPI_UNIX_CRED_OPT_PW
#define GSSAPI_UNIX_CRED_OPT_PW  \
    "\x2b\x06\x01\x04\x01\xb5\x5c\xdb\x3f\x02\x01\x02\x01"
#define GSSAPI_UNIX_USERNAME  \
    "\x2b\x06\x01\x04\x01\xb5\x5c\xdb\x3f\x02\x01\x02\x02"
#endif  

#ifndef GSSAPI_UNIX_CRED_OPT_PW_LEN
#define GSSAPI_UNIX_CRED_OPT_PW_LEN  13
#endif
