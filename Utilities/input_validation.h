// Created by MuhammadHamza on 14/11/2024.

#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

// ns_class_template_validation
#include <iostream>
#include <limits>
#include <string>
using namespace std;

template<typename T>
class Validation {
public:
    static T getInput(const string &prompt);
};

// General Function
template<typename T>
T Validation<T>::getInput(const string &prompt) {
    T input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            // Input successful
            break;
        } else {
            cerr << "\tInvalid Input! Please enter again.";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return input;
}

// Specialization for string
template<>
string Validation<string>::getInput(const string &prompt) {
    string input;
    while (true) {
        cout << prompt;
        char nextChar = cin.peek();
        if (nextChar == '\n') {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        getline(cin, input); // Using getline directly for string input
        // Check if the input is not empty
        if (!input.empty()) {
            break; // Input successful
        } else {
            cerr << "\tInvalid Input! Please enter again: ";
        }
    }
    return input;
}

// Specialization for int
template<>
int Validation<int>::getInput(const string &prompt) {
    int input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            // Input successful
            break;
        } else {
            cerr << "\tInvalid Input! Please enter an integer: ";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return input;
}

// Specialization for double
template<>
double Validation<double>::getInput(const string &prompt) {
    double input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            // Input successful
            break;
        } else {
            cerr << "\tInvalid Input! Please enter a Number: ";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return input;
}

// Specialization for double
template<>
char Validation<char>::getInput(const string &prompt) {
    char input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            // Input successful
            break;
        } else {
            cerr << "\tInvalid Input! Please enter a Character: ";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return input;
}

// Specialization for bool
template<>
bool Validation<bool>::getInput(const string &prompt) {
    bool input;
    while (true) {
        cout << prompt;
        if (cin >> input) {
            // Input successful
            break;
        } else {
            cerr << "\tInvalid Input! Please enter a boolean value (0 or 1): ";
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }
    return input;
}

#endif //INPUT_VALIDATION_H
