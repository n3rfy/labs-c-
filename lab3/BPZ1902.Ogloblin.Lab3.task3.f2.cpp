module BPZ1902.Ogloblin.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				return (x < 2) ? abs(1.0-sin(2.0*x)) : (1.0 + x*x) / sqrt (2.0*x);
			}
		}
	}
}