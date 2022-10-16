#include <bits/stdc++.h>>
using namespace std;
vector<int> anagram(26);
vector<int> othersAnagram(26);
int n;
string s;
int main() {
  cin >> n;
  cin >> s;
  bool hasRoot = false;
  string root;
  //se a palavra tem apenas uma letra, não tem como ser ter sido formada por duas outras palavras.
  if (n == 1)
    cout << "*";
  else {
    for (int k = 1; k < n; ++k) {
      //procuramos por tamanhos de anagramas que sejam divisores de n
      if (n % k == 0) {
        root = s.substr(0, k);
        //anagram irá receber quantas letras a, b, c, d.... o nosso candidato a raiz tem
        for (int i = 0; i < k; ++i) {
          anagram[s[i] - 'a']++;
        }
        // j irá auxiliar em pegar os próximos anagramas
        int j = k;
        // checa se root é anagrama da próxima palavra de k letras
        bool flag = true;
        while (j != n) {
          //faz o mesmo que na linha que foi feito com anagram só que com othersAnagram
          for (int i = j; i < j + k; ++i) {
            othersAnagram[s[i] - 'a']++;
          }
          //checa se esses dois são realmente anagramas entre si
          for (int i = 0; i < 26; ++i) {
            //se eles tiverem alguma quantidade de letras diferente, 
            //por exemplo que um tem b e o outro não ou um tem 2 qs e o outro 1, então não são anagramas
            if (a[i] != b[i]) {
              flag = false;
              break;
            }
          }
          //reseta vetor para analisar outros possíveis anagramas
          othersAnagram = vector<int>(26);
          j = j + k;
          if(!flag)break;
        }
        //se flag é true, então nós achamos a raiz
        if (flag)
          hasRoot = true;
        //reseta o vetor pois na próxima vez iremos usar outro possível anagrama.
        anagram = vector<int>(26);
      }
      if (hasRoot)
        break;
    }
    if (hasRoot)
      cout << root;
    else
      cout << "*";
  }
}