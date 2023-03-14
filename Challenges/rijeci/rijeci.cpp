#include <iostream>

using namespace std;

int main() {
    int K;
    cin >> K;
    int a, b;
    int A=1,B=0;
    for (int i = 0; i < K; i++) {
        a=A;
        b=B;
        A=b;
        B=b+a;
    }
    cout << A << ' ' << B;
    return 0;
}
