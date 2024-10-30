#include <iostream>

void drawLine(int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << "-"; // Print a dash
    }
    std::cout << std::endl; // Move to the next line
}

int main() {
    drawLine(10); // Example usage
    return 0;
}
