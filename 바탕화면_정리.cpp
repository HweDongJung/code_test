//https://school.programmers.co.kr/learn/courses/30/lessons/161990

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int minrow = 51,maxrow = -1,mincol = 51, maxcol = -1;

    for(int i=0; i<wallpaper.size(); i++){
        for(int j=0; j<wallpaper[0].size(); j++){
            if(wallpaper[i][j] == '#'){
                if(i < minrow) minrow = i;
                if(i > maxrow) maxrow = i;
                if(j < mincol) mincol = j;
                if(j > maxcol) maxcol = j;
            }
        }
    }
    answer.push_back(minrow);
    answer.push_back(mincol);
    answer.push_back(maxrow+1);
    answer.push_back(maxcol+1);
    return answer;
}