//6_4
#include <iostream>
using namespace std;
void ModifyArray(char Temp[]);
void ModifyElement(int Temp);

int main()
{
    char Data[5];
    for(int i = 0; i < 5; i++){
        cin >> Data[i];
    }
    cout << "Effects of passing entrie array pass-by-reference.\n";
    cout << "Original array's value : ";
    for (int i = 0; i < 5; i++)
        cout << Data[i] << "  ";
    cout << endl;
    ModifyArray(Data);
    cout << "Modified array's value : ";
    for (int i = 0; i < 5; i++){
        cout << Data[i] << "  ";
    }
    cout << endl
         << endl;
    cout << "Effects of passing array element pass-by-value.\n";
    cout << "Data[3] before modify element : ";
    cout << Data[3] << endl;
    ModifyElement(Data[3]);
    cout << "Data[3] after modify element : ";
    cout << Data[3] << endl
         << endl;

    return (0);
}

void ModifyArray(char Temp[])
{
    char p;
    int i,j;
    j=i-1;
    for(i=0;i<j;i++){
        p=Temp[i];
        Temp[i]=Temp[j];
        Temp[j]=p;
        j--;
    }
}

void ModifyElement(int Temp)
{
    Temp *= 2;
}