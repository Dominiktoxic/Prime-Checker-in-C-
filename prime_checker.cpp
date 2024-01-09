#include <iostream>
#include <cstdlib>

bool is_prime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    while (true) {
        std::string input;
        std::cout << "Enter a number (enter 'q' to quit): ";
        std::cin >> input;

        if (input == "q") {
            std::cout << "Quitting the program. Goodbye! \n";
            std::exit(0);
        }

        int num_to_check = std::stoi(input);

        if (is_prime(num_to_check)) {
            std::cout << num_to_check << " is a prime number. \n";
        } else {
            std::cout << num_to_check << " is not a prime number. \n";
        }
    }

    return 0;
}