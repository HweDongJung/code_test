//https://www.acmicpc.net/problem/7795
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, num;
    cin >> t;
    cin.ignore();
    cin >> num;
    cin.ignore();
    int total=0;

    for(int i=0; i< num; i++){
        int a, b;
        cin >> a >> b;
        cin.ignore();
        total += (a*b);
    }

    if(total == t) cout<<"Yes";
    else cout<<"No";

    return 0;
}