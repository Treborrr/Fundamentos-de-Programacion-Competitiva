#include <iostream>
#include <set>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    set<int> s;

    for (int i = 0; i < Q; i++) {
        int y, x;
        cin >> y >> x;

        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else if (y == 3) {
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
