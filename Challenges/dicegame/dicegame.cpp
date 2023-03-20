#include <iostream>

using namespace std;

int main() {
    int g11,g12,g21,g22,e11,e12,e21,e22;
    cin >> g11;
    cin >> g12;
    cin >> g21;
    cin >> g22;
    cin >> e11;
    cin >> e12;
    cin >> e21;
    cin >> e22;

    if (g11+g12+g21+g22 > e11+e12+e21+e22) cout << "Gunnar";
    else if (g11+g12+g21+g22 < e11+e12+e21+e22) cout << "Emma";
    else cout << "Tie";

    return 0;
}
