#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int setnum = 1;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << "SET " << setnum++ << '\n';

        string ls[n];
        string s;
        getline(cin, s);
        for (int i = 0; i < n; i++) {
            getline(cin, s);
            if (i&1) ls[n-(i+1)/2] = s;
            else ls[i/2] = s;
        }
        for (int i = 0; i < n; i++) {
            cout << ls[i] << '\n';
        }
    }
    return 0;
}
