#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
	double result;
    while(true){
        cout << "Enter x: ";
        cin >> x;
        result = (cos(x) + sin(x)) / (cos(x) - sin(x));
        printf("result: %.4f\n", result);
    }
	return 0;
}
