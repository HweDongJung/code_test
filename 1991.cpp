//https://www.acmicpc.net/problem/1991
#include <iostream>
#include <vector>

using namespace std;

struct node{
    int name;
    int left;
    int right;
};
node nodes[26];

void pre(int i){
    cout << (char)(nodes[i].name + 65);
    if(nodes[i].left >= 0) pre(nodes[i].left);
    if(nodes[i].right >= 0) pre(nodes[i].right);
}

void inOrder(int i){
    
    if(nodes[i].left >= 0) inOrder(nodes[i].left);
    cout << (char)(nodes[i].name + 65);
    if(nodes[i].right >= 0) inOrder(nodes[i].right);
}

void postOrder(int i){
    
    if(nodes[i].left >= 0) postOrder(nodes[i].left);
    if(nodes[i].right >= 0) postOrder(nodes[i].right);
    cout << (char)(nodes[i].name + 65);
}

int main() {
    int num;
    cin >> num;
    cin.ignore();

    for(int i=0; i<num; i++){
        char a, b, c;
        cin >> a >> b >> c;
        cin.ignore();

        node temp = {a - 65, b - 65, c - 65};
        nodes[temp.name] = temp;
    }

    pre(0);
    cout << "\n";
    inOrder(0);
    cout << "\n";
    postOrder(0);
    return 0;
}