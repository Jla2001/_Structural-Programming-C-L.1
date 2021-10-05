#include <iostream>
using namespace std;

int main(){
    int day = 0,month = 0,year = 0;
    int sumday,summonth,sumyear,calday;

    cout << "Enter day month and year : ";
    do{
        cin >> day;
        if(day > 30 || day < 1){
            cout << "Error Day !!!\n";
            cout << "pla Enter Day again : ";
        }
    }while(day > 30 || day < 1);

    do{ 
        cin >> month;
        if(month > 12 || month < 1){
            cout << "Error month !!!\n";
            cout << "pla Enter month again : ";
        }
    }while(month > 12 || month < 1);

    do{
        cin >> year;
        if(year > 2559 || year < 2513){
            cout << "Error year !!!\n";
            cout << "pla Enter year again : ";
        }
    }while(year > 2559 || year < 2513);

    sumday = day-1;
    summonth = month-1;
    sumyear = year-2513;
    calday = sumday+(summonth*30)+(sumyear*360);
    cout << "\nThe difference is about " << calday <<" days";

    return(0);
}