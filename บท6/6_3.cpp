//6_3
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main(){
    int Data[10];
    srand((unsigned int)time(0));
    for (int i = 0; i < 10; i++){
        Data[i] = rand() % 30 + 1;
    }
    cout << "Element Value Histogram " << endl
         << endl;
    for (int i = 0; i < 10; i++){
        cout << setw(5) << i << "   " << setw(4) << Data[i] << "  ";
        for (int k = 1; k <= Data[i]; k++){
            cout << "*";
        }
        cout << endl;
    }

    return (0);
}