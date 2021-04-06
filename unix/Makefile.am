bin_PROGRAMS = unix_srp

unix_srp_SOURCES = \
    unix_srp.c \
    srp.c

unix_srp_CPPFLAGS = \
   -I$(top_srcdir) \
    @OPENSSL_INCLUDES@

unix_srp_LDADD = \
    @CRYPT_LIBS@ \
    @OPENSSL_LDFLAGS@ \
    @CRYPTO_LIBS@

lib_LTLIBRARIES = libgssapi_unix.la libgssapi_unix_creds.la

libgssapi_unix_creds_la_CPPFLAGS = \
   -D_MIT_KRB5_1_11 \
   -D_MIT_KRB5_1_12 \
   -I. \
   -I$(top_srcdir) \
   -I$(top_srcdir)/include/public \
    @OPENSSL_INCLUDES@

libgssapi_unix_creds_la_SOURCES = \
    srp.c \
    unix_creds_plugin.c \
    unix_crypt.c

libgssapi_unix_creds_la_LIBADD = \
    @OPENSSL_LDFLAGS@ \
    @CRYPT_LIBS@ \
    @CRYPTO_LIBS@ \
    @PTHREAD_LIBS@

libgssapi_unix_la_CPPFLAGS = \
   -D_MIT_KRB5_1_11 \
   -D_MIT_KRB5_1_12 \
   -I. \
   -I$(top_srcdir) \
   -I$(top_srcdir)/include/public \
    @OPENSSL_INCLUDES@

libgssapi_unix_la_SOURCES = \
    gssapi_alloc.c \
    srp.c \
    unix_accept_sec_ctx.c \
    unix_acquire_cred.c \
    unix_release_cred.c \
    unix_disp_name.c \
    unix_encrypt.c \
    unix_init_sec_ctx.c \
    unix_del_sec_ctx.c \
    unix_mech.c \
    unix_mech_desc.c \
    unix_wrap_iov.c \
    unix_unwrap_iov.c \
    unix_util.c

libgssapi_unix_la_LIBADD = \
    $(top_builddir)/common/libgssapi_common.la \
    @GSSAPI_LIBS@ \
    @LBER_LIBS@ \
    @SASL_LIBS@ \
    @OPENSSL_LDFLAGS@ \
    @CRYPT_LIBS@ \
    @CRYPTO_LIBS@ \
    @PTHREAD_LIBS@
