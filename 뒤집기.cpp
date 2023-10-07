//https://www.acmicpc.net/problem/1439
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b) cout <<">";
    else if(a < b) cout << "<";
    else  cout <<"==";
    return 0;
}