#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "Please enter a simple expression ";
    cout << "(number operator number) : ";
    int LeftOperand, RightOperand;
    char Operator;
    cin >> LeftOperand >> Operator >> RightOperand;
    int Result;

    if(Operator == '+'){
        Result = LeftOperand + RightOperand;

    }else if(Operator == '-'){
        Result = LeftOperand - RightOperand;

    }else if(Operator == '*'){
        Result = LeftOperand * RightOperand;

    }else if(Operator == '/'){
        Result = LeftOperand / RightOperand;

    }else{
        cout << Operator << " is unrecognized operation.";
        cout << endl;
        return(1);

}
    /*switch (Operator){
        case '+' : Result = LeftOperand + RightOperand;
                    break;
        case '-' :  Result = LeftOperand - RightOperand;
                    break;
        case '*' :  Result = LeftOperand * RightOperand;
                    break;
        case '/' :  Result = LeftOperand + RightOperand;
                    break;
        default :   cout << Operator << " is unrecognized operation.";
                    cout << endl;
                    return(1);
    }*/
    cout << LeftOperand << " " << Operator << " ";
    cout << RightOperand << " equals " << Result << endl;
    return(0);
}
