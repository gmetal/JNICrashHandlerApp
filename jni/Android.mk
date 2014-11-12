LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := JNICrashHandlerApp
LOCAL_SRC_FILES := JNICrashHandlerApp.cpp coffeecatch/coffeecatch.c coffeecatch/coffeejni.c
LOCAL_CFLAGS := -funwind-tables -Wl,--no-merge-exidx-entries -D__ANDROID__
LOCAL_LDLIBS += -llog

include $(BUILD_SHARED_LIBRARY)
