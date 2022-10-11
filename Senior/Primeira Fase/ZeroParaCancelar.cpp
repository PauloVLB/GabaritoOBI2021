#include <bits/stdc++.h> // Biblioteca com a maioria dos métodos necessários

#define _ ios_base::sync_with_stdio(0); cin.tie(); // Aceleração para entrada/saída de dados

using namespace std;

int main() {_ 
    int n; cin >> n;

    int ans = 0;  // Resposta
    stack<int> s; // Pilha para controle da sequência de números

    for(int i = 0; i < n; i++) {
        int xi; cin >> xi;
        if(!s.empty()) {  // Se a fila não está vazia
            if(xi == 0) { // E o número atual é 0
                s.pop();  // Cancele o número anterior
            } else {
                s.push(xi); // Caso contrário, empilhe o número atual
            }
        } else {
            s.push(xi); // Se a fila está vazia, empilhe o número atual
        }
    }

    while(!s.empty()) {
        ans += s.top(); s.pop(); // Soma todos os números que restaram na pilha
    }

    cout << ans << endl;
}