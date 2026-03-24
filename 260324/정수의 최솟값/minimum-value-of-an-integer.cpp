#include <iostream>

using namespace std;

int low(int x,int y,int z){
    int ans = x;
    if(ans > y)
        ans = y;
    else if(ans > z)
        ans = z;

    return ans;
}



int a, b, c;

int main() {
    cin >> a >> b >> c;

    cout << low(a,b,c);

    return 0;
}