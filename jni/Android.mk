LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := JNICrashHandlerApp
LOCAL_SRC_FILES := JNICrashHandlerApp.cpp

include $(BUILD_SHARED_LIBRARY)
