#include <bits/stdc++.h>
using namespace std;
using std::string;
/*Função que avalia se o elemento se encaixa em letras pre-estabelecidas pelo pangrama:
- Elemento: Uma palavra (char) de uma string que seria uma frase.

- Pontuação: Variavel que fica no código main que arrmazena o número de elementos que a frase possui que estão nas letras pre-estabelecidas.

- contador[]: Variavel auxiliar que indica se uma letra já foi checada ou não.

- pangrama: Array que armazena as palavras pre-estabelecidas do pangrama.
*/
void pontuacao(char elemento, int &pontuacao, int contador[], char* pangrama);

int main(){

    string frase;
    char pangrama[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};
    int contador[23]={0};
    int pontos=0;

    // Input da frase
    getline(cin,frase);

    /* Laço de repetição que passa por cada letra da 'frase'.*/
    for (int i = 0; i < frase.length(); i++)
    {
        pontuacao(frase[i], pontos, contador, pangrama);
    }
    if (pontos == 23){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }
    
    return 0;
}
void pontuacao(char elemento, int &pontuacao, int contador[], char* pangrama){
    // Laço que passa por cada elemento do pangrama.
    for (int i = 0; i < 23; i++)
    {
        // conficional que checa se o elemento já foi checado
        if(contador[i] == 1 && contador[i] == elemento)
        {
            break;
        }
        else if (contador[i] != 1)
        {
            if(contador[i]==0)
            {
                // Condicional que checa se o elemento da string é igual ao elemento do pangrama que está no laço de repetição.
                if (elemento == pangrama[i])
                {
                    contador[i] = 1;
                    pontuacao++;
                    break;
                }
            }
        }
        
    }
    
}