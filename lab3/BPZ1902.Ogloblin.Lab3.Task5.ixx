export module BPZ1902.Ogloblin.Lab3.Task5;

import <cmath>;

export namespace RBPO {
	namespace Lab3 { 
		namespace Task5 {
		double f1(double x);
		double f2(double x);
		double a(int i);
		double f3(int n);
		double f4(double eps);
	}
	}
	
}

module :private;

double RBPO::Lab3::Task5::f1(double x) {
	return (cos(x) + sin(x)) / (cos(x) - sin(x));
}

double RBPO::Lab3::Task5::f2(double x) {
	return (x < 2) ? abs(1.0-sin(2.0*x)) : (1.0 + x*x) / sqrt (2.0*x);
}

double RBPO::Lab3::Task5::a(int i) {
	return pow(-1.0, i) * (i+1.0)/pow(i, 3.0)+1.0;
}

double RBPO::Lab3::Task5::f3(int n) {
	double result = 0.0;
	for (int i = 0; i <= n; i++) {
		result += a(i);
	}
	return result;
}

double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double curr = a(1);
	double result = prev + curr;
	for (int i = 2; abs(prev - curr) > eps; i++) {
		prev = curr;
		curr = a(i);
		result += curr;
	}
	return result;
}