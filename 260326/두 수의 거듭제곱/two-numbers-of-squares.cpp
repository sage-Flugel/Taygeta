#include <iostream>

using namespace std;

void mtplyr(int x,int y){
    int a = x;

    for(int i = 1; i < y; i++)
        a = a*x;

    cout << a;

}

int main() {
    int a, b;
    cin >> a >> b;

    mtplyr(a,b);

    return 0;
}