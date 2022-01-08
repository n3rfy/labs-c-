#include <iostream>
#include <cmath>

using namespace std;

double f(double x){
	return (cos(x) + sin(x)) / (cos(x) - sin(x));
}

int main(){
    double x;
    while(true){
        cout << "Enter x: ";
        cin >> x;
        printf("f: %.4f\n", f(x));
    }
	return 0;
}
