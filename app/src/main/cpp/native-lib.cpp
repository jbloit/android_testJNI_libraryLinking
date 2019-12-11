#include <jni.h>
#include <string>
#include "NativeApp.h"

extern "C"
{

    JNIEXPORT jstring JNICALL
    Java_com_jbloit_android_1teslibrarylinking_MainActivity_stringFromJNI(
            JNIEnv *env,
            jobject /* this */) {
        std::string hello = "Hello from C++";
        return env->NewStringUTF(hello.c_str());
    }

JNIEXPORT jint JNICALL
Java_com_jbloit_android_1teslibrarylinking_MainActivity_numberOfTheBeast(
        JNIEnv *env,
        jobject /* this */) {
    NativeApp* app = new NativeApp();
    return app->getBeastNumber();
}

}