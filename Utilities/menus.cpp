// ns_general_functions_mainMenu
void mainMenu() {
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Exit The Program\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tExiting the Program!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_mainMenu_colored_validationed
void mainMenu() {
    int choice;
    do {
        system("clear");
        cout << ANSI_PURPLE << ANSI_BOLD << "\t==========>$Menu Name$<==========\n" << ANSI_RESET;
        cout << ANSI_BRIGHT_WHITE << "\t<---------------------->\n"
                << ANSI_GREEN << "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Exit The Program\n"
                << ANSI_BRIGHT_WHITE << "\t<---------------------->\n" << ANSI_RESET;
        choice = Validation<int>::getInput("\x1b[32m    Enter Your Choice: \x1b[0m");
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << ANSI_BRIGHT_GREEN << "\tExiting the Program!\n" << ANSI_RESET;
                break;
            }
            default: {
                cout << ANSI_BRIGHT_GREEN << "\tINVALID INPUT! KINDLY TRY AGAIN!\n" << ANSI_RESET;
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_mainMenu_parameterized
void mainMenu($DataType$ &$VariableName$) {
    // Takes the Object as Reference
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Exit The Program\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tExiting the Program!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_mainMenu_parameterizedPtrBased
void mainMenu($DataType$ *&$VariableName$) {
    // Takes the Pointer as Reference
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Exit The Program\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tExiting the Program!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_template_mainMenu_parameterized
template<template T>
void mainMenu($DataType$<T> &$VariableName$) {
    // Takes the Object as Reference
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Exit The Program\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tExiting the Program!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_template_mainMenu_parameterizedPtrBased
template<template T>
void mainMenu($DataType$<T> *&$VariableName$) {
    // Takes the Pointer as Reference
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Exit The Program\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tExiting the Program!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_innerMenu
void innerMenu() {
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Return to Main Menu\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tReturning to Main Menu!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_innerMenu_colored_validationed
void innerMenu() {
    int choice;
    do {
        system("clear");
        cout << ANSI_PURPLE << ANSI_BOLD << "\t==========>$Menu Name$<==========\n" << ANSI_RESET;
        cout << ANSI_BRIGHT_WHITE << "\t<---------------------->\n"
                << ANSI_GREEN << "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Return to Main Menu\n"
                << ANSI_BRIGHT_WHITE << "\t<---------------------->\n" << ANSI_RESET;
        choice = Validation<int>::getInput("\x1b[32m    Enter Your Choice: \x1b[0m");
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << ANSI_BRIGHT_GREEN << "\tReturning to Main Menu!\n" << ANSI_RESET;
                break;
            }
            default: {
                cout << ANSI_BRIGHT_GREEN << "\tINVALID INPUT! KINDLY TRY AGAIN!\n" << ANSI_RESET;
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_innerMenu_parameterized
void innerMenu($DataType$ &$VariableName$) {
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Return to Main Menu\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tReturning to Main Menu!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_innerMenu_parameterizedPtrBased
void innerMenu($DataType$ *&$VariableName$) {
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Return to Main Menu\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tReturning to Main Menu!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_template_innerMenu_parameterized
template<typename T>
void innerMenu($DataType$<T> &$VariableName$) {
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Return to Main Menu\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tReturning to Main Menu!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}

// ns_general_functions_template_innerMenu_parameterizedPtrBased
template<typename T>
void innerMenu($DataType$<T> *&$VariableName$) {
    int choice;
    do {
        system("clear");
        cout << "\t==========>$Menu Name$<==========\n"
                "\t<---------------------->\n"
                "    The Following Functionalities are Provided:-\n"
                "    1 - \n"
                "    2 - Return to Main Menu\n"
                "\t<---------------------->\n";
        cout << "    Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                break;
            }
            case 2: {
                cout << "\tReturning to Main Menu!\n";
                break;
            }
            default: {
                cout << "\tINVALID INPUT! KINDLY TRY AGAIN!\n";
                break;
            }
        }
    } while (choice != 2);
}
