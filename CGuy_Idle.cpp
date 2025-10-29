#include "CGuy_Idle.h"

double money = 0;
double baseIncome = 10.0;
double bonus = 1.0;
double multiplier;

void playRound(int round) {
    double income = baseIncome * multiplier ;

    double actualIncome = income * std::sqrt(round + 1);

    money += actualIncome;

    if (round % 5 == 0) {
        multiplier += 0.1;
    }

    std::cout << "round  " << round + 1 << "\n";
    std::cout << "actualIncome  " << actualIncome << "\n";
    std::cout << "Crash  " << money << "\n";
    std::cout << "multiplier  " << multiplier << "\n";
}
int main()
{
    

    for (int i = 0; i < 10; i++)  
    {
        playRound(i);
    }

    return 0;
}