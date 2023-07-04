#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <string>
//Guilherme pinheiro Turma if23
//Questão 2. Faça um programa que leia uma string e imprima as quatro primeiras letras dela.
using namespace std;
int main() {
  string x;
  int i;
  getline(cin,x);
  for(char i =0;i<4;i++)//espaco tambem é caracter
    cout << x[i]; return 0;
}
  

   

