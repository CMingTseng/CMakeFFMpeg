#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
#include <android/log.h>

static int pfd[2];
static pthread_t thr;
static const char *tag = "VideoKit";

static void* thread_func(void* in) {
    return 0;
}

jint JNI_OnLoad(JavaVM* vm, void* reserved){
    return JNI_VERSION_1_6;
}

int main(int argc, char **argv);
JNIEXPORT jint JNICALL Java_com_syllogismobile_ffmpeg_1sample_VideoKit_run(
        JNIEnv *env,
        jobject thiz,
        jobjectArray args
) {
    return 0;
}