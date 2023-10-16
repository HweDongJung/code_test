//https://www.acmicpc.net/problem/7795
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    vector<string> vec;

    for(int i=0; i< t; i++){
        string s, answer="";
        getline(cin, s);
        
        stringstream ss(s);
        ss.str(s);
        string word;
        while(ss >> word) {
            answer = word + " " + answer;
        }
        vec.push_back(answer);
    }

    for(int i=0; i<t; i++){
        cout<<"Case #" << i+1 << ": " << vec[i] <<"\n";
    }

    return 0;
}