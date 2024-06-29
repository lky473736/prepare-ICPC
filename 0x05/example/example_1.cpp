#include <iostream>
#define MX 10
using namespace std;

int top = 0;
int stack[MX] = {};

void push (int num) {
    if (top >= MX) {
        printf ("overflow\n");
        return;
    }
    
    stack[top] += num;
    top++;
}

void pop() {
    if (top < 0) {
        printf ("underflow\n");
        return;
    }
    
    top--;
    stack[top] = NULL;
}

void topprint() {
    printf ("top : %d\n", stack[top-1]);
}

void print() {
    for (int i = 0; i < MX; i++) {
        printf ("%d ", stack[i]);
    }
    
    
    printf("\n");
}

int main() {
    for (int i = 0; i < 11; i++) {
        push(i+1);
        topprint();
        print();
    }
    
    for (int i = 0; i < 11; i++) {
        pop();
        topprint();
        print();
    }
}
