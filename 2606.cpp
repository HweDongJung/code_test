//https://www.acmicpc.net/problem/2606
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<pair<int, int>> vec;
vector<int> traveled;
int nodes, numofpair;

void DFS(int node){
    traveled.push_back(node);
    for(int i=0; i<numofpair; i++){
        if(vec[i].first == node){
            if(find(traveled.begin(), traveled.end(), vec[i].second) == traveled.end()) DFS(vec[i].second);
        } else if(vec[i].second == node){
            if(find(traveled.begin(), traveled.end(), vec[i].first) == traveled.end()) DFS(vec[i].first);
        }
    }
}

int main(){
    cin >> nodes;
    cin.ignore();
    cin >> numofpair;
    cin.ignore();

    for(int i=0; i<numofpair; i++){
        int a, b;
        cin >> a >> b;
        cin.ignore();

        vec.push_back(make_pair(a, b));

    }

    DFS(1);

    cout << traveled.size() -1 ;

    return 0;
}
