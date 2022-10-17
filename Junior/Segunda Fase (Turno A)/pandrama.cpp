#include <bits/stdc++.h>
using namespace std;
using std::string;
// a b c d e f g h i j l m n o p q r s t u v x z
void pontuacao(char elemento, int &pontuacao, int contador[], char* pangrama);
int main(){
    string frase;
    char pangrama[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'z'};
    int contador[23]={0};
    int pontos=0;
    getline(cin,frase);
    for (int i = 0; i < frase.length(); i++)
    {
        
    }
    
    cout << frase.length() << endl;
    return 0;
}
void pontuacao(char elemento, int &pontuacao, int contador[], char* pangrama){
    for (int i = 0; i < 23; i++)
    {
        if(contador[i]==0)
        {
            if (elemento == pangrama[i])
            {
                contador[i] = 1;
                pontuacao++;
                break;
            }
        }
        
    }
    
}