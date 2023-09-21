//https://www.acmicpc.net/problem/1978
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    bool sosu[1001];
    fill(sosu, sosu + 1001, true);
    sosu[1] = false;
    for (int i = 2; i < 32; i++) {
        if (sosu[i]) {
            for (int f = 2; f * i <= 1000; f++) {
                sosu[f * i] = false;
            }
        }
    }
    int a;

    cin >> a;
    cin.ignore(100, '\n');
    vector<int> b;
    b.clear();
    string num;
    getline(cin, num);
    

    istringstream ss(num);
    string stringBuffer;
    while (getline(ss, stringBuffer, ' ')) {
        b.push_back(stoi(stringBuffer));
    }

    int answer = 0;
    for (int i = 0; i < a; i++) {
        if (sosu[b[i]]) answer++;
    }
    cout << answer;
    return 0;
}