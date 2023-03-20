#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int N, E, K, v;
    cin >> N;
    cin >> E;

    vector<unordered_set<int> > villagers(N, unordered_set<int>()) ;
    unordered_set<int> currVill;
    int last_song = 0;

    for (int e = 0; e < E; e++) {
        cin >> K;
        currVill.clear();
        for (int k = 0; k < K; k++) {
            cin >> v;
            currVill.insert(v-1);
        }
        if (currVill.find(0) != currVill.end()) {
            last_song++;
        }
        for (int vill : currVill) {
            if (currVill.find(0) != currVill.end()) {
                villagers[vill].insert(last_song);
            } else {
                for (int vill2 : currVill) {
                    if (vill == vill2) continue;
                    for (int song : villagers[vill]) {
                        villagers[vill2].insert(song);
                    }
                }
            }
        }
    }

    int s;
    for (int n = 0; n < N; n++) {
        for (s = 1; s <= last_song; s++) {
            if (villagers[n].find(s) == villagers[n].end()) {
                break;
            }
        }
        if (s == last_song+1) cout << n+1 << '\n';
    }
    return 0;
}
