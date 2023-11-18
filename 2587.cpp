//https://www.acmicpc.net/problem/2587
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    int av=0;
    for(int i=0; i<5; i++){
        int a;
        cin >> a;
        cin.ignore();
        vec.push_back(a);
        av += a;
    }
    av = av/5;
    sort(vec.begin(), vec.end());
    cout << av << "\n" << vec[2];

    return 0;
}