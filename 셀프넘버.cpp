//https://www.acmicpc.net/problem/2581
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    bool selfNum[10001];
    fill(selfNum, selfNum + 10001, true);

    for(int i=1; i<10000; i++){
        int self;
        if(i<10){
            self = i + i;
        } else if(i<100){
            self=i + i/10 + i%10;
        } else if(i<1000){
            self=i + i/100 + (i%100)/10 + (i%100)%10;
        } else {
            self=i + i/1000 + (i%1000)/100 + ((i%1000)%100)/10 + ((i%1000)%100)%10;
        }
        if(self <= 10000) selfNum[self] = false;
    }

    for(int i =1; i<10001; i++){
        if(selfNum[i]) cout<<i<<"\n"; 
    }

    return 0;
}