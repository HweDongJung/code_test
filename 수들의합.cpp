//https://www.acmicpc.net/problem/2293
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    int total=0, answer=0;

    for(int i=1; i < n; i++){
    total +=i;
    answer++;
    if ( total == n ) break;
    else if((n - total) < (i+1)) break;
    }
    
    cout << answer;

    return 0;
}