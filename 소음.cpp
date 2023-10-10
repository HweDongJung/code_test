//https://www.acmicpc.net/problem/2935
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input1, input2;
    char a;
    cin >> input1;
    cin.ignore();
    cin >> a;
    cin.ignore();
    cin >> input2;
    cin.ignore();
    
    if(a == '*'){
        cout << input1;
        for(int i=1; i<input2.length(); i++){
            cout <<"0";
        }
    }
    else {
        if(input1.length() > input2.length()){
            input2[input1.length()-input2.length()] = '1';
            cout << input1;
        }
        else if(input1.length() < input2.length()){
            input1[input2.length()-input1.length()] = '1';
            cout << input2;
        }
        else{
            input1[0] = '2';
            cout << input1;
        }

    }
    
    return 0;
}