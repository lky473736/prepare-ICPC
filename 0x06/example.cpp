#include <iostream>
#define MX 10
using namespace std;

int queue[MX] = {};
int head = 0, tail = 0;

void push(int data) {
    if (tail >= MX) {
        printf ("overflow");
        return;
    }
    
    queue[tail] = data;
    tail++;
}

void pop() {
    if (head >= tail) {
        printf ("underflow");
        return;
    }
    
    queue[head] = NULL;
    head++;
}

int front() {
    return queue[head];
}

int back() {
    return queue[tail-1];
}

void print() {
    for (int i = 0; i < MX; i++) {
        cout << queue[i] << ' ';
    }
    
    cout << '\n';
}

int main()
{
    for (int i = 0; i < 10; i++) {
        push(i+1);
        print();
        cout << front() << ' ' << back() << '\n';
    }
    
    for (int i = 0; i < 10; i++) {
        pop();
        print();
    }
    
    return 0;
}
