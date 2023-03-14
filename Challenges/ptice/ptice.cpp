#include <iostream>
#define A 3
#define B 4
#define G 6

using namespace std;

const char ADRIAN[A] = {'A','B','C'};
const char BRUNO[B] = {'B','A','B','C'};
const char GORAN[G] = {'C','C','A','A','B','B'};

int main() {
    int N;
    string ans;
    cin >> N;
    cin >> ans;
    int a=0,b=0,g=0;
    int pa=0,pb=0,pg=0;
    char c;
    for (int i = 0; i < N; i++) {
        c = ans[i];
        if (c == ADRIAN[pa]) a++;
        if (c == BRUNO[pb]) b++;
        if (c == GORAN[pg]) g++;
        pa++;
        pb++;
        pg++;
        if (pa >= A) pa=0;
        if (pb >= B) pb=0;
        if (pg >= G) pg=0;
    }
    cout << max(max(a,b),g) << '\n';
    if (a >= b && a >= g) cout << "Adrian" << '\n';
    if (b >= a && b >= g) cout << "Bruno" << '\n';
    if (g >= a && g >= b) cout << "Goran" << '\n';
    return 0;
}
