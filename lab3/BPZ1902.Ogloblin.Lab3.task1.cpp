module BPZ1902.Ogloblin.Lab3.Task1;


namespace RBPO {
	namespace Lab3{
		namespace Task1 {
			double f1(double x) {
				return (cos(x) + sin(x)) / (cos(x) - sin(x));
			}

			double f2(double x) {
				return (x < 2) ? abs(1.0-sin(2.0*x)) : (1.0 + x*x) / sqrt (2.0*x);
			}

			double a(int i) {
				return pow(-1.0, i) * (i+1.0)/pow(i, 3.0)+1.0;
			}

			double f3(int n) {
				double result = 0.0;
				for (int i = 0; i <= n; i++) {
					result += a(i);
				}
				return result;
			}

			double f4(double eps) {
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
		}
	}
}