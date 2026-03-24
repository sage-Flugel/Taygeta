#include <iostream>

using namespace std;

int low(int x,int y,int z){
    int ans;
    if(x >= y)
        ans = y;
    if(y >= x)
        ans = x;

    if(z >= y)
        ans = y;
    if(y >= z)
        ans = z;

    if(z >= x)
        ans = x;
    if(x >= z)
        ans = z;

    return ans;
}



int a, b, c;

int main() {
    cin >> a >> b >> c;

    cout << low(a,b,c);

    return 0;
}