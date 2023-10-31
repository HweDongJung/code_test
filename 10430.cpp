//https://www.acmicpc.net/problem/10430
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    cin.ignore();

    cout << (A+B)%C << "\n";
    cout << ((A%C) + (B%C))%C << "\n";
    cout << (A*B)%C << "\n";
    cout << ((A%C) * (B%C))%C << "\n";

    return 0;
}