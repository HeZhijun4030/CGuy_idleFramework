#ifndef PLAYER_H
#define PLAYER_H
#include "CGuy_Idle.h"


class CMain_Framework {
private:
    double money;
    double baseIncome;
    double bonus;
    double multiplier;

public:

    CMain_Framework();

    void playRound(int round);
    void runGame(int rounds);


    double getMoney() const;
    double getBaseIncome() const;
    double getBonus() const;
    double getMultiplier() const;
};

#endif