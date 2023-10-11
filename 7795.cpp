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

    for(int i=0; i< t; i++){
    int A, B;
    cin >> A >> B;
    vector<int> avec, bvec;
    cin.ignore();
    string s;
	getline(cin, s);

    stringstream ss(s);
    ss.str(s);
    string word;
    while(ss >> word) {
        avec.push_back(stoi(word));
    }

    getline(cin, s);
    ss.str(s);
    while(ss >> word) {
        bvec.push_back(stoi(word));
    }

    }


    


    return 0;
}