#include <bits/stdc++.h> // Biblioteca com a maioria dos métodos necessários
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(); // Aceleração para entrada/saída de dados

    int n; cin >> n;

    vector<int> TempoTotal(102); // Armazena o tempo total de cada amigo
    vector<int> Amigos(102); // Armazena o último momento em que o amigo enviou uma mensagem
    vector<int> InfoMensagem(102); // Armazena a atual situação da mensagem do amigo (-1 para enviada, 1 para recebida)

    string letra; int NAmigo;
    int tempoAtual = 0; // Quanto tempo se passou até o momento
    int tempoPassou = 1; // Armazena o valor do tempo que passou entre dois eventos consecutivos

    for(int i{0}; i < n; ++i){

        cin >> letra >> NAmigo;


        if(letra == "T"){ // Atualiza o tempo que se passou entre dois eventos consecutivos
            tempoPassou = NAmigo;
        }
        else{

            tempoAtual += tempoPassou; // Atualiza o tempo atual
            tempoPassou = 1;

            if(letra == "R"){
                Amigos[NAmigo] = tempoAtual; // Atualiza a informação de quando a mensagem foi enviada pelo amigo "NAmigo"
                InfoMensagem[NAmigo] = -1; // Indica que o amigo está esperando por uma resposta
            }
            else{
                InfoMensagem[NAmigo] = 1; // Indica que o amigo recebeu a resposta
                TempoTotal[NAmigo] += tempoAtual - Amigos[NAmigo]; // Calcula o tempo que o amigo esperou para receber a resposta
            }

        }

    }

    for(int i{1}; i < 101; ++i){
        if(Amigos[i] != 0){ // Caso o amigo 'i' tenha enviado alguma mensagem em algum momento, deve ser incluído na lista
            cout << i << " ";

            if(InfoMensagem[i] == 1){ // Recebeu respostas para suas mensagens
                cout << TempoTotal[i] << endl;
            }
            else{ // Não recebeu resposta
                cout << -1 << endl;
            }
        }
    }

    return 0;
}