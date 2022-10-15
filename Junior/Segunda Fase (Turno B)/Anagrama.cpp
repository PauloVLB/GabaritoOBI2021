#include <bits/stdc++.h>
using namespace std;

int main(){

    string str1, str2;
	int N;
    char c;
	
    cin >> N;
    cin.get(c);
    getline(cin, str1);
    getline(cin, str2);

    vector<int> letras1(30); // Conta a quantidade da ocorrência de cada letra da string 1
    vector<int> letras2(30); // Conta a quantidade da ocorrência de cada letra da string 2


    for(int i{0}; i < str1.size(); ++i){ // Atualiza a quantidade de cada letra
        if(str1[i] != '.' && str1[i] != ' ' && str1[i] != ','){
            ++letras1[str1[i] - 'a'];
        }
    }

    for(int i{0}; i < str2.size(); ++i){ // Atualiza a quantidade de cada letra
        if(str2[i] != '.' && str2[i] != ' ' && str2[i] != ','){
            ++letras2[str2[i] - 'a'];
        }
    }

    // Determina se o tamanho das entradas são iguais
    bool flag = (str1.size() == str2.size()? true : false);

    // Compara se a quantidade de cada letra é igual
    for(int i{0}; i < letras1.size(); ++i){
        if(letras1[i] != letras2[i]){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "S";
    }
    else{
        cout << "N";
    }
    cout << endl;
    return 0;
}