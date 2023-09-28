//https://www.acmicpc.net/problem/10870
#include <iostream>

using namespace std;

int pivo(int n){
    if(n==0) return 0;
    else if(n==1 || n==2) return 1;
    return pivo(n - 1) + pivo(n - 2);

}

int main() {
    int n;
    cin >> n;
    cout << pivo(n);

    return 0;
}