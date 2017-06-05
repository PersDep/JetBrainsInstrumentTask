AC_INIT([libcom_example_SomeClass], [1])
AC_CONFIG_SRCDIR([com_example_SomeClass.cpp])
AC_ENABLE_SHARED
AC_DISABLE_STATIC
AC_ARG_WITH(java-home, [  --with-java-home[=DIR]    use specific JDK], [ARG_PATH=$with_java_home])
AC_SEARCH_LIBS([dlopen], [dl dld], [], [AC_MSG_ERROR([unable to find the g_ascii_digit_value() function])])
LT_INIT
AC_PROG_LIBTOOL
AM_PROG_LIBTOOL
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE
AC_PROG_CXX

RES_PATH=""
JAVA_HOME_PATH=""

if
test "$ARG_PATH" != ""; then
    JAVA_HOME_PATH=$ARG_PATH
    RES_PATH=-I$ARG_PATH/include
else
    FIND_PATH=$JAVA_HOME
    if
    test "$FIND_PATH" != ""; then
        JAVA_HOME_PATH=$FIND_PATH
        RES_PATH=-I$FIND_PATH/include
    else
        SCR_PATH=$(jrunscript -e 'java.lang.System.out.println(java.lang.System.getProperty("java.home"))')
        if
        test "$SCR_PATH" != ""; then
            JAVA_HOME_PATH=$SCR_PATH/..
            RES_PATH=-I$SCR_PATH/../include
        else
            echo "Didn't find JDK!"
            exit
        fi
    fi
fi

AC_SUBST(CPPFLAGS, "$CPPFLAGS $RES_PATH")
AC_SUBST(DEFAULT_INCLUDES, $RES_PATH)

DESTDIR_PATH=$(pwd)
AC_SUBST(DESTDIR, $DESTDIR_PATH)

${JAVA_HOME_PATH}/bin/javac com_example_SomeClass.java
${JAVA_HOME_PATH}/bin/javah com_example_SomeClass

AC_OUTPUT([Makefile])