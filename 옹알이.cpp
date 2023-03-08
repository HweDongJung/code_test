//https://school.programmers.co.kr/learn/courses/30/lessons/133499
#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;

    for(int i=0; i<babbling.size(); i++){
        string a = babbling[i];
        for(;a.size() > 0;){
            if(a.substr(0,3) == "aya" || a.substr(0,3) == "woo"){
                a = a.erase(0, 3);
            }
            else if(a.substr(0,2) == "ye" || a.substr(0,2) == "ma"){
                a = a.erase(0,2);
            }
            else break;
            if(a.size() == 0) answer++;
        }
    }

    return answer;
}