#include <iostream>

using namespace std;

extern double x, result;
extern void f();

int main(){
    while(true){
        cout << "Enter x: ";
        cin >> x;
		f();
        printf("f: %.4f\n", result);
    }
	return 0;
}

