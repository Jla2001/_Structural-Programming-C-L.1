#include <iostream>
using namespace std;

int main(){
    int mont;
    cout << "enter mont : ";
    cin >> mont;
    
    switch (mont)
    {
    case 1 :    cout << mont << " : January\n";
                break;
    case 2 :    cout << mont << " : February\n";
                break;
    case 3 :    cout << mont << " : March\n";
                break;
    case 4 :    cout << mont << " : April\n";
                break;
    case 5 :    cout << mont << " : June\n";
                break;
    case 6 :    cout << mont << " : July\n";
                break;
    case 7 :    cout << mont << " : January\n";
                break;
    case 8 :    cout << mont << " : August\n";
                break;
    case 9 :    cout << mont << " : September\n";
                break;
    case 10 :   cout << mont << " : October\n";
                break;
    case 11 :   cout << mont << " : November\n";
                break;
    case 12 :   cout << mont << " : December\n";
                break;            
    default:    cout << "don't know";
    }
    return(0);
}
