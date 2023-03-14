#include <iostream>

using namespace std;

int count_sum(int n) {
    int res = 0;
    while (n > 0) {
        res += n%10;
        n /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    while (true) {
        cin >> N;
        if (N == 0) break;
        int m = 11, N_sum = count_sum(N);
        while (count_sum(N*m) != N_sum) m++; 
        cout << m << '\n';
    }
    return 0;
}
