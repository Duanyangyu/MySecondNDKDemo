package com.ndk.duanyy;

/**
 * Created by Duanyy on 2016/7/7.
 */
public class JNIUtils {

    static {
        System.loadLibrary("NdkSample");
    }

    public native static String sayHello(String who);

}
