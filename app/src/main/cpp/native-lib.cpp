#include <jni.h>
#include <string>
#include <gmath.h>
#include <add.h>

extern "C"
JNIEXPORT jstring

JNICALL
Java_farzi_labs_helloworldexternallibs_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string result = std::to_string(gpower(4));
    std::string hello = "The square of 4 is "+result + " and sum of 2+3 = " + std::to_string(add(2,3));
    return env->NewStringUTF(hello.c_str());
}
