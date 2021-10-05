#include <iostream>
using namespace std;

int main(){
    int Salary, OT;
    char late;
    cout << "Enter Salary : ";
    cin >> Salary;

    while(late != 'Y' && late != 'N' ){
        cout << "Late (Y/N) : ";
        cin >> late;
        if(late == 'Y'){
        Salary += 1000;
        }
    }

    cout << "Enter OT Hours : ";
    cin >> OT;

    cout << "Salary : " << Salary+OT*200;
    return(0);
}