#include <iostream>



int main() {
    unsigned int numberN = 0;
    std::cin >> numberN;
    std::cout << numberN / 100 + numberN % 100/10 + numberN % 10;
    return 0;
}