//https://www.acmicpc.net/problem/2475
#include <iostream>

using namespace std;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    int total = a[0]*a[0] + a[1]*a[1] + a[2]*a[2] + a[3]*a[3] + a[4]*a[4];

    cout << total%10;

    return 0;
}