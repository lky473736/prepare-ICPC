#include <iostream>
#include <cstdio>
#include <cmath>

int func3 (int N) { // O(sqrt(n))
    for (int i = 1; i <= sqrt(N); i++) {
        if (pow(i, 2) == N) {
            return 1;
        }
    }
    
    return 0;
}

int main(void) {
    std::cout << func3(144) << std::endl;
    std::cout << func3(99) << std::endl;
    
    return 0;
}