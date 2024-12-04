#include <iostream>

int main() {
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 4; j++) {
            std::cout << i * j;
            if (j < 4) {
                std::cout << " ";
            } else {
                std::cout << "   " << i * 10 << std::endl;
            }
        }
    }

    return 0;
}
