#include <iostream>
#include <string>

using namespace std;

bool palindrome(string a);

int main() {
    string A;
    cin >> A;

    if(palindrome(A))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

bool palindrome(string a){
    string opp;
    for(int i = a.size() - 1; i >= 0; i--){
        opp += a[i];
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != opp[i])
            return false;
        else
            return true;
    }

}

