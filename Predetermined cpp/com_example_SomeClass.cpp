#include "com_example_SomeClass.h"

JNIEXPORT void JNICALL Java_com_1example_1SomeClass_test
  (JNIEnv *env, jclass clazz) {
	env->FatalError("Some java exception");
}
