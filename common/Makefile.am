noinst_LTLIBRARIES = libgssapi_common.la

libgssapi_common_la_CPPFLAGS = \
   -I. \
   -I$(top_srcdir) \
   -I$(top_srcdir)/include/public \
   -I$(top_srcdir)

libgssapi_common_la_SOURCES = \
    creds_plugin.c

libgssapi_common_la_LIBADD = \
    -ldl

libgssapi_common_la_LDFLAGS = \
    -static
