#include <iostream>
#include <cstdlib>

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
                2) rolls six-sided dice, 3) rolls twenty-sided dice." << endl;
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