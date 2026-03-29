#include <iostream>
#include <string>

using namespace std;

void isvarious(string a);

int main() {
    string A;
    cin >> A;

    isvarious(A);

    return 0;
}

void isvarious(string a){
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[0] != a[i])
            cnt++;
        else
            continue;
    }
    if(cnt >= 1)
        cout << "Yes";
    else
        cout << "No";
}