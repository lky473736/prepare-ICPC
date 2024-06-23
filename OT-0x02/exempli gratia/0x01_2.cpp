#include <iostream>

int func2 (int *arr, int N) { // O(n^2)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && arr[i] + arr[j] == 100) {
                return 1;
            }
        }
    }
    
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 99};
    std::cout << func2(arr, 6);
    
    return 0;
}