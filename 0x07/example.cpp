#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX; // 배열의 중간 (확장성 위해)

void push_front(int x){
    if (head <= 0) {
        printf ("overflow");
        return;
    }
    
    dat[head] = x;
    head--;
}

void push_back(int x){
    if (tail >= 2*MX+1) {
        printf ("overflow");
        return;
    }
    
    dat[tail] = x;
    tail++;
}

void pop_front(){
    dat[head+1] = NULL;
    head++;
}

void pop_back(){
    dat[tail-1] = NULL;
    tail--;
}

int front(){
    return dat[head+1];
}

int back(){
    return dat[tail-1];
}

void test(){
  push_back(30); // 30
  cout << front() << '\n'; // 30
  cout << back() << '\n'; // 30
  push_front(25); // 25 30
  push_back(12); // 25 30 12
  cout << back() << '\n'; // 12
  push_back(62); // 25 30 12 62
  pop_front(); // 30 12 62
  cout << front() << '\n'; // 30
  pop_front(); // 12 62
  cout << back() << '\n'; // 62
}

int main(void){
  test();
}
