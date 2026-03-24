#include <iostream>

using namespace std;

int plus(int a){
    int ans=0;
    for(int i = 0; i < a; i++){
        ans+=i
    }
    return ans/10;
}

int main() {
    int N;
    cin >> N;

    cout << plus(N);

    return 0;
}