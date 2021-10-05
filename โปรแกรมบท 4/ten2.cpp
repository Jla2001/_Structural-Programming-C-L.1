#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter number : ";
    cin >> num;
    if(num < 0){
        cout << num << " : Number is negative";

    }else if(num == 0){
        cout << num << " : Number is ZERO";

    }else if(num > 0){
        cout << num << " : Number is positive";

    }
    return(0);
}