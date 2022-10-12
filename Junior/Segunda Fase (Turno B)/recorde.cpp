#include <bits/stdc++.h>

using namespace std;

int main() {
    int r, l, m;

    cin >> r >> m >> l;

    if (r < l && r < m) {
        cout << "RM\nRO\n";
    } else {
        if (r < l) {
            cout << "*\nRO\n";
        } else if (r < m) {
            cout << "RM\n*\n";
        } else {
            cout << "*\n*\n";
        }
    }

    return 0;
}