#include <iostream>
using namespace std;

int main(){
    int num,i,j,k;
    int c;
    cout << "Enter number : ";
    cin >> num;
    for (i=1; i<=num; ++i){
        for(j=0; j<=i; ++j){
            if(i % j == 0){
                cout << i;
            }
        }

    }
    return(0);
}