#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    for(;ingredient.size() >= 4;){
        int tmp = answer;
        for(int i=0;i<ingredient.size()-4; i++){
            if(ingredient[i] == 1 && ingredient[i+1] == 2 && ingredient[i+2] == 3 && ingredient[i+3] == 1) {
                answer++;
                ingredient.erase(ingredient.begin()+i);
                ingredient.erase(ingredient.begin()+i+1);
                ingredient.erase(ingredient.begin()+i+2);
                ingredient.erase(ingredient.begin()+i+3);
            }
        }
        if(ingredient.size() < 4 || tmp == answer) break;
    }
    return answer;
}