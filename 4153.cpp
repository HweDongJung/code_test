//https://www.acmicpc.net/problem/4153
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<string> vec;

    for(;;){
        int a, b, c;
        cin >> a >> b >> c;
        cin.ignore();
        int tri[3];
        tri[0] = a; 
        tri[1] = b; 
        tri[2] = c; 
        sort(tri, tri+3);
        if(a == 0) break;
        if(tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2]) vec.push_back("right");
        else vec.push_back("wrong");
    }

    for(int i=0; i<vec.size(); i++) cout << vec[i]<< "\n";


    return 0;
}