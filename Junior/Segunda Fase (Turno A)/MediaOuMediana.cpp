#include <iostream>

using namespace std;

int main (void) {
    int a, b;

    cin >> a >> b;
    if (a > b) swap(a, b); // a variavel "a" passa a ser o menor valor

    // tomando o valor "a" como a mediana e fazendo media = mediana, temos que (a + b + c)/3 = a
    // isolando c, obtemos c = 2*a - b
    cout << 2*a - b << endl;
    return 0;
}
