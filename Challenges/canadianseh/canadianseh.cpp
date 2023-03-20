#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    if (s.substr(s.size()-3, s.size()) == "eh?") {
        cout << "Canadian!";
    } else {
        cout << "Imposter!";
    }
    return 0;
}
