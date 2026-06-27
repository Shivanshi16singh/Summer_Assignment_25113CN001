#include <bits/stdc++.h>

using namespace std;

struct Question {
    string questionText;
    string options[4];
    char correctOption;
};

int main() {
    vector<Question> quiz = {
        {
            "Which programming language is known as a multi-paradigm language and supports OOP?",
            {"A. C", "B. C++", "C. HTML", "D. SQL"},
            'B'
        },
        {
            "What is the time complexity of searching in a balanced Binary Search Tree (BST)?",
            {"A. O(1)", "B. O(n)", "C. O(log n)", "D. O(n log n)"},
            'C'
        },
        {
            "Which of the following is not a valid storage class specifier in C++?",
            {"A. auto", "B. register", "C. mutable", "D. dynamic"},
            'D'
        }
    };

    int score = 0;
    char userAnswer;

    cout << "--- Welcome to the Quiz Application ---" << endl << endl;

    for (int i = 0; i < quiz.size(); i++) {
        cout << "Question " << (i + 1) << ": " << quiz[i].questionText << endl;
        for (int j = 0; j < 4; j++) {
            cout << quiz[i].options[j] << endl;
        }

        cout << "Enter your answer (A, B, C, or D): ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        if (userAnswer == quiz[i].correctOption) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! The correct answer was " << quiz[i].correctOption << "." << endl;
        }
        cout << "---------------------------------------" << endl << endl;
    }

    cout << "Quiz Finished!" << endl;
    cout << "Your Final Score: " << score << " / " << quiz.size() << endl;

    return 0;
}