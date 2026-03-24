#include <iostream>
#include <string>

using namespace std;

int is_3_in_there(int x,int y){
    int ans=0;
    int chkr=0;
    string s;

    for(int i = x; i <= y; i++){
        s = to_string(i);

        for(char c : s){
            if(c == '3' || c == '6' || c == '9'){
                ans++;
                chkr++;
            }
        }
    }
    for(int i = x; i <= y; i++){
        if(i % 3 == 0 && chkr == 0)
            ans++;
    }
    
    return ans;

}



int main() {
    int a, b;
    cin >> a >> b;




    cout << is_3_in_there(a,b);

    return 0;
}