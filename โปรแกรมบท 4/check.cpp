#include <iostream>
using namespace std;

int main(){
    int GPA;
    cout << "enter your GPA : ";
    cin >> GPA;
    if(GPA >= 80){
        cout << " A ";

    }else if(GPA >= 70){
        cout << "B";
    }else if(GPA >= 60){
        cout << "C";
    }else if(GPA >= 50){
        cout << "D";
    }else if(GPA < 50){
        cout << "F";
    }
    return(0);
}