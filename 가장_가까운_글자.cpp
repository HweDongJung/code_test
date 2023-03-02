//https://school.programmers.co.kr/learn/courses/30/lessons/142086

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int archive[26];
    fill_n(archive, 26, -1);

    for(int i=0; i<s.length(); i++){
        if( archive[(int)s[i] - 97] == -1 ){
            answer.push_back(-1);
            archive[(int)s[i] - 97] = i;
        }
        else{
            answer.push_back(i - archive[(int)s[i] - 97]);
            archive[(int)s[i] - 97] = i;
        }
    }


    return answer;
}