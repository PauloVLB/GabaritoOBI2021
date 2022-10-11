#include <iostream>

using namespace std;

int main (void) {
    int cont(0); // contador para saber a quantidade de vit�rias
    char result; // resultado da partida

    // la�o para realizar a leitura dos 6 resultados do jogador
    for (int i = 0; i < 6; i++) {
        // leitura dos resultados
        cin >> result;
        // se o resultado da partida for vit�ria, acrescenta 1 ao contador
        if (result == 'V') cont ++;
    }

    // se o jogador tiver 5 ou 6 vit�rias (valor armazenado no cont), o valor impresso ser� 1
    if (cont >= 5) cout << "1" << endl;
    // se n�o, se o jogador tiver 3 ou 4 vit�rias (valor armazenado no cont), o valor impresso ser� 2
    else if (cont >= 3)  cout << "2" << endl;
    // se n�o, se o jogador tiver 1 ou 2 vit�rias (valor armazenado no cont), o valor impresso ser� 3
    else if (cont >= 1) cout << "3" << endl;
    // se n�o entrar em nenhum caso anterior, � porque o jogador n�o teve vit�rias e o valor impresso ser� -1
    else cout << "-1" << endl;

    return 0;
}
