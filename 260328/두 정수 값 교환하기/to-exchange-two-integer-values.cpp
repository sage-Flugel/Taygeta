#include <iostream>

using namespace std;

void boogiwoogi(int *n1,int *n2);

int main() {
    int n, m;

    cin >> n >> m;

    boogiwoogi(&n,&m);

    cout << n << " " << m;

    return 0;
}

void boogiwoogi(int *n1,int *n2){
    int tmp;

    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;

}