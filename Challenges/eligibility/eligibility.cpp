#include <iostream>
#include <string>

using namespace std;

string describeEligibility(string sDate, string bDate, int courses) {
    if (stoi(sDate.substr(0, 4)) >= 2010) return "eligible";
    else if (stoi(bDate.substr(0,4)) >= 1991) return "eligible";
    else if (courses > 40) return "ineligible";
    else return "coach petitions";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    string name, sDate, bDate;
    int courses;
    for (int t = 0; t < T; t++) {
        cin >> name;
        cin >> sDate;
        cin >> bDate;
        cin >> courses;
        cout << name << ' ' << describeEligibility(sDate, bDate, courses) << '\n';
    }
    return 0;
}
