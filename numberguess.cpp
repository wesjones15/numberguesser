#include <cstdlib>
#include <iostream>
#include <ctime>

int main() {
    srand( time(NULL) );
    int answer = std::rand() % 100;
    int turns = 0;
    bool correct = false;
    int guess;
    std::cout << "\n\nWelcome to Number Guessing Demo!\n";
    std::cout << "Guess a number between 0 and 100\n";
    while(!correct) {
        turns++;
        std::cout << "\nTurn " << turns << "\nEnter your guess:\n";
        std::cin >> guess;
        if (guess > answer) {
            std::cout << "You guessed too high. try again\n";
        } else if (guess < answer) {
            std::cout << "You guessed too low, try again!\n";
        }
        correct = (guess == answer);
    }
    std::cout << "You took " << turns << " turns to guess the correct answer of " << answer << "\n\n";

    return 0;
}