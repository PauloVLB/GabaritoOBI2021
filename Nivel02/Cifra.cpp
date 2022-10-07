#include <bits/stdc++.h> // Biblioteca com a maioria dos métodos necessários

#define _ ios_base::sync_with_stdio(0); cin.tie(); // Aceleração para entrada/saída de dados

using namespace std;

int main() {_ 
    map<char, string> m;
    m['a'] = "a"; //
    m['b'] = "bac";
    m['c'] = "cad";
    m['d'] = "def";
    m['e'] = "e"; //
    m['f'] = "feg";
    m['g'] = "geh";
    m['h'] = "hij";
    m['i'] = "i"; //
    m['j'] = "jik";
    m['k'] = "kil";
    m['l'] = "lim";
    m['m'] = "mon";
    m['n'] = "nop";
    m['o'] = "o"; //
    m['p'] = "poq";
    m['q'] = "qor";
    m['r'] = "ros";
    m['s'] = "sut";
    m['t'] = "tuv";
    m['u'] = "u"; //
    m['v'] = "vux";
    m['x'] = "xuz";
    m['z'] = "zuz";  // Mapa criado usando as regras de encriptação descritas na questão

    string s; cin >> s;

    for(char c : s) {
        cout << m[c]; // Mostra para qual valor a letra foi mapeada
    }
    cout << endl;
}