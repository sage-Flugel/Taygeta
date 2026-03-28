#include <iostream>

using namespace std;

int Y;

bool isthis_twy(int a);
bool clnder(int month,int day);
int ssn(int a);

/*
clnder -----> true는 존재하는 날짜임 (M,D 넣기)
isthis_twy ------>true는 윤년임 (Y 넣기)
*/

int main() {
    int M, D;
    cin >> Y >> M >> D;

    if(clnder(M,D)){
        if(ssn(M) == 0)
            cout << "Spring";
        else if(ssn(M) == 1)
            cout << "Summer";
        else if(ssn(M) == 2)
            cout << "Fall";
        else if(ssn(M) == 3)
            cout << "Winter";
       /* else
            cout << "-1";*/
    }
    else
        cout << "-1";

    return 0;
}
/////////////////////////////////////////////////////////////////
bool isthis_twy(int a){
    int chk = 0;
    if(a % 4 == 0)
        chk = 1;
    if(a % 100 == 0 && a % 400 != 0)
        chk = 0;
    
    if(chk == 1)
        return true;
    else
        return false;
}
/////////////////////////////////////////////////////////////////
bool clnder(int month,int day){
    if(month > 12)
        return false;
    if(day > 31)
        return false;
    if(month == 2){
        if(isthis_twy(Y)){
            if(day > 29)
                return false;
        }
        else{
            if(day > 28)
                return false;
        }
    }
    if(month == 4 || month == 6 || month == 9 || month == 11){// 30일달
        if(day > 30)
            return false;
    }
    else{
        if(day > 31)
            return false;
    }

    return true;
}
/////////////////////////////////////////////////////////////////
int ssn(int a){
    if(3 <= a && a <= 5)
        return 0;
    else if(6 <= a && a <= 8)
        return 1;
    else if(9 <= a && a <= 11)
        return 2;
    else if(a == 12 || a == 1 || a == 2)
        return 3;
  /*  else
        return 10;*/
}















