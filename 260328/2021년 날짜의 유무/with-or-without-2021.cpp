#include <iostream>

using namespace std;

bool clnder(int month,int day){
    if(month > 13)
        return false;
    if(day > 32)
        return false;
    if(month == 2)
        if(day > 28)
            return false;
    
    if(month <= 7 && month % 2 == 1){
        if(day > 32)
            return false;
    }
    else if(month == 4 || month == 6){
        if(day > 30)
            return false;
    }
    if(month >= 8 && month % 2 == 0){
        if(day > 32)
            return false;
    }
    else if(month == 9 || month == 11){
        if(day > 30)
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