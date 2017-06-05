AC_INIT([libcom_example_SomeClass], [1])
ARG_PATH="${1:17}"
DESTDIR_PATH=$(pwd)
AC_CONFIG_SRCDIR([com_example_SomeClass.cpp])
AC_ENABLE_SHARED
AC_DISABLE_STATIC
LT_INIT
AC_PROG_LIBTOOL
AM_PROG_LIBTOOL
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE
AC_PROG_CXX

RES_PATH=""

if 
test "$ARG_PATH" != ""; then
    RES_PATH="-I"$ARG_PATH"/include"
else
    FIND_PATH=$(locate include/jni.h)
    if 
test "$FIND_PATH" != ""; then
        RES_PATH="-I"$(echo $FIND_PATH | rev | cut -c 7- | rev)
    else
        echo "Didn't find JDK!"
        exit
    fi
fi

AC_SUBST(DEFAULT_INCLUDES, $RES_PATH)
AC_SUBST(DESTDIR, $DESTDIR_PATH)

javac com_example_SomeClass.java
javah com_example_SomeClass

AC_OUTPUT([Makefile])