#include <iostream>

using namespace std;

void evennum(int n,int *a);

int main() {
    int n;
    int arr[50];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    evennum(n,arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
void evennum(int n,int *a){
    
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0)
            a[i] /= 2;
    }

}