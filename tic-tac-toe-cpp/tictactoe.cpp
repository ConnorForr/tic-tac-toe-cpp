#include <iostream>

int userInput() {
    int user_input;
    try {
    std::cout << "Select your move";
    std::cin >> user_input;
    return user_input;
    } catch (const std::exception&) {
        std::cout << user_input << " is not a valid input, try again.";
        return -1;
    }
}





int main() {
    while (true) {
        int input = userInput();
        if (input == -1) {
            userInput();
        } else {
            break;
        }
    }
    return 0;
}
