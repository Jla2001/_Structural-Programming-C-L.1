#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double chairman,student = 500,Votes,NVotes,setVotes,pvotes,pnvotes,point,ppoint,lpoint,lper;
    cout << "Enter number student chairman : ";
    cin >> chairman;
    cout <<"Number of right student : " << student <<endl;
    srand(time(nullptr));
    Votes = rand()%500;
    pvotes = (Votes / student)*100;
    pnvotes = ((500-Votes) / student)*100;
    cout << Votes <<endl <<"Number of Votes : " << pvotes <<"%" <<endl << "Number of not Votes : "<< pnvotes <<"%";
    cout <<"\n\nResult of election chairman\n";
    cout <<"------------------------------------------"<<endl;
    cout <<"NO.     " << "Votes     " << "Percent(%)" <<endl;
    cout <<"------------------------------------------"<<endl;
    setVotes = Votes;
    for(int i = 0; i < chairman; i++){
        if(i < chairman-1){
            do{
                point = rand();
            }while(point > Votes);
            Votes = Votes - point;
            ppoint = (point/setVotes)*100;
            cout << i+1 <<".      ";
            cout << fixed << setprecision(0) << point <<"       ";
            cout << fixed << setprecision(2) << ppoint <<endl;
        }else{
            point = Votes;
            ppoint = (Votes/setVotes)*100;
            cout << i+1 <<".      ";
            cout << fixed << setprecision(0) << point <<"       ";
            cout << fixed << setprecision(2) << ppoint <<endl;
        }
        lpoint += point;
        lper += ppoint;
    }
    cout <<"------------------------------------------"<<endl;
    cout <<"Total   "<< fixed << setprecision(0) <<lpoint<<"       "<< fixed << setprecision(2) << lper <<endl;
    return(0);
}