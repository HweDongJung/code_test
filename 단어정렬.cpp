//https://www.acmicpc.net/problem/1141
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool Comp(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    } else {
        return a < b;
    }
}

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
    
    sort(str.begin(), str.end(),Comp);

    for(int i=0; i<n; i++){
        cout << str[i] << "\n";
    }

    return 0;
}