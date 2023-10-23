//https://www.acmicpc.net/problem/2161
#include <iostream>
#include <queue>

using namespace std;

int main() {
    int a;
    cin >> a;
    cin.ignore();

    queue<int> q;

    for(int i=1; i <= a ; i++){
        q.push(i);
    }

    for(;;){
        if(q.size() == 1) break;
        int a = q.front();
        cout << a << " ";
        q.pop();
        if(q.size() == 1) break;
        a = q.front();
        q.pop();
        q.push(a);
    }
    cout << q.front();

    return 0;
}