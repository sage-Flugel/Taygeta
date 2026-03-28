#include <iostream>

using namespace std;

int isprnum(int a,int b){
    int cnt,rslt = 0;


    for(int i = a; i <= b; i++){
        cnt = 0;
        for(int j = 2; j < i; j++){
            if(i % j == 0)
                cnt = 1;
        }
        if(cnt == 0 && (i % 10 + i / 10) % 2 == 0)
            rslt++;
    }


    return(rslt);

}


int main() {
    int a,b;
    cin >> a >> b;

    


    cout << isprnum(a,b);

    return 0;
}