#include <iostream>
#include <cstdlib>

using namespace std;

int FlipCoins() {
    return (std::rand() % 2) + 1;
}

int RollSixDice() {
    return (std::rand() % 6) + 1;
}

int RollTwentyDice() {
    return (std::rand() % 20) + 1;
}

int main(int argc, char *argv[]) {
    
}