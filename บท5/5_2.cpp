#include <iostream>
#include <string>
using namespace std;

int main(){
    int IntValue;
    long LongValue;
    float FloatValue;
    string StrValue;
    cout << "Enter string number :";
    cin >> StrValue;
    IntValue = atoi(StrValue.c_str());
    LongValue = atol(StrValue.c_str());
    FloatValue = atof(StrValue.c_str());
    cout << endl;
    cout << "Convert String to Numeric.\n";
    cout << "*****************************************************************************\n";
    cout << "Connvert to integer = " << IntValue << endl;
    cout << "Connvert to long = " << LongValue << endl;
    cout << "Connvert to float = " << FloatValue << endl << endl;
    srand(IntValue);
    cout << "Now random integer number 10 number : " << endl;
    cout << "*****************************************************************************\n";
    for(int n = 1,Num; n <= 10; n++){
        Num = rand()%10;
        cout << Num << " ";
    }
    cout << endl;
    return(0);

}