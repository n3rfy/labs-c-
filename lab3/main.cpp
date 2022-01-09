#include <iostream>

import BPZ1902.Ogloblin.Lab3.Task1;
import BPZ1902.Ogloblin.Lab3.Task2;
import BPZ1902.Ogloblin.Lab3.Task3;
import BPZ1902.Ogloblin.Lab3.Task4;
import BPZ1902.Ogloblin.Lab3.Task5;
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();


int main() {
	setlocale(LC_ALL, "Russian");
	
	while (true){
		double x;
		double eps;
		int n;
		cout << "Введите значение x: ";
		cin >> x;
		cout << "Введите нужную точность eps: ";
		cin >> eps;
		cout << "Введите значение n: ";
		cin >> n;
		int choose = 0;
		printf("Выберите номер таска:\n\t1 - Task1\n\t2 - Task2\n\t3 - Task3\n\t4 - Task4\n\t5 - Task5\n\t6 - Выход: ");
		cin >> choose;
		printf("\n");
		switch (choose){
			case 1:
				task1();
				printf("\n");
				break;
			case 2:
				task2(); 
				printf("\n");
				break;
			case 3:
				task3();
				printf("\n");
				break;
			case 4:
				task4();
				printf("\n");
				break;
			case 5:
				task5();
				printf("\n");
				break;
			case 6:
				return 0;
			default:
				printf("Выбирете число!\n");
		}
	}
	return 0;
}


void task1() {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task1::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task1::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task1::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task1::f4(eps) << endl;
}


void task2() {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task2::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task2::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task2::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task2::f4(eps) << endl;
}

void task3() {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task3::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task3::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task3::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task3::f4(eps) << endl;
}

void task4() {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task4::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task4::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task4::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task4::f4(eps) << endl;
}

void task5() {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task5::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task5::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task5::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task5::f4(eps) << endl;
}