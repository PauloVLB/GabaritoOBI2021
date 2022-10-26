#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<pair<int,int>> naopode; //vetor em que guardaremos os pares de ingredientes que não podem juntos
  int n,m,x,y;
  cin >> n >> m;
  //adicionamos os pares aqui
  for(int i = 0; i < m; i++){
    cin >> x >> y;
    naopode.push_back({x,y});
  }
  //quantidade de sanduiches que não pode acontecer
  int count = 0;
  //esse laço irá rodar de forma que i, em binário, representará todas os sanduiches diferentes.
  //ex, quando i = 3, quer dizer que i = 110, ou seja estamos no sanduiche que usa o segundo e terceiro ingrediente
  for(int i = 0; i < 1 << n; i++){
    //para cada sanduiche representado por i, 
    //iremos procurar nesse laço se i tem alguma combinação de ingrediente proibida
    for(int j = 0; j < m; j++){
      //essas condições serão satisfeitas se i tiver os bits que representam os ingredientes em questãao
      if((i & 1 << naopode[j].first-1) && (i & 1 << naopode[j].second-1))
      {
        count++;
        break;
      }
    }
  }
  //todas as possiblidades podem ser obtidas por 2^n - 1
  //(que são as possibilidades de cada ingrediente estar ou não no sanduiche menos a possibilidade de não tem nenhum) 
  int out = (1 << n) - 1;
  cout << out - count << endl;
  return 0;
}