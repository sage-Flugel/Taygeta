#include <iostream>

using namespace std;


int cnter(int a, int b){
    int cnt = 0;

    for(int i = a; i <= b; i++){
        if(a % 2 != 0 && i % 3 != 0 && i % 9 == 0 && i % 10 != 5)
            cnt++;
    }

    return(cnt);
}


int main() {
    int a, b;
    cin >> a >> b;

    cout << cnter(a,b);

    return 0;
}