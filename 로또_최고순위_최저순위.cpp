#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero_count = 0, win_count= 0;
    int rank[7] = {6,6,5,4,3,2,1};
    for(int i=0; i<lottos.size(); i++){
        if(lottos[i] == 0) zero_count++;
        else if(find(win_nums.begin(),win_nums.end(), lottos[i]) != win_nums.end()) win_count++;
    }
    answer.push_back(zero_count + win_count);
    answer.push_back(win_count);
    return answer;
}