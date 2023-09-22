//https://www.acmicpc.net/problem/2581
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int m, n;
    cin >> m;
    cin.ignore(100, '\n');
    cin >> n;

    bool sosu[10001];
    fill(sosu, sosu + 10001, true);
    sosu[1] = false;
    for (int i = 2; i < 100; i++) {
        if (sosu[i]) {
            for (int f = 2; f * i <= n; f++) {
                sosu[f * i] = false;
            }
        }
    }
    

    int answer = 0;
    bool first = true;
    int firstNum = 0;
    for (int i = m; i <= n; i++) {
        if (sosu[i] && first) {
            answer += i;
            first = false;
            firstNum = i;
        }
        else if(sosu[i]) answer += i;
    }

    
    if (answer == 0) cout << -1;
    else cout << answer << "\n" << firstNum;

    return 0;
}