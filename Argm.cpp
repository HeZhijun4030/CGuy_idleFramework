#include "Argm.h"
double OMG_actualIncome(double baseIncome, double multiplier, int round) {
	double income = baseIncome * multiplier;
	double actualIncome = income * std::sqrt(round + 1);
	return actualIncome;
}
void idk_multiplier(double* multiplier, int round) {
	if ((round + 1) % 5 == 0) {
		*multiplier += 0.1;
	}

}