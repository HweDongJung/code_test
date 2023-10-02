//https://www.acmicpc.net/problem/1676
#include <iostream>

using namespace std;

int main() {
    int n, num2=0, num5=0;
    cin >> n;
    for(int i=n; i>0; i--){
        for(int f=i;f%2==0 || f%5==0;){
            if(f%2==0) {
                num2++; 
                f=f/2;
            }
            if(f%5==0) {
                num5++;
                f=f/5;
            }
        }
    }
    
    if(num2 <= num5) cout << num2;
    else cout << num5;

    return 0;
}