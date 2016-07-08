//
// Created by Duanyy on 2016/7/7.
//
#include "com_ndk_duanyy_JNIUtils.h"
#include <stdio.h>
#include <cstddef>

JNIEXPORT jstring JNICALL Java_com_ndk_duanyy_JNIUtils_sayHello
    (JNIEnv *env,jclass cls,jstring j_str)
    {
        const char *c_str = nullptr;
        char buff[128] = {0};
        jboolean isCopy;
        c_str = env->GetStringUTFChars(j_str,&isCopy);
        printf("isCopy:%d\n",isCopy);
        if(c_str == NULL)
        {
            return NULL;
        }
        printf("C_str: %s \n",c_str);
        sprintf(buff,"from C++ %s",c_str);
        env->ReleaseStringUTFChars(j_str,c_str);
        return env->NewStringUTF(buff);
    }
