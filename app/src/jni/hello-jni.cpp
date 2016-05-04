//
// Created by Ssurendran on 5/4/2016.
//

#include "jni.h"

extern "C" {
JNIEXPORT jstring JNICALL Java_com_example_ssurendran_jniapp_MainActivity_getMessage(JNIEnv* env, jobject thisObj);
};

jstring Java_com_example_ssurendran_jniapp_MainActivity_getMessage(JNIEnv* env, jobject thisObj){
    return (env)->NewStringUTF("Hello from jni cpp code!");
}
