#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char, vector<string>> baralho;
    baralho['C'] = {};
    baralho['E'] = {};
    baralho['U'] = {};
    baralho['P'] = {};

    string cartas;

    cin >> cartas;

    // Toda carta tem o formato ddN. Sendo assim, i vira N e dd recebe i - 2 e i -1 em numeroCarta
    for (int i = 2; i <= cartas.length() - 1; i += 3) {
        char naipe = cartas[i];

        string numeroCarta = "";
        numeroCarta += cartas[i - 2];
        numeroCarta += cartas[i - 1];

        // Verifica se tem alguma ocorrência da carta
        if (count(baralho[naipe].begin(), baralho[naipe].end(), numeroCarta)) {
            baralho[naipe] = {"-1"};
        } else {
            // Verifica se tem alguma ocorrência de -1 (carta repetida)
            if (!(count(baralho[naipe].begin(), baralho[naipe].end(), "-1"))) {
                baralho[naipe].push_back(numeroCarta);
            }
        }
    }

    char naipes[] = {'C', 'E', 'U', 'P'};

    for (char naipe : naipes) {
        // Verifica se tem alguma ocorrência de -1 (carta repetida)
        if (baralho[naipe].size() == 1 && baralho[naipe].at(0) == "-1") {
            cout << "erro\n";
        } else {
            // Caso não tenha, imprime o número de cartas restantes
            cout << 13 - baralho[naipe].size() << "\n";
        }
    }

    return 0;
}