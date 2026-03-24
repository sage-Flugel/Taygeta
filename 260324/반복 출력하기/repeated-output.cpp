#include <iostream>
using namespace std;
void printer(int n){
    for(int i = 0; i< n; i++){
        cout << "12345^&*()_" << "\n";
    }
}
int main() {
    int a;
    cin >> a;

    printer(a);

    return 0;
}