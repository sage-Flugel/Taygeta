#include <iostream>
using namespace std;

int main() {
	double a = 13, g=0.165;

	cout << fixed;

	cout.precision(6);
	cout << a << " * " << g << " = " << a*g;    // 출력 : 33.5673

}
