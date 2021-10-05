#include <iostream>
using namespace std;

int main(){
    int area;
    char insize;
    char size;
    int sumA = 0,sumM = 0;
    cout << "Enter area : ";
    cin >> area;
    cout << "Enter size : ";
    cin >> insize;

    if(area >= 20 && area <=40){                     //small
        sumA = 200000;
        size = 's';
    }else if(area >= 41 && area <=100){               //medium
        sumA = 200000 +((area-40)*3000);
        size = 'm';
    }else if(area >= 101){              //large
        sumA = 350000 + ((area-60)*2000);
        size = 'l'; 
    }

    if(insize == 'b' && size == 's'){
        sumA += (area*5000);
        cout << sumA << endl;
    }else if(insize == 'b'&& size == 'm'){
        sumA += (area*7500);
        cout << sumA << endl;
    }else if(insize == 'b' && size == 'l'){
        sumA += (area*15000);
        cout << sumA << endl;
    }else if(insize == 'G' && size == 'm'){
        sumA += (area*10000);
        cout << sumA << endl;
    }else if(insize == 'G'&& size == 'l'){
        sumA += (area*20000);
        cout << sumA << endl;
    }else if(insize == 'G'&& size == 'm'){
        sumA += (area*15000);
        cout << sumA << endl;
    }else if(insize == 'G'&& size == 'l'){
        sumA += (area*30000);
        cout << sumA << endl;
    }else{
        cout << "error";
    }
    return(0);
}