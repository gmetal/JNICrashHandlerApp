#include <jni.h>

extern "C" {

/*
 * Class:     gr_gmetal_jnicrashhandlerapp_MainActivity
 * Method:    safeFunc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gr_gmetal_jnicrashhandlerapp_MainActivity_safeFunc(
		JNIEnv *jvm, jobject jobj) {

}

/*
 * Class:     gr_gmetal_jnicrashhandlerapp_MainActivity
 * Method:    unsafeFunc
 * Signature: ()V
 */

JNIEXPORT void JNICALL Java_gr_gmetal_jnicrashhandlerapp_MainActivity_unsafeFunc(
		JNIEnv *jvm, jobject jobj) {

}

}
