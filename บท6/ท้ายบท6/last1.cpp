#include <iostream>
using namespace std;

bool isPalindrome(char Temp[]);

int main(){
    char text[5];
    cout << "Enter text :";
    for(int i = 0; i < 5; i++){
        cin >> text[i];
    }
    cout << endl;
    if(isPalindrome(text) == true){
        cout << "Your text is Palindrome."<<endl;
    }else{
        cout <<"Your text is not Palindrome."<<endl;
    }

    return(0);
}

bool isPalindrome(char Temp[]){
    char p,re[5];
    int i = 5,j;
    bool Palindrome;
    j=i-1;
    for(int i=0;i<5;i++){
        re[i]=Temp[i];
    }
    for(i=0;i<j;i++){
        p=Temp[i];
        Temp[i]=Temp[j];
        Temp[j]=p;
        j--;
    }
    for(i=0;i<5;i++){
        if(re[i] == Temp[i]){
            for(i=0;i<5;i++){
                cout << re[i] << " = " << Temp[i] << endl;
            }
            Palindrome = true;
            return(Palindrome);
        }else{
            cout << re[i] << " = " << Temp[i] << endl;
            Palindrome = false;
            return(Palindrome);
        }
    }
}