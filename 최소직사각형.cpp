//https://school.programmers.co.kr/learn/courses/30/lessons/86491
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> big, small;
    for(int i=0; i < sizes.size(); i++){
        if(sizes[i][0] >= sizes[i][1]){
            big.push_back(sizes[i][0]);
            small.push_back(sizes[i][1]);
        }
        else{
            big.push_back(sizes[i][1]);
            small.push_back(sizes[i][0]);
        }
    }

    answer = *max_element(big.begin(), big.end()) * *max_element(big.begin(), big.end());
    return answer;
}