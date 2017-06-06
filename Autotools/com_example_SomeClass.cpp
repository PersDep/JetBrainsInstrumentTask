#include "com_example_SomeClass.h"

// #ifndef _JAVASOFT_JNI_H_
// #error "_JAVASOFT_JNI_H_ not defined; using a non-JavaSoft JDK!"
// #endif

// #ifdef _CLASSPATH_JNI_H
// #error "Using GNU Classpath!"
// #endif

JNIEXPORT void JNICALL Java_com_1example_1SomeClass_test
  (JNIEnv *env, jclass clazz) {
    jclass exc(env->FindClass("java/io/IOException"));
    if (exc) 
      env->ThrowNew(exc, "My java exception");
}
