#include <iostream>
#include <unordered_map>
#include <functional>

using namespace std;

struct Pos {
    int x, y, z, steps;
    Pos(int px, int py, int pz, int psteps) {x=px; y=py; z=pz; steps=psteps; }

    bool operator==(const Pos& c1) const { return (this->x==c1.x) && (this->y==c1.y) && (this->z==c1.z) && (this->steps==c1.steps); }

    struct HashFunction {
        size_t operator()(const Pos& c1) const {
            return hash<string>()(to_string(c1.x) + to_string(c1.y) + to_string(c1.z) + to_string(c1.steps));
        }
    };
};

unordered_map<Pos, int, Pos::HashFunction> m;

int num_walks(int x, int y, int z, int n) {
    if (m.find(Pos(x,y,z,n)) == m.end()) {
        if (n == 0) m[Pos(x,y,z,n)] = 0;
        else {
            m[Pos(x,y,z,n)] = num_walks(x,y+1,z-1,n-1)
                + num_walks(x,y-1,z+1,n-1)
                + num_walks(x-1,y,z+1,n-1)
                + num_walks(x+1,y,z-1,n-1)
                + num_walks(x-1,y+1,z,n-1)
                + num_walks(x+1,y-1,z,n-1);
        }
    }
    return m[Pos(x,y,z,n)];
}

int main() {
    m[Pos(0,0,0,0)] = 1;
    int TC, n;
    cin >> TC;
    for (int i = 0; i < TC; i++) {
        cin >> n;
        cout << num_walks(0,0,0,n) << '\n';
    }
    
    return 0;
}
