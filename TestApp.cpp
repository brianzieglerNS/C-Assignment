// TestApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    string keys[5] = { "a", "b", "c", "d", "e" };
    string answers[5];
    int correctAnswers = 0;

    std::cout << "What is the answer to question 1:";
    cin >> answers[0];
    std::cout << "What is the answer to question 2:";
    cin >> answers[1];
    std::cout << "What is the answer to question 3:";
    cin >> answers[2];
    std::cout << "What is the answer to question 4:";
    cin >> answers[3];
    std::cout << "What is the answer to question 5:";
    cin >> answers[4];

    std::cout << "\n\nQuestion    Your Answer   Correct Answer\n";
    for (int i = 0; i < 5; i++) {
        cout << "Question " + std::to_string(i+1) + "\t" + answers[i] + "\t\t" + keys[i] + "\n";
        if (answers[i] == keys[i]) {
            correctAnswers++;
        }
    }
    std::cout << "\nYou got " + std::to_string(correctAnswers) + " out of 5 answers correct\n\n";
    std::cout << "\npress any key to exit\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
