#include <iostream>

int main() {
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    int stars = rows; // Number of stars in the first row

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (int j = 1; j < i; j++) {
            std::cout << " ";
        }

        // Print the stars
        for (int k = 1; k <= stars; k++) {
            std::cout << "*";
        }

        std::cout << std::endl;
        stars--;
    }

    return 0;
}
