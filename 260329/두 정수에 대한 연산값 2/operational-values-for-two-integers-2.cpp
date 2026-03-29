#include <iostream>

using namespace std;

int cclater(int a, int b);
void make_a_big(int &big,int &small);// 항상 a가 b보다 크도록 조정


int main() { 
    int a, b;
    cin >> a >> b;

    make_a_big(a,b);

    cout << a << " " << b;
    return 0;
}

void make_a_big(int &big,int &small){
    int tmp;
    if(big > small) // a가 b보다 크면
        NULL;
    else{
        tmp = big;
        big = small;
        small = tmp;
    }

}
int cclater(int &a, int &b){
    a*=2;
    b+=10;
}
