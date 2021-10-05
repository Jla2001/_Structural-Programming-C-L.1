//ข้อที่ 2

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    float circum, area, volume, r, num;
    float pi = 3.14;
    cout << "Enter the numbber of radious : ";
    cin >> r;
    
    cout << "Calculate the circumference of circle\n";
    circum = 2.0*pi*r;

    cout << "Calculate the area of circle\n";
    area = pi*pow(r,2);

    cout << "Calculate the volume phere\n";
    volume =(4.0/3.0)*pi*pow(r,3);

    cout << "Enter the choice : ";
    cin >> num;

    if(num == 1){
        cout <<"circumference is " << circum <<endl;

    }else if(num == 2){
        cout <<"area is " << area <<endl;

    }else if(num == 3){
        cout <<"volume is " << volume <<endl;
    }

    return(0);
}