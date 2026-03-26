#include <iostream>
using namespace std;

void ultra(int a, int b){// +
    cout << a << ' ' << '+' << ' ' << b << ' ' << '=' << ' ' << a+b;
}
void mins(int a, int b){// -
    cout << a << ' ' << '-' << ' ' << b << ' ' << '=' << ' ' << a-b;
}
void dvid(int a, int b){///
    cout << a << ' ' << '/' << ' ' << b << ' ' << '=' << ' ' << a/b;
}
void tms(int a, int b){//*
    cout << a << ' ' << '*' << ' ' << b << ' ' << '=' << ' ' << a*b;
}


int main() {
    int a,b;
    char k;
    cin >> a >> k >> b;

    if(k == '+')
        ultra(a,b);
    else if(k == '-')
        mins(a,b);
    else if(k == '/')
        dvid(a,b);
    else if(k == '*')
        tms(a,b);
    else
        cout << "False";


    return 0;
}