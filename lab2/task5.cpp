#include <iostream>
#include <cmath>

using namespace std;

double x;
double result;

void f();

int main() {
	while(true){
		cout << "Enter x: ";
		cin >> x;
		f();
		printf("f: %.4f\n", result);
	}
	return 0;
}

void f() {
	result = (cos(x) + sin(x)) / (cos(x) - sin(x));
}
