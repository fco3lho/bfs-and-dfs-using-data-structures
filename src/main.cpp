#include "Pile.hpp"
#include "Queue.hpp"
using namespace std;

void run() {
    char option;

    do {
        cout << endl << "--------------------------------------------------------------";
        cout << endl << endl << "\t\t~ Welcome to the main menu ~" << endl;
        cout << endl << "\t- Select your option: " << endl;
        cout << endl << "\t\tA. BFS | Breadth - first search;" << endl << "\t\tB. DFS | Depth - first search;" << endl;
        cout << "\t\tC. Quit.";
        cout << endl << endl << "\t- Your choice: ";
        cin >> option;
        option = toupper(option);

        if (option == 'A') {
            cout << endl << "--------------------------------------------------------------" << endl << endl;
            solve();
        } else if (option == 'B') {
            cout << endl << "--------------------------------------------------------------" << endl << endl;
            runMatrix();
        } else if (option == 'C') {
            cout << endl << "--------------------------------------------------------------" << endl << endl;
            cout << "\t\t    You chose to quit." << endl << endl;
            cout << "--------------------------------------------------------------" << endl << endl;
        }
    } while (option != 'C');
}

int main () {
    run();
}