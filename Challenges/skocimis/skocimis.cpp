#include <iostream>

using namespace std;

int main() {
    int A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;
    cout << max(B-A, C-B)-1;
    return 0;
}
