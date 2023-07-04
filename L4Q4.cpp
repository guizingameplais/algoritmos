#include <iostream>
#include <cstring>
#include <string>

using namespace std;
//Questão 4. Faça um programa que leia uma string e a imprima de trás para a frente
//Guilherme pinheiro IF23
int main() {
     string x, invertida="";
    getline(cin,x);
    for(int i=0; i<x.length(); i++)
        invertida= x[i] + invertida;
    cout << invertida << endl;
    return 0;
}
  
  
  
  


