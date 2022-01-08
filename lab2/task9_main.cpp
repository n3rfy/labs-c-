#include "ogloblin.h"

using namespace std;

int main(){
    while(true){
        cout << "Enter x: ";
        cin >> ogloblin::x;
		ogloblin::f();
        printf("f: %.4f\n", ogloblin::result);
    }
	return 0;
}
