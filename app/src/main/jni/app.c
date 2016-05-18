#include <jni.h>

JNIEXPORT jstring JNICALL

Java_com_jnitest_com_myapplication_MainActivity_getInt(JNIEnv *env, jobject instance, jint i) {

    int a = i * 10 + 2;


    return a;
}

JNIEXPORT jstring JNICALL
Java_com_jnitest_com_myapplication_MainActivity_getString(JNIEnv *env, jobject instance,
                                                          jstring s_) {
    int i;
    char buf[128] = "ghahhaha";
    const char *s;
    s = (*env)->GetStringUTFChars(env, s_,0);
//    if(s==NULL){
//        return  NULL;
//    }
    for (i = 0; i < 128; ++i) {
        buf[i] = *(s + i);
    }
    return (*env)->NewStringUTF(env, buf);
}

