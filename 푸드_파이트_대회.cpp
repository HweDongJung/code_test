//https://school.programmers.co.kr/learn/courses/30/lessons/134240


#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer1 = "";
    string answer2 = "";
    for(int j=1; j<food.size();j++)
        for(int i=0; i<food[j]/2; i++){
            string num = to_string(j);
            answer1 = answer1 + num;
            answer2 = num + answer2;
        }


    return answer1 + "0" + answer2;
}