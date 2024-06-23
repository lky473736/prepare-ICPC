#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    
    for (int e : v1) { // range-based for loop (python)
        cout << e + 1 << ' ';
        e++;
    }
    
    cout << endl;
    
    for (int &e : v1) { // 원본 값 변경됨 (참조자)
        cout << e++ << ' ';
        cout << e << ' ';
    }

    return 0;
}

/*
    for문이나 range-based (모든 원소)로 vector를 순회할 수 있음
    vector의 size 메소드는 unsigned로 반환되기 때문에 size 메소드 사용하여 순회할 시 조심할 것
*/
