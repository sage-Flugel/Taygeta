#include <iostream>

using namespace std;

int sum(int a){
    int ans=0;
    for(int i = 1; i <= a; i++){
        ans+=i;
    }
    return ans/10;
}

int main() {
    int N;
    cin >> N;

    cout << sum(N);

    return 0;
}