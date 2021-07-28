//
// Created by Nandhana on 24-07-2021.
//

#include <jni.h>

//For first API key
JNIEXPORT jstring JNICALL
Java_com_mindorks_myapplication_APIKeyLibrary_getAPIKey(JNIEnv *env, jobject instance) {

    return (*env)->  NewStringUTF(env, "AIzaSyDADeJ7_5uaxwf9KCWpB79ej5s6uZg4-pM");

}