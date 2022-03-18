#include <jni.h>
#include <string>
#include <iostream>
#include <stdio.h>

class Myprint{
std::string print;
public:
    void setPrint(std::string newPrint);
    Myprint();
    ~Myprint();
};

Myprint::Myprint(){
    print = "Hello World";
}
~print(){
    print = "";
}
void Myprint::setPrint(std::string newPrint) {
    print = newPrint;
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidapp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    //std::string hello = print;
    return env->NewStringUTF(print.c_str());

    }