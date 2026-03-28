#include <iostream>

using namespace std;

bool clnder(int month,int day){
    if(month > 12)
        return false;
    if(day > 31)
        return false;

    if(month == 2){
        if(day > 28){
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

int main() {
    int M, D;
    cin >> M >> D;

    if(clnder(M,D))
        cout << "Yes";
    else
        cout << "No";



    return 0;
}