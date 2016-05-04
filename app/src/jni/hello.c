//
// Created by Ssurendran on 5/4/2016.
//

#include "jni.h"

jstring Java_com_example_ssurendran_jniapp_MainActivity_getMessage(JNIEnv* env, jobject thisObj){
    return (*env)->NewStringUTF(env, "Hello from jni c code!");
}
