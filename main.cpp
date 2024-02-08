#include <iostream>
#include <cstdlib>

int main() {
    int min_num;
    int max_num;
    srand(time(NULL));

    std::cout << "Enter the minimum number: ";
    std::cin >> min_num;

    std::cout << "Enter the maximum number: ";
    std::cin >> max_num;

    std::cout << "The random number is: " << rand() % max_num + min_num << "\n";
}