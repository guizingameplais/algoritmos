#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
  //11. Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja. Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total, calcule o valor a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o valor a ser pago à vista.
  //Guilherme Pinheiro IF23 
  string nome_merc;
  float preco, desconto,vista;
  cout<<"Qual o nome?:";
  getline(cin,nome_merc);
  setbuf(stdin,NULL);
  cout<<"Qual o preço?:";
  cin>>preco;
  desconto=preco/10;
  vista=preco-desconto;
  cout<<"nome da mercadoria:"<<nome_merc<< endl;
  cout<<"valor total:"<<preco<< endl;;
  cout<<"desconto:"<<desconto<<endl;
  cout<<"a vista:"<<vista<<endl;
  return 0;
  
}