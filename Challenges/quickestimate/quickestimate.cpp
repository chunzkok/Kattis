#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    string s;
    for (int n = 0; n < N; n++) {
        cin >> s;
        cout << s.length() << '\n';
    }
    return 0;
}
