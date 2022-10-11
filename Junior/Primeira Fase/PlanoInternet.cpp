#include<bits/stdc++.h> 

int main() {
    //x = quantidade de mb do plano, n = número de meses que o usuário usou;
    int x, n; 
    // cont = a quantidade de mb do próximo mês; 
    int cont; 
    // des = quantidade de mb que foi utilizada no mês, ou seja, valor a ser descontado;
    int des;

    //recebendo as entradas;
    std::cin>> x >> n;

    // a quabtidade de mb do próximo mês começa com a quota original do plano;
    cont = x;

    for(int i{0}; i < n; ++i){
        //recebe o valor que o usuário utilizou de mb naquele mês 
        std::cin>> des;

        //a fim de renovar o plano é adicionado o valor da quota fixa do plano e descontado o que o usuário utilizou;
        cont = cont + x - des;
    }

    // imprime o valor dispoonível para uso no próximo mês
    std::cout<< cont; 
}
