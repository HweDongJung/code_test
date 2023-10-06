#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> str;

    for(int i=0; i< 5; i++){
    string temp;
    cin >> temp;
    cin.ignore();
    }
    int index=0;

    for(int i=0; i<15 ;i++){
        if(i< str[0].length())cout << str[0][i];
        if(i< str[1].length())cout << str[1][i];
        if(i< str[2].length())cout << str[2][i];
        if(i< str[3].length())cout << str[3][i];
        if(i< str[4].length())cout << str[4][i];
    }


    return 0;
}