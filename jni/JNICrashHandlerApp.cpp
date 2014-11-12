#include <jni.h>
#include <android/log.h>
#include "coffeecatch/coffeecatch.h"
#include "coffeecatch/coffeejni.h"
extern "C" {

/*
 * Class:     gr_gmetal_jnicrashhandlerapp_MainActivity
 * Method:    safeFunc
 * Signature: ()V
 */JNIEXPORT void JNICALL Java_gr_gmetal_jnicrashhandlerapp_MainActivity_safeFunc(
		JNIEnv *jvm, jobject jobj) {
	int a = 6;

	__android_log_print(ANDROID_LOG_DEBUG, "JNICrashHandlerApp",
			"Safe func res %d", a);
}

 void unsafeFunc() {
 	int *a = 0;

 	*a += 2;

 	__android_log_print(ANDROID_LOG_DEBUG, "JNICrashHandlerApp", "Crashed?");
 }


/*
 * Class:     gr_gmetal_jnicrashhandlerapp_MainActivity
 * Method:    unsafeFunc
 * Signature: ()V
 */

JNIEXPORT void JNICALL Java_gr_gmetal_jnicrashhandlerapp_MainActivity_unsafeFunc(
		JNIEnv *jvm, jobject jobj) {

	__android_log_print(ANDROID_LOG_DEBUG, "JNICrashHandlerApp",
			"UnSafe func about to crash");
	COFFEE_TRY_JNI(jvm, unsafeFunc());

}


}
