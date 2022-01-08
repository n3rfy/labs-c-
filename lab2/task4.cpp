#include <iostream>
#include <cmath>

using namespace std;

void f(const double&, double&);

int main(){
	double x;
	double result;
    while(true){
        cout << "Enter x: ";
        cin >> x;
        f(x,result);
        printf("f: %.4f\n", result);
    }
	return 0;
}


void f(const double& x, double& result){
	result = (cos(x) + sin(x)) / (cos(x) - sin(x));
}
