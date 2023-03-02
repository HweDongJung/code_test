//https://school.programmers.co.kr/learn/courses/30/lessons/136798

#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int knight[100001] = {0,};
    for(int i=1; i <= number; i++){
        for(int j=1; j <= number/i; j++){
            knight[i*j]++;
        }
    }
    
    for(int i=1; i<=number; i++){
        if(knight[i]>limit) answer += power;
        else answer += knight[i];
    }
    
    return answer;
}