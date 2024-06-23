#include <iostream>

int func1 (int N) { // O(n)
    int sum = 0;
    
    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    
    return sum;
}

int main() {
    std::cout << func1(16);
    
    return 0;
}