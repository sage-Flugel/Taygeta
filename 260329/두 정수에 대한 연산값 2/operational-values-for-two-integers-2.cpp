#include <iostream>

using namespace std;

void cclter(int &a, int &b);

int main() { 
    int a, b;
    cin >> a >> b;

    cclter(a,b);

    cout << a << " " << b;

    return 0;
}
void cclter(int &a, int &b){
    if(a > b){
        a*=2;
        b+=10;
    }
    else{
        b*=2;
        a+=10;
    }
}