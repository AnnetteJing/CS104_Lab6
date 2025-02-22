#include <iostream>
#include <cstdlib>
#include <string>
#include "randfuncs.h"
#include "mathfuncs.h"
extern "C" {
    #include "magic.h"
}

using namespace std;


int main(int argc, char *argv[]) {
    const string EXIT = "quit";
    string command;
    std::string HELP_MESSAGE = std::string(
        "---Help documentation---"
        "RANDOM"
        "There are three rand functions with the following jobs:"
        "1) flips coin,"
        "2) rolls six-sided dice,"
        "3) rolls twenty-sided dice."
        "Enter in coin, six dice, or twenty dice, respectively, to use these functions."
        "MATH FUNCTIONS"
        "1) Enter '-' to subtract numbers,"
        "2) Enter '*' to multiply numbers,"
        "3) Enter '/' to divide numbers."
    );
    do {
	cout << "calc: ";
        cin >> command;

        if ("help" == command)
        {
	    cout << HELP_MESSAGE << endl;
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
        else if ("-" == command)
        {
            double a;
            double b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << subtract(a, b) << endl;
        }
        else if ("*" == command)
        {
            double a;
            double b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << multiply(a, b) << endl;
        }
        else if ("/" == command)
        {
            double a;
            double b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << divide(a, b) << endl;
        }
        else if ("magic" == command)
        {
            std::string path;
            cout << "Enter a path";
            std::getline(cin, path);
            cout << get_mime(path.c_str()) << endl;
        }
        else
        {
            cout << "unknown command" << endl;
            return 1;
        }
    } while (EXIT != command);
    return 0;
}