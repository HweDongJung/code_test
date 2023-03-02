//https://school.programmers.co.kr/learn/courses/30/lessons/147355
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p);


int solution(string t, string p) {
    int answer = 0;
    int p_length = p.length();
    int t_length = t.length();
    int intp = stoi(p);
    
    for(int i=0; i <= t_length - p_length; i++){
        string subt = t.substr(i, p_length);
        if(subt.length() < p_length) answer++; continue;
        if(stoi(subt) <= intp) answer++;
    }
    

    return answer;
}