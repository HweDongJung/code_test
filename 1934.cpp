//https://www.acmicpc.net/problem/1934
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    vector<int> vec;

    for(int i=0; i< t; i++){
        int a, b, bigger, smaller;
        cin >> a >> b;
        cin.ignore();

        if(a>b){
            bigger = a;
            smaller = b;
        }
        else {
            bigger = b;
            smaller = a;
        }
        for(int j=1; j <= smaller; j++){
            if((bigger*j)%smaller == 0){
                vec.push_back(bigger*j);
                break;
            }
        }
    }

    for(int i=0; i<t; i++) cout << vec[i]<< "\n";


    return 0;
}