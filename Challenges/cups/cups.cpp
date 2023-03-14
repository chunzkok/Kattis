#include <utility>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

pair<int, string> extract(string s) {
    bool firstPosNum = true;;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (firstPosNum) {
                return make_pair(stoi(s.substr(0, i))/2, s.substr(i+1, s.length()));
            } else {
                return make_pair(stoi(s.substr(i+1, s.length())), s.substr(0, i));
            }
        }
        if (firstPosNum && !isdigit(s[i])) firstPosNum = false;
    }
    return make_pair(-1, "invalid");
}

class Compare {
    public:
        bool operator() (pair<int, string> a, pair<int,string> b){
            return a.first > b.first;
        }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    string s;
    getline(cin, s);
    priority_queue<pair<int, string>, vector< pair<int, string> >, Compare> pq;
    pair<int, string> temp;
    for (int i = 0; i < N; i++) {
        getline(cin, s);
        temp = extract(s);
        pq.push(temp);
    }
    for (int i = 0; i < N; i++) {
        cout << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
