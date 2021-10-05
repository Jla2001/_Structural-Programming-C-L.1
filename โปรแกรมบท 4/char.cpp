#include <iostream>
using namespace std;

int main(){
    char K;
    cout << "enter your Key :";
    cin >> K;
    if(K <= '9'){
        cout << K <<" : Is Number\n";
    }else{
        cout << K << " : Is Not Number";
    }
}