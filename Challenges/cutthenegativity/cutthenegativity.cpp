#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num_flights = 0;
    string res = "";
    int cost;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost;
            if (cost > -1) {
                num_flights++;
                res += to_string(i+1) + ' ' + to_string(j+1) + ' ' + to_string(cost) + '\n';
            }
        }
    }
    cout << num_flights << endl;
    cout << res;
    return 0;
}
