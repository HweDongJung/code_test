//https://www.acmicpc.net/problem/25372
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> str;

    for(int i=0; i< n; i++){
    string temp;
    cin >> temp;
    str.push_back(temp);
    cin.ignore();
    }
    int index=0;

    for(int i=0; i<n; i++){
        bool isnum = true;
        if(str[i].length() < 6 || str[i].length() > 9) isnum=false;
        if(isnum) cout << "yes\n";
        else cout << "no\n";
    }


    return 0;
}