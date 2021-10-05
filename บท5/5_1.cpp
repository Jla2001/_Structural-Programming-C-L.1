#include <iostream>
#include <string>
using namespace std;

int main(){
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    if((Ch >= 48 && Ch <= 57) || (Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122)){
        if((Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122)){
            if((Ch >= 97 && Ch <= 122)){
                Message = "Lower character";
            }else{
                Message = "upper character";
            }
        }else if((Ch >= 48 && Ch <= 57)){
                Message ="digit";
        }
    }else{
        Message = "special character";
    }
    cout <<"\'" << Ch << " is " << Message << endl;
    if((Ch >= 65 && Ch <= 90) || (Ch >= 97 && Ch <= 122)){
        if((Ch >= 97 && Ch <= 122)){
            cout <<  "\'" << Ch << "\'" << " convert to upper \'"; 
            Ch = Ch-32;
            cout << Ch << "\'";
        }else{
            cout <<  "\'" << Ch << "\'" << " to lower \'";
            Ch = Ch+32;
            cout << Ch <<  "\'"; 
        }
        cout << endl;
    }
    return(0);
}