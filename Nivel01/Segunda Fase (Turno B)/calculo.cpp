#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, a, b, r = 0;

    cin >> s >> a >> b;

    if (a < b) {
        for (int i = a; i <= b; i++) {
            string num = to_string(i);

            int soma = 0;

            for (char j : num) {
                int c = (int)j;

                soma += c - 48;
            }

            if (soma == s) {
                r++;
            }
        }
    }
    else {
        for (int i = b; i >= a; i--) {
            string num = to_string(i);

            int soma = 0;

            for (char j : num) {
                int c = (int)j;

                soma += c - 48;
            }

            if (soma == s) {
                r++;
            }
        }
    }

    cout << r << "\n";

    return 0;
}
