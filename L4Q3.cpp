#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;
//Questão 3. Sem usar a função strlen(), faça um programa que leia e imprima quantos caracteres ela possui
//Guilherme Pinheiro Turma:IF23 

int main() {
  char x[50];
  int i=0;
  cout << "digite sua string:";
  cin.get(x,50);
  while(x[i] != '\0'){
    i++;
  }
cout << "tamanho da string:" << i << endl;}