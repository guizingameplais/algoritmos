#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
  //Questão 6. Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com umcaractere (vogal ou consoante) e substitua todas as vogais da palavra por esse caractere. Aofinal, imprima a nova string e o número de vogais que ela possui.
//Guilherme Pinheiro IF23
  string x;
  char c;
  int vogal =0,consoante=0,i=0;
  cout<<"escreva uma frase ou palavra:";
  getline(cin,x);
  cout << "escreva um caracter:";
  cin>> c;
  for(i=0;i<=x.length();i++){
  if(x[i]=='a' || x[i] =='e' || x[i] =='i' || x[i] == 'o'||x[i]=='u'||x[i]=='A' || x[i] =='E' || x[i] =='I' || x[i] == 'O' ||x[i]=='U'){vogal++;
                                          x[i]=c; }
    
      
      
      
  }
  
  cout<< "vogais: "<<vogal<<endl;
  cout<<"trocada: "<<x;
  
}