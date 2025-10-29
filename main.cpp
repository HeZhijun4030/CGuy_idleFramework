#include "CGuy_Idle.h"
#include "Player.h"
int main() {
    CMain_Framework game;

    game.runGame(10);

    // 显示最终状态
    std::cout << "\n=== GameOver ===\n";
    std::cout << "总资金: " << game.getMoney() << "\n";
    std::cout << "最终倍率: " << game.getMultiplier() << "\n";

    return 0;
}