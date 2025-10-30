#include "Player.h"
#include "Argm.h"
CMain_Framework::CMain_Framework() {
    money = 0;
    baseIncome = 10.0;
    bonus = 1.0;
    multiplier = 1.0;
}

void CMain_Framework::playRound(int round) {
    double income = baseIncome * multiplier;
    double actualIncome = OMG_actualIncome(baseIncome, multiplier, round);
    money += actualIncome;
    idk_multiplier(&multiplier, round);

    std::cout << "round  " << round + 1 << "\n";
    std::cout << "actualIncome  " << actualIncome << "\n";
    std::cout << "Crash  " << money << "\n";
    std::cout << "multiplier  " << multiplier << "\n";
    std::cout << "------------------------\n";
}

void CMain_Framework::runGame(int rounds) {
    std::cout << "===start===\n";
    for (int i = 0; i < rounds; i++) {
        playRound(i);
    }
    std::cout << "===over===\n";
    std::cout << "crash: " << money << "\n";
}

double CMain_Framework::getMoney() const {
    return money;
}

double CMain_Framework::getBaseIncome() const {
    return baseIncome;
}

double CMain_Framework::getBonus() const {
    return bonus;
}

double CMain_Framework::getMultiplier() const {
    return multiplier;
}