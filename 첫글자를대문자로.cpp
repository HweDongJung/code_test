//https://www.acmicpc.net/problem/4458
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    
    int n;
    vector<string> str;
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++){
        string s;
        getline(cin, s);
        str.push_back(s);
    }
    
    for(int i=0; i<n; i++){
        if(str[i][0] >= 'a') str[i][0] = str[i][0] - 32;
        cout << str[i] << "\n";
    }

    return 0;
}