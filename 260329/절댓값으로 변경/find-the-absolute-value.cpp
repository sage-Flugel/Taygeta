#include <iostream>

using namespace std;
int absluteV(int a);

int main() {
    int n;
    int arr[50];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << absluteV(arr[i]) << " ";
    }


    return 0;
}

int absluteV(int a){
    if(a < 0)
        return a*(-1);
    else
        return a;
}

