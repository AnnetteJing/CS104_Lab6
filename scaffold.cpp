#include <iostream>
#include <cstdlib>
#include randfuncs.h

using namespace std;


int main(int argc, char *argv[]) {
    const string EXIT = "quit";
    string command;
    do {
	cout << "calc: ";
        cin >> command;

        if ("help" == command)
        {
            // to do
	    cout << "There are three rand functions with the following jobs: 1) flips coin, 
                2) rolls six-sided dice, 3) rolls twenty-sided dice. Enter in coin, six dice,
                or twenty dice, respectively, to use these functions." << endl;
        }
        else if (command == "coin") {
            return FlipCoins();
        }
        else if (command == "six dice") {
            return RollSixDice();
        }
        else if (command == "twenty dice") {
            return RollTwentyDice();
        }
        else
        {
           // to do for start
	   cout << "unknown command" << endl;
	   return 1;
        }
    } while (EXIT != command);
    return 0;
}