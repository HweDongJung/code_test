//https://school.programmers.co.kr/learn/courses/30/lessons/140108
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;

    char first = s[0];
    int notFirst = 0, isFirst = 1;
    for(int i =1; i<s.size(); i++){
        if(s[i] == first) isFirst++;
        else notFirst++;
            
        if(notFirst == isFirst){
            answer++;
            if(i == s.size() - 1) break;
            first = s[i+1];
            notFirst = 0;
            isFirst = 0;
        }
    }
    cout << notFirst << endl;
    cout << isFirst << endl;

    if(notFirst != isFirst) answer++;
    cout << answer << endl;
    return answer;
}

int main(){
    solution("abracadabra");
    return 0;
}