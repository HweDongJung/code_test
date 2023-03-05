#include <string>
#include <vector>
#include <algorithm>
// score가 k보다 더 작은 경우 대비 
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer, glory;
    for(int i=0; i<k; i++){
        if(i == score.size()) break;
        glory.push_back(score[i]);
        sort(glory.begin(), glory.end(), greater<>());
        answer.push_back(glory[glory.size()-1]);
    }

    for(int i=k; i<score.size(); i++){
        if(score[i] > glory[glory.size()-1]){
            glory.pop_back();
            glory.push_back(score[i]);
            sort(glory.begin(), glory.end(), greater<>());
            answer.push_back(glory[glory.size()-1]);
        }
        else answer.push_back(glory[glory.size()-1]);
    }
    return answer;
}