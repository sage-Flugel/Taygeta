#include <iostream>
using namespace std;

void printstar(){
    cout << "**********";
}


int main() {
   for(int i = 0; i< 5; i++){
        printstar();
        cout << "\n";
   }
    return 0;
}