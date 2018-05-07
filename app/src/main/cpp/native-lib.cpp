#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_farzi_labs_helloworldexternallibs_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
