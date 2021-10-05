#include <iostream>
using namespace std;

int main(){
    int stdScore,BestScore,i;
    while(stdScore != -1){
        cin >> stdScore;

        if(stdScore > BestScore){
            BestScore = stdScore;
        }
    }
    cout << "BestScore :" << BestScore;
    return(0);
}