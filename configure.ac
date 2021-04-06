AC_INIT(unix_gssapi, 1.0.0)
AC_MSG_NOTICE([unix_gssapi configuration])

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

AM_PROG_AR

AC_PROG_CC
AC_PROG_LIBTOOL

AM_CPPFLAGS="$AM_CPPFLAGS -I${top_srcdir}"
AM_CFLAGS="$AM_CFLAGS -Wall -Werror -fno-strict-aliasing"

AC_SUBST(AM_CPPFLAGS)
AC_SUBST(AM_CFLAGS)

case "${host_os}:${host_cpu}" in
    linux*:x86_64)
        PLATFORM_LIB_PREFIX=lib64
        ;;
    linux*:aarch64)
        PLATFORM_LIB_PREFIX=lib64
        ;;
    darwin*:x86_64)
        PLATFORM_LIB_PREFIX=lib
        ;;
    *)
        AC_ERROR("Unsupported operating system - ${host_os}:${host_cpu}")
        ;;
esac

AC_ARG_WITH([ssl],
    [AC_HELP_STRING([--with-ssl=<dir>], [use SSL binaries rooted at prefix <dir> ])],
    [
        OPENSSL_BASE_PATH="$withval"
        OPENSSL_INCLUDES="-I$withval/include"
        OPENSSL_LDFLAGS="-L$withval/$PLATFORM_LIB_PREFIX -Wl,-rpath,$OPEN_SSL_DEFAULT_PATH"
    ])
AC_ARG_WITH([ssl-includes],
    [AC_HELP_STRING([--with-ssl-includes=<dir>], [use SSL headers located in prefix <dir> ])],
    [
        OPENSSL_INCLUDES="-I$withval"
    ])

AC_ARG_WITH([ssl-libs],
    [AC_HELP_STRING([--with-ssl-libs=<dir>], [use SSL libraries located in prefix <dir> ])],
    [
        OPENSSL_LDFLAGS="-L$withval"
    ])

AC_SUBST(OPENSSL_BASE_PATH)
AC_SUBST(OPENSSL_INCLUDES)
AC_SUBST(OPENSSL_LDFLAGS)

#--------------------------------------------------------------------

saved_CPPFLAGS="$CPPFLAGS"
CPPFLAGS="$CPPFLAGS"
AC_CHECK_HEADERS(uuid/uuid.h)
AC_CHECK_HEADERS(openssl/crypto.h openssl/ssl.h openssl/err.h)
CPPFLAGS="$saved_CPPFLAGS"
CPPFLAGS="$CPPFLAGS -D_REENTRANT -D_GNU_SOURCE -shared -fPIC"

AC_CHECK_LIB([dl], [dlopen], [DL_LIBS="-ldl"])
AC_CHECK_LIB([pthread], [pthread_self], [PTHREAD_LIBS="-lpthread"])
AC_CHECK_LIB(
    [crypto],
    [MD5_Init],
    [CRYPTO_LIBS="-lcrypto -lssl"],
    [],
    [$OPENSSL_LDFLAGS])

AC_CHECK_LIB([lber], [ber_scanf], [LBER_LIBS="-llber"], [])

AC_CHECK_LIB(
    [gssapi_krb5],
    [gss_accept_sec_context],
    [GSSAPI_LIBS="-lgssapi_krb5 -lkrb5 -lk5crypto -lkrb5support -lcom_err"],
    [])

AC_CHECK_LIB([sasl2], [sasl_server_init], [SASL_LIBS="-lsasl2"], [])

# Use -lxcrypt on SLES11, which contains advanced hash algorithms
AC_CHECK_LIB([xcrypt], [crypt_r], [CRYPT_LIBS="-L/usr/lib64 -lxcrypt $DL_LIBS"], [CRYPT_LIBS="no"], [-L/usr/lib64 $DL_LIBS])
if test x"$CRYPT_LIBS" = x"no"; then
  AC_CHECK_LIB([crypt], [crypt_r], [CRYPT_LIBS="-lcrypt"],[CRYPT_LIBS=""])
fi


AC_SUBST(GSSAPI_LIBS)
AC_SUBST(CRYPTO_LIBS)
AC_SUBST(LBER_LIBS)
AC_SUBST(SASL_LIBS)
AC_SUBST(PTHREAD_LIBS)
AC_SUBST(CRYPT_LIBS)

#makefiles
AC_CONFIG_FILES([Makefile
                 include/Makefile
                 include/public/Makefile
                 common/Makefile
                 unix/Makefile
                ])

#
AC_OUTPUT
