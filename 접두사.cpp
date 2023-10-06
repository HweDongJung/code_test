//https://www.acmicpc.net/problem/1141
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int n;
    vector<string> str;
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        str.push_back(s);
        cin.ignore();
    }
    
    return 0;
}