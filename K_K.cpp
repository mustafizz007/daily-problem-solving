#include <iostream>
#include <cmath>

std::pair<int, int> findNumbers(int d) {
    for (int i = 1; i <= std::sqrt(d); ++i) {
        if (d % i == 0) {
            int j = d / i;
            if (i * j == d) {
                return {i, j};
            }
        }
    }
    return {-1, -1}; // If no such numbers are found
}

int main() {
    int d;
    std::cout << "Enter the value of d: ";
    std::cin >> d;
    
    std::pair<int, int> numbers = findNumbers(d);
    if (numbers.first != -1 && numbers.second != -1) {
        std::cout << "Numbers: " << numbers.first << ", " << numbers.second << std::endl;
    } else {
        std::cout << "No such numbers found for d = " << d << std::endl;
    }
    
    return 0;
}
