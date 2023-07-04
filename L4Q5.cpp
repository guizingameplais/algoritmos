#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//Questão 5. Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada namesma variável. Em seguida, imprima a string invertida.
//Guilherme Pinheiro IF23 
int main() {
  string x, invertida="";
  cout<< "escreva a string:";
    getline(cin,x);
    for(int i=0; i<x.length(); i++)
        invertida= x[i] + invertida;
    cout << "string invertida:"<<invertida << endl;
  x=invertida;
  cout << "invertida na memoria é:"<< x;
    return 0;
}