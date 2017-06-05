// #ifndef _JAVASOFT_JNI_H_
// #error "_JAVASOFT_JNI_H_ not defined; using a non-JavaSoft JDK!"
// #endif

// #ifdef _CLASSPATH_JNI_H
// #error "Using GNU Classpath!"
// #endif

#include "com_example_SomeClass.h"

JNIEXPORT void JNICALL Java_com_1example_1SomeClass_test
  (JNIEnv *env, jclass clazz) {
    env->ThrowNew(clazz, "Some java exception xxx");
}
