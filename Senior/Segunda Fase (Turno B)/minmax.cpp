#include <bits/stdc++.h>
using namespace std;
//serve para descer o número (ex de "1000" para "0999")
void desce(string& s, int idx){
  if(s[idx] == '0' && idx != 0){
    s[idx] = '9';
  }else{
    if(idx != 0 || s[idx] != '0') s[idx]--;
  }
  if(idx > 0 && s[idx] == '9')desce(s,idx-1);
}
//sobe o número (ex de "999" para "1000")
void sobe(string& s, int idx, int& sz){
  if(s[idx] == '9'){
    s[idx] = '0';
    if(idx == 0){
      string aux = "1";
      s = aux.append(s);
      sz++;
    }
  }else{
    s[idx]++;
  }
  if(idx > 0 && s[idx] == '0')sobe(s,idx-1, sz);
}
void subtrai(int x, string& s, int sz){
  //esse mínimo é calculado pois não queremos mudar uma diferença maior do que 9, já que isso alteraria vários dígitos
  x = min(x,9); 
  if(x <= s[sz-1]-48){
    //se a diferença for pequena o suficiente, só precisamos alterar o último dígito
    s[sz-1] -= x;
  }else{
    //caso precisemos mudar os outros dígitos
    s[sz-1] = '0';
    desce(s, sz-1);
  }
}
void soma(int x, string& s, int& sz){
  //mínimo pelo mesmo motivo que subtrai
  x = min(x,9);
  if(x < 10 - (s[sz-1]-48)){
    //se a diferença for pequena o suficiente, só precisamos alterar o último dígito
    s[sz-1] += x;
  }else{
    //caso precisemos mudar os outros dígitos
    s[sz-1] = '9';
    sobe(s, sz-1, sz);
  }
}
int main() {
  int x; cin >> x;
  string mini; cin >> mini;
  string max; cin >> max;
  int szmin = mini.size();
  //fout é o total dos dígitos de mini
  int fout = 0;
  while(fout != x){
    //resetamos o valor para calcular o total do nada quantas vezes necessárias
    fout = 0;
    //calculamos o total
    for(int i = 0; i < szmin; i++){
      fout += (mini[i]-48);
    }
    //vemos a diferença e alteramos (ou não, se diff for 0) mini para checar de novo
    int diff = abs(x - fout);
    soma(diff, mini, szmin);
  }
  //fout é o total dos dígitos de max
  int sout = 0;
  int szmax = max.size();
  while(sout != x){
    //resetamos o valor para calcular o total do nada quantas vezes necessárias
    sout = 0;
    //calculamos o total
    for(int i = 0; i < szmax; i++){
      sout += (max[i]-48);
    }
    int diff = abs(y - sout);
    subtrai(diff, max, szmax);
  }
  // as próximas seis linhas são para apagar possíveis zeros a esquerdas que ficaram na strng max
  int i= 0;
  char c = max[i];
  while(c == '0'){    
    i++;
    c = max[i];
  }
  string newmax = max.substr(i, szmax-i);
  cout << mini << endl;
  cout << newmax << endl;
  return 0;
}