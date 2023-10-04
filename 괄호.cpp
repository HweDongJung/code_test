// https://www.acmicpc.net/problem/9012
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void cmp(string a){
    vector<int> temp;
    for(int i=0; i<a.length();i++){
        if(a[i] == '(') temp.push_back(1);
        else if(temp.size() != 0) temp.pop_back();
        else cout << "NO"; 
    }
    if(temp.size() == 0) cout << "YES";
    else cout << "NO";
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> str;

    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        str.push_back(temp);
        cin.ignore();
    }

    for(int i=0; i<n; i++) {
        cmp(str[i]);
        cout << "\n";
    }


    return 0;
}