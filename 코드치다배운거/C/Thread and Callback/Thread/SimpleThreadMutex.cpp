#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int g_count = 0; // 쓰레드 공유자원
pthread_mutex_t mutex_lock;


void* thread_up(void* data)
{

    cout << *(char*)data << endl;

    pthread_mutex_lock(&mutex_lock); // 임계영역 제한시작
    g_count = 0;
    for(int i=0; i<5; i++){
        g_count++;
        sleep(1);
    }
    cout << g_count << endl;

    pthread_mutex_unlock(&mutex_lock); // 임계영역 제한해제
}

int main()
{
    pthread_t thread1,thread2;
    int threadRet;
    int retVal;

    cout << "start" << endl;

    threadRet = pthread_create(&thread1,nullptr,thread_up,(void*)"1");
    if(threadRet != 0){
        exit(-1);
    }

    threadRet = pthread_create(&thread2,nullptr,thread_up,(void*)"2");
    if(threadRet != 0){
        exit(-1);
    }

    pthread_join(thread1,(void**)&retVal);
    pthread_join(thread2,(void**)&retVal);

    while (1) {

    }


}
