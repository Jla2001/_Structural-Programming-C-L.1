#include <iostream>
using namespace std;

int main(){
    int fish, tometo;
    int xfish, xtometo, lfish, ltometo;
    int usefish, usetometo;
    cout << "fish : ";
    cin >> fish;
    cout << "tometo : ";
    cin >> tometo;
    cout << "fish use : ";
    cin >> usefish;
    cout << "tometo use : ";
    cin >> usetometo;

    xfish = fish / usefish;
    xtometo = tometo / usetometo;

    if(xfish <= xtometo){
        cout << "fish : " << fish << "  tometo : " << tometo << endl;
        cout << "fish use : " << usefish << "  tometo use : "<< usetometo << endl;
        cout << "Can : " << xfish << endl;
        lfish = fish -(xfish*usefish);
        cout << "fish r : " << lfish;
        ltometo = tometo -(xtometo*usetometo);
        cout << "  tometo r :" << ltometo;
    }else{
        cout << "Can : " << xtometo << endl;
        lfish = fish -(xfish*usefish);
        cout << "fish r : " << lfish;
        ltometo = tometo -(xtometo*usetometo);
        cout << "  tometo r :" << ltometo;
    }
    return(0);
}