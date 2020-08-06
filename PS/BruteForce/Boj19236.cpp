//청소년 상어

#include <iostream>


using namespace std;

const int MAX = 17;

int fish[MAX];


int main(){

    for(int i=0; i<17; i++){
        int num,dir;
        cin >> num >> dir;
        fish[num] = dir;
    }


    return 0;
}