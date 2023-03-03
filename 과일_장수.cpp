// https://school.programmers.co.kr/learn/courses/30/lessons/135808
// STL sorting 함수를 이용하면 쉽게 진행, 직접pop 하는 방법과 정수 포인터로 한박스의 최소값만 빼서 계산하는 방법 
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());
    int size = score.size();
    for(int i=0; i<size/m; i++){
        for (int j = 0; j < m - 1; j++)
        {
            score.pop_back();
        }
        answer += m * score[score.size()-1];
        score.pop_back();
    }

    return answer;
}

int solution2(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());
    int pointer = score.size();
    
    for(int i=0; i<score.size()/m; i++){
        pointer -= m;
        answer += m * score[pointer];
    }

    return answer;
}