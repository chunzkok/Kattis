#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    const string excuse = "I must watch Star Wars with my daughter";
    const string key1 = "pink";
    const string key2 = "rose";

    int N;
    cin >> N;
    string color;
    int count = 0;
    for (int i = 0; i < N; i++) {
        cin >> color;
        transform(color.begin(), color.end(), color.begin(), ::tolower);
        if (color.find(key1) != string::npos || color.find(key2) != string::npos) count++;
    }
    if (count > 0) cout << count;
    else cout << excuse;
    return 0;
}
