//ข้อที่2
#include <iostream>
using namespace std;

int main(){
    int book, toy, model, pen;
    int Calbook, Caltoy, Calmodel, Calpen;

    cout << "Input nimber 0f Book : ";
    cin >> book;
    cout << "Input nimber 0f Toy : ";
    cin >> toy;
    cout << "Input nimber 0f Model : ";
    cin >> model;
    cout << "Input nimber 0f Stationery : ";
    cin >> pen;

    Calbook = book*120;
    Caltoy = toy*80 ;
    Calmodel = model*50;
    Calpen = pen*15;

    float sum = Calbook+Caltoy+Calmodel+Calpen;

    if(sum <= 0 ){
        cout << "payment : " << 500 <<endl;
    }else if(sum >=1 && sum <= 4999){
        cout << "payment : " << 1000-(sum*0.10) <<endl;
    }else if(sum >= 10000 && sum <= 99999){
        cout << "payment : " << 1000+(sum*0.05) <<endl;

    }else if(sum >=100000){
        cout << "payment : " << 1000+(sum*0.10) <<endl;
    }

    return(0);
}