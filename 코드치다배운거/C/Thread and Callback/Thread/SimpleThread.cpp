#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int g_Count = 0;

void* thread_up(void* data)
{
    g_Count = 0;

    for(int i=0; i<5; i++){
        g_Count++;
        sleep(1);
        cout << *(char*)data << endl;
    }

    return((void*)g_Count);
}

int main()
{
    pthread_t myThread;
    int threadRet;
    char* data = "hello";
    int retVal;

    threadRet = pthread_create(&myThread,nullptr,thread_up,(void*)data); //data로 쓰레드에 인자값 넘겨줌
    if(threadRet != 0){
        exit(-1);
    }

    pthread_join(myThread,(void**)&retVal);  // retVal이 쓰레드에서 리턴받는값 받아옴
    printf("retVal =%d\n",retVal);

    return 0;
}
