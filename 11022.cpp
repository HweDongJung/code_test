//https://www.acmicpc.net/problem/11022
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    vector<string> vec;

    for(int i=1; i <= t; i++){
        int a, b;
        cin >> a >> b;
        cin.ignore();
        string ans = "Case #" + to_string(i) + ": " + to_string(a) + " + " + to_string(b) + " = " + to_string(a+b);
        vec.push_back(ans);
    }

    for(int i=0; i<t; i++){
        cout << vec[i] << "\n";
    }

    return 0;
}