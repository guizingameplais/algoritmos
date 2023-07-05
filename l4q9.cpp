#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//9. Construa um programa que leia duas strings do teclado. Imprima uma mensagem informando 
//Guilherme Pinheiro IF23 
quantas vezes a segunda string lida está contida dentro da primeira.
int main() {
  char s1[1000];
  char s2[1000];
  cout<<"digite a primeira string:";
  cin.get(s1,1000);
  cout <<"digite a segunda string:";
  cin.get(s2,1000);
  char *p;// ponteiro que vai armazenar endereço
  p=strstr(s1,s2);//retorna o endereço
  int soma=0;
  if(p!=NULL){
    soma +=1;
}
  else cout<< "nao esta presente";
  p=strstr(p+strlen(s2)+1,s2);
 while(p!=NULL){
   soma+=1;
   p=strstr(p+strlen(s2)+1,s2);
 }
  cout << "soma:" << soma;
return 0;
  }
