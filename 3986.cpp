//https://www.acmicpc.net/problem/3986
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, answer = 0;
    cin >> a;
    cin.ignore();

    for(int i=0; i < a; i++){
        string a;
        vector<char> str;
        cin >> a;
        cin.ignore();

        for(int i=0; i<a.length(); i++){
            str.push_back(a[i]);
            if(str.size() > 1){
                if(str[str.size()-1] == str[str.size() - 2]){
                    str.pop_back();
                    str.pop_back();
                }
            }
        }
        if(str.size() == 0) answer++;
    }

    cout << answer;
    return 0;
}