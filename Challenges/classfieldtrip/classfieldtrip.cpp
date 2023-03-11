#include <iostream>
#include <string>

using namespace std;

int main() {
    // basically merge step of merge sort?
    string a, b;
    cin >> a;
    cin >> b;

    string res = "";
    int ptr_a = 0, ptr_b = 0;
    while (ptr_a < a.length() || ptr_b < b.length()) {
        if (ptr_a == a.length()) {
            res += b[ptr_b++];
        } else if (ptr_b == b.length()) {
            res += a[ptr_a++];
        } else {
            if (a[ptr_a] <= b[ptr_b]) {
                res += a[ptr_a++];
            } 
            if (b[ptr_b] <= a[ptr_a]) {
                res += b[ptr_b++];
            } 
        }
    }
    cout << res;
    return 0;
}
