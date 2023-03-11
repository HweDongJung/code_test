#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map <char, int> map;
    map.insert({'R',0});
    map.insert({'T',0});
    map.insert({'C',0});
    map.insert({'F',0});
    map.insert({'J',0});
    map.insert({'M',0});
    map.insert({'A',0});
    map.insert({'N',0});

    for(int i=0; i<survey.size(); i++){
        if(choices[i] > 4){
            map[survey[i][1]] += (choices[i] - 4);
        }
        else{
            map[survey[i][0]] += ( 4 - choices[i]);
        }
    }
    if(map['R'] >= map['T']) answer += 'R';
    else answer += 'T';
    if(map['C'] >= map['F']) answer += 'C';
    else answer += 'F';
    if(map['J'] >= map['M']) answer += 'J';
    else answer += 'M';
    if(map['A'] >= map['N']) answer += 'A';
    else answer += 'N';
    return answer;
}