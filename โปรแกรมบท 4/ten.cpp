#include <iostream>
#include <string>
using namespace std;

int main(){
    int money;
    cout << "enter your money Per year : ";
    cin >> money;

    if(money <= 100000){
        cout << 0.05*money;

    }else if(money >= 100001){
        cout << 0.1*money;

    }else if(money >= 500001){
        cout << 0.2*money;

    }else if(money >= 1000001){
        cout << 0.3*money;

    }else if(money > 4000000){
        cout << 0.37*money;

    }else{
        cout << "No";

    }
    return(0);
}