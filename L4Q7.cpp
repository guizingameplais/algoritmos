#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
  //7. Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é umpalíndromo ou não. Exemplos de palíndromos: ovo, arara, rever, asa, osso etc
  //Guilherme Pinheiro IF23
  string x, invertida="";
    getline(cin,x);
    for(int i=0; i<x.length(); i++)
        invertida= x[i] + invertida;
    cout << invertida << endl;
  if(x==invertida)
    cout << "é um palindromo";
  else cout << "Não é um palindromo";
    return 0;
}
