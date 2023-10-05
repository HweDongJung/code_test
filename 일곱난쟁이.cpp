//https://www.acmicpc.net/problem/2309
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int list[9];
    int total=0;
    for(int i=0; i < 9; i++){
    int f;
    cin >> f;

    list[i] = f;
    total += f;
    cin.ignore();
    }
    
    sort(list, list+9); 
    int a, b;
    for(int i=0; i<8; i++){
        for(int f=i+1; f<9; f++){
            if((total - list[i] - list[f]) == 100){
                a = i;
                b = f; 
                break;
            }
        }
    }

    for(int i=0; i < 9; i++){
    if(i==a || i==b) continue;
    cout << list[i] << "\n";
    }

    return 0;
}