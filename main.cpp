#include "CGuy_Idle.h"
#include "Player.h"
int main() {
    CMain_Framework game;

    game.runGame(10);

    // ��ʾ����״̬
    std::cout << "\n=== GameOver ===\n";
    std::cout << "���ʽ�: " << game.getMoney() << "\n";
    std::cout << "���ձ���: " << game.getMultiplier() << "\n";

    return 0;
}