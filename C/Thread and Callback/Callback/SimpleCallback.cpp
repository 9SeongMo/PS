#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

typedef int (*funcPtr)(int,int);

typedef enum
{
    my0,
    my1,
    my2,
    my3

}myEnum;

int add(int a,int b)
{
    return(a+b);
}

int add_machine(int a, int b, funcPtr func)
{
    return(func(a,b));
}

int main()
{
    funcPtr calc;
    int res;
    calc = add;
    res = add_machine(3,4,calc);

    cout << calc << "\n" << res << endl;

    cout << my0 << endl;

    return 0;

}

