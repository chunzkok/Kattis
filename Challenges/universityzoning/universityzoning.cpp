#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

class Coord {
    public:
        int x, y;
        Coord(int px, int py) {x=px; y=py;}

        const int steps(Coord const &a) const {
            return abs(a.x-x) + abs(a.y-y);
        }
};

class CoordComp {
    public:
        bool operator() (Coord a, Coord b) {
            if (a.y != b.y) return a.y > b.y;
            else return a.x > b.x;
        }
};

class Student {
    public:
        int id;
        Coord pos;
        Student(int pid, int x, int y) : pos(0,0) {id=pid; pos=Coord(x,y);}
};

class StudentComp {
    public:
        bool operator() (Student a, Student b) {
            return a.id > b.id;
        }
};

class Faculty {
    public:
        priority_queue<Coord, vector<Coord>, CoordComp> spaces;
        priority_queue<Student, vector<Student>, StudentComp> students;
        priority_queue<int, vector<int>, greater<int> > dist;
};


int main() {
    int R,C,F,S,G;
    cin >> R;
    cin >> C;
    cin >> F;
    cin >> S;
    cin >> G;
    vector<Faculty> facs;
    int K;
    int x,y;
    for (int f = 0; f < F; f++) {
        facs.push_back(Faculty());
        cin >> K;
        for (int k = 0; k < K; k++) {
            cin >> y;
            cin >> x;
            facs[f].spaces.push(Coord(x,y));
        }
    }

    int D,facnum;
    for (int s = 0; s < S; s++) {
        cin >> y;
        cin >> x;
        cin >> D;
        cin >> facnum;
        facs[facnum-1].students.push(Student(D,x,y));
    }

    int T, numCorrect, count=0;
    for (int f = 0; f < F; f++) {
        while (!facs[f].students.empty()) {
            facs[f].dist.push(facs[f].spaces.top().steps(facs[f].students.top().pos));
            facs[f].spaces.pop();
            facs[f].students.pop();
        }
        numCorrect = 0;
        cin >> T;
        while (numCorrect++ < T) {
            count += facs[f].dist.top();
            facs[f].dist.pop();
        }
    }

    cout << count;



    
    return 0;
}
