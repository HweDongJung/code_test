//https://school.programmers.co.kr/learn/courses/30/lessons/131128
// answer 문자열 변수에 한글자 한글자 붙이는 것은 비효율적(시간초과)이므로 string name(n,문자열패턴) name = 문자열패턴 * n 문법을 이용하여 시간을 단축시킴  
//참고사이트: https://stackoverflow.com/questions/12483406/create-string-with-specified-number-of-characters
#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int x_list[10]={0,};
    int y_list[10]={0,};
    for(int i=0; i < X.size(); i++){
        x_list[X[i] - '0']++;
    }
    for(int i=0; i < Y.size(); i++){
        y_list[Y[i] - '0']++;
    }
    for(int i=0; i<10; i++){
        if(x_list[i] > y_list[i]) x_list[i] = y_list[i];
    }
    
    for(int i=9; i>=0; i--){
        char ch = i + '0';
        string s(x_list[i],ch);
        answer += s;
    }
    if(answer == "") return "-1";
    if(answer[0] == '0') return "0";
    return answer;
}