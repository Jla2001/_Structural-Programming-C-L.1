#include <iostream>
using namespace std;

int main(){
    float gallon,miles;
    cin >> gallon;
    cin >>miles;

    cout << miles/gallon <<endl;
    gallon *= 4.5461;
    miles *= 1.6093;
    cout << gallon/miles <<endl;
    cout << miles/gallon;


    return(0);

}