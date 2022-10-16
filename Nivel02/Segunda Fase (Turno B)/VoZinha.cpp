#include <bits/stdc++.h> // Biblioteca com a maioria dos métodos necessários
using namespace std;
#define int long long int

int32_t main(){
    int N, M, K;
    cin >> N >> M >> K;
    string blur; // String com os caracteres borrados
    cin >> blur;
    vector<string> palavras(M); // Vetor com todas as palavras que completarão os borrôes
    string str;

    for(int i{0}; i < M; ++i){
        cin >> str;
        sort(str.begin(), str.end()); // Ordenando a palavra
        for(int j = 0; j < str.size(); ++j){ // Retirando caracteres repetidos
            if(str[j] == str[j + 1]){
                str.erase (str.begin()+j);
                --j;
            }
        }
        palavras[i] = str;
    }

    int P;
    cin >> P;

    vector<int> idx_finder(M); // Vetor que indica qual índice do caracter de determinada palavra deve ser usado para completar o borrão
    vector<int> results; // Armazena os resultados
    int q = 1;
    int dividendo = P - 1;
    int resto;

    // Método para obter o número "P - 1" em base "K"
    if(K != 1){ // Caso "K = 1", não é necessário passar pelo método
        while(q != 0){
            q = dividendo / K;
            resto = dividendo % K;
            results.push_back(resto);
            dividendo = q;
        }

        int size = results.size();
        for(int i{0}; i < size; ++i){
            idx_finder[M - i - 1] = results[i];
        }
    } // 11

    int current = 0;
    for(int i{0}; i < N; ++i){ // 
        if(blur[i] != '#'){
            cout << blur[i];
        }
        else{
            // O borrão será substituído pelo n-ésimo caracter da palavra "i", sendo "n" o i-ésimo dígito correspondente do número "P - 1" em base "K"
            cout << palavras[current][idx_finder[current]];
            ++current;
        }
    }
    cout << endl;
    

    return 0;
}
