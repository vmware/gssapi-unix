#!/bin/sh
export CFLAGS="-Wno-error=unused-but-set-variable -Wno-error=implicit-function-declaration -Wno-error=sizeof-pointer-memaccess -Wno-error=unused-local-typedefs -Wno-error=pointer-sign -Wno-error=address -Wno-unused-but-set-variable -Wno-unused-const-variable -Wno-misleading-indentation"

aclocal && libtoolize && automake --add-missing && autoreconf && ./configure

