#include <iostream>
#include <map>

using namespace std;

pair<int, int> helper(map<int, int> &m, int val) {
    if (m.find(val) != m.end()) return make_pair(0, m[val]);
    map<int, int>::iterator p = m.upper_bound(val);
    if (p == m.end()) {
        pair<int, int> p1, p2, p3;
        p1 = helper(m, val-100);
        p2 = helper(m, val-200);
        p3 = helper(m, val-500);
        int mindiff = min(min(p1.first, p2.first), p3.first);
        int res=-1;
        if (p1.first == mindiff) res=(res == -1 ? p1.second : min(res, p1.second));
        if (p2.first == mindiff) res=(res == -1 ? p2.second : min(res, p2.second));
        if (p3.first == mindiff) res=(res == -1 ? p3.second : min(res, p3.second));
        m[val+mindiff] = res+1;
        return make_pair(mindiff, res+1);
    } else {
        return make_pair((p->first)-val, p->second);
    }
}

int main() {
    int K;
    cin >> K;
    map<int, int> m;
    m[0] = 0;
    m[100] = m[200] = m[500] = 1;
    cout << helper(m, K).second;
    return 0;
}
