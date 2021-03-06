/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_lwjgl_opencl_CallbackUtil */

#ifndef _Included_org_lwjgl_opencl_CallbackUtil
#define _Included_org_lwjgl_opencl_CallbackUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    ncreateGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_ncreateGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    deleteGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_lwjgl_opencl_CallbackUtil_deleteGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getContextCallback
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getContextCallback
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getMemObjectDestructorCallback
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getMemObjectDestructorCallback
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getProgramCallback
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getProgramCallback
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getNativeKernelCallback
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getNativeKernelCallback
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getEventCallback
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getEventCallback
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getPrintfCallback
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getPrintfCallback
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getLogMessageToSystemLogAPPLE
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getLogMessageToSystemLogAPPLE
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getLogMessageToStdoutAPPLE
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getLogMessageToStdoutAPPLE
  (JNIEnv *, jclass);

/*
 * Class:     org_lwjgl_opencl_CallbackUtil
 * Method:    getLogMessageToStderrAPPLE
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_lwjgl_opencl_CallbackUtil_getLogMessageToStderrAPPLE
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
