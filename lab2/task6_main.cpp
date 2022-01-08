#include <iostream>

using namespace std;

double f(double);

int main(){
    double x;
    while(true){
        cout << "Enter x: ";
        cin >> x;
        printf("f: %.4f\n", f(x));
    }
	return 0;
}

