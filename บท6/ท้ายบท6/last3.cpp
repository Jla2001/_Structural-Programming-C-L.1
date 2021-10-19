#include <iostream>
#include <iomanip>
using namespace std;

void getdata();
void average();
void displaydata();

int count = 3,id[20],i,j;
double total[20],score[20][3],test[3],TT;
string name[20];

int main(){
    getdata();
    average();
    displaydata();

    return(0);
}

void getdata(){
    for(i=0;i<count; i++){
        cout << "Enter id : ";
        cin >> id[i];
        cout <<"Enter name : ";
        cin >> name[i];
        for(j=0;j<3;j++){
            do{
                cout <<"Enter Score "<<j+1<<" : ";
                cin >> score[i][j];
            }while(score[i][j] > 100);
        }
    }

}

void average(){
    //loop หาคะแนนจริง
    for(i=0;i<3;i++){
        for(j=0;j<count;j++){
            if(i < 2){
                score[j][i] /= 4;
            }else{
                score[j][i] /= 2;
            }
            test[i] += score[j][i];
        }
    }
    //loopหาคะแนนรวมจริง
    for(i=0;i<count;i++){
        for(j=0;j<3;j++){
            total[i] += score[i][j]; 
        }
        TT += total[i];
    }
}

void displaydata(){
    cout <<"--------------------------------------------------------------------------------------\n";
    cout <<"No.    Id        Name      Test1(25%)   Test2(25%)   Test3(50%)    Total(100%)\n";
    cout <<"--------------------------------------------------------------------------------------\n";
    for(i=0;i<count;i++){
            cout << i+1<<".     "<< id[i] <<"       "<<name[i];
        for(j=0;j<3;j++){
            cout <<"        "<< fixed << setprecision(2)<< score[i][j];
        }
        cout  <<"       "<< total[i] <<endl;
    }
    cout <<"--------------------------------------------------------------------------------------\n";
    cout << "Average  of  mark        ";
    for(i=0;i<3;i++){
        cout <<"       "<< test[i] / count;
    }
    cout <<"       "<< TT<<endl;
}