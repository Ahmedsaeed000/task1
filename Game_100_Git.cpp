//Name Game: 100 Game

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the 100 Game" << endl;

    int total = 0; // Total sum
    int player = 1; // Current player (1 or 2)

    // Loop continues until the total reaches 100 or more
    while (total < 100) {
        // If it's player 1's turn
        if (player == 1) {
            int num1;
            // Loop to validate input from player 1
            while (true) {
                cout << "Player 1, enter a number from 1 to 10: ";
                cin >> num1;
                // Check if the number is valid and doesn't exceed 100
                if (num1 >= 1 && num1 <= 10 && total + num1 <= 100) {
                    total += num1; // Add the number to the total
                    cout << "Total: " << total << endl;
                    break;
                } else {
                    cout << " Please enter a number from 1 to 10 that doesn't exceed 100." << endl;
                }
            }
            // Check if player 1 wins
            if (total >= 100) {
                cout << "Player 1 wins!" << endl;
                break;
            }
            player = 2; // Switch to player 2's turn
        } else { // If it's player 2's turn
            int num2;
            // Loop to validate input from player 2
            while (true) {
                cout << "Player 2, enter a number from 1 to 10: ";
                cin >> num2;
                // Check if the number is valid and doesn't exceed 100
                if (num2 >= 1 && num2 <= 10 && total + num2 <= 100) {
                    total += num2; // Add the number to the total
                    cout << "Total: " << total << endl;
                    break;
                } else {
                    cout << " Please enter a number from 1 to 10 that doesn't exceed 100." << endl;
                }
            }
            // Check if player 2 wins
            if (total >= 100) {
                cout << "Player 2 wins!" << endl;
                break;
            }
            player = 1; // Switch to player 1's turn
        }
    }

    return 0;
}
