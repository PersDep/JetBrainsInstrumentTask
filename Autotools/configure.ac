AC_INIT([libcom_example_SomeClass], [1])
AC_CONFIG_SRCDIR([com_example_SomeClass.cpp])
AC_CANONICAL_TARGET
AC_ENABLE_SHARED
AC_DISABLE_STATIC
AC_ARG_WITH(java-home, [  --with-java-home[=DIR]    use specific JDK], [ARG_PATH=$with_java_home])
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

case $target_cpu in
     x86_64) JVM_ARCH=amd64 ;;
     i?86)   JVM_ARCH=i386 ;;
     *)      JVM_ARCH=$target_cpu ;;
esac
LDFLAGS="-L$JAVA_HOME_PATH/jre/lib/$JVM_ARCH/server $LDFLAGS"
AC_CHECK_LIB([jvm], [JNI_CreateJavaVM], [], [AC_MSG_ERROR(libjvm.so not found!)])

DESTDIR_PATH=$(pwd)
AC_SUBST(DESTDIR, $DESTDIR_PATH)

${JAVA_HOME_PATH}/bin/javac com_example_SomeClass.java
${JAVA_HOME_PATH}/bin/javah com_example_SomeClass

AC_OUTPUT([Makefile])