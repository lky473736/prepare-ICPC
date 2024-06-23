#include <iostream>
#include <cstdio>
#include <cstdbool>
#include <cmath>

int func4 (int N) { // O(logn)
    int i = 0;
    
    while (i <= sqrt(1000000000)) {
        if (pow(2, i) > N) {
            return pow(2, i-1);
        }
        
        i++;
    }
    
    return 0;
}

int main() {
    std::cout << func4(5) << std::endl;
    std::cout << func4(97615282) << std::endl;
    std::cout << func4(1024) << std::endl;
    
    return 0;
}