//https://www.acmicpc.net/problem/2914
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cin.ignore();

    cout << a * (b-1) + 1;

    return 0;
}