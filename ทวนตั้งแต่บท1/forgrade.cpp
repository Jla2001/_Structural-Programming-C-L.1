#include <iostream>
using namespace std;

int main(){
    int P,M,F,sum;
    for(int i = 0;i < 3;){
        do{
            cout << "Enter Project Score : ";
            cin >> P;
            cout << "Enter Midterm Score : ";
            cin >> M;
            cout << "Enter Final Score : ";
            cin >> F;
            if(P > 20 || P < 0){
                cout << "Project Score Error !!!\n";
            }
            if(M > 30 || M < 0){
            cout << "Midterm Score Error !!!\n";
            }
            if(F > 50 || F < 0){
                cout << "Final Score Error !!!\n";
            }
        }while(P > 20 ||P < 0||M > 30||M < 0||F > 50 || F < 0);
        i++;
        sum = P+M+F;
        cout << "Total Score : "<< sum << endl;
        if(sum < 50 ){
            cout <<"Grade : F\n";
        }else if(sum >=80){
           cout <<"Grade : A\n";
        }else if(sum >=70 ){
            cout <<"Grade : B\n";
        }else if(sum >=60 ){
            cout <<"Grade : C\n";
        }else if(sum >= 50 ){
            cout <<"Grade : D\n";
        }
    }
    return(0);

}