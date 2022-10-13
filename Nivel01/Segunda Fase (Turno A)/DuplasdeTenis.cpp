#include<bits/stdc++.h>

int main(){

  //as quatro entradas, recebidas em ordem crescente, sendo elas o nível de cada jogador
  int A, B, C, D;

  std::cin>>A>>B>>C>>D;
    
    //variáveis responsáveis por receber os níveis das suplas
  int nivelA = 0;
  int nivelB = 0;


   

    //a dupla composta pelo jogador de menor e maior nível
  nivelA = A + D;

   //a dupla composta pelos outros jogadores restantes
  nivelB = B + C;

  //imprime o módulo da diferença de níveis das duplas
  std::cout<<std::abs(nivelA - nivelB); 

   

  

  return 0;
}
