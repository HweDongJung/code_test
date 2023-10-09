//https://www.acmicpc.net/problem/2667
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> danji;
int numOfHouse=0;
int n;

void DFS(int x, int y){
    danji[x][y] = '0';
    numOfHouse++;
    if(x+1 < n){
        if(danji[x+1][y] == '1')DFS(x+1,y);
    }
    if(y+1 < n){
        if(danji[x][y+1] == '1')DFS(x, y+1);
    }
    if(x-1 >= 0){
        if(danji[x-1][y] == '1')DFS(x-1, y);
    }
    if(y-1 >= 0){
        if(danji[x][y-1] == '1')DFS(x, y-1);
    }
}



int main() {
    cin >> n;
    cin.ignore();
    vector<int> numOfDanji;

    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        cin.ignore();
        danji.push_back(temp);
    }

    for(int i=0; i<n; i++){
        for(int f=0; f<n; f++){
            if(danji[i][f] == '1') {
                DFS(i, f);
                numOfDanji.push_back(numOfHouse);
                numOfHouse=0;
            }
        }
    }

    sort(numOfDanji.begin(), numOfDanji.end());
    cout << numOfDanji.size() << "\n";

    for(int i=0; i<numOfDanji.size(); i++){
        cout << numOfDanji[i] << "\n";
    }
    
    return 0;
}
