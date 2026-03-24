#include <iostream>

using namespace std;

int cnter(int a){
    int ans;

    if(a % 2 == 0 && ((a/10)+(a%10)) % 5 == 0)
        ans = 1;
    else
        ans = 0;
    
    return(ans);
}


int n;

int main() {
    cin >> n;

    if(cnter(n) == 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}