//https://www.acmicpc.net/problem/2581
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int m, n, less;
    int max, min;
    cin >> m >> n;
    
    if(m => n) less = n;
    else less = m;

    for(int i=less;i<1;i--){
        if(m%i==0 && n%i==0){
           max = i; 
           break;
        } 
    }
    max = max * (m/max) * (n/max);
    cout << max << "\n" << min; 
    return 0;
}