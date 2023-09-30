//https://www.acmicpc.net/problem/2501
#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int answer=0, turn=0;
    
    for(int i=1; i<=m; i++){
        if(m%i==0){
            turn++;
            if(n == turn) answer = i;
        }
    }
    cout << answer;
    return 0;
}