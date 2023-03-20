#include <iostream>

using namespace std;

int main() {
    int N,P,X,Y;
    cin >> N;
    cin >> P;
    cin >> X;
    cin >> Y;
    int meowth = N == 2 ? P : (P+1)/(N-1);
    cout << P*X+meowth*Y;
    return 0;
}
