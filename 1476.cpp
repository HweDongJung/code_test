
//https://www.acmicpc.net/problem/1476
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cin.ignore();
    if(a == 15) a=0;
    if(c == 19) c=0;
    vector<int> vec;

    for(int i=0; ; i++){
        int num = i*28+b;
        if(num%15==a && num%19==c){
            cout << num;
            break;
        }
    }

    return 0;
}