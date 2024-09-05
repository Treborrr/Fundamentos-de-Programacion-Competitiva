#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a = 0, b = 1;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            cout << a;
        } else if (i == 1) {
            cout << " " << b;
        } else {
            int c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }
    cout << endl;
    return 0;
}
