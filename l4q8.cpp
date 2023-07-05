#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
  // 8. Construa um programa que leia duas strings do teclado. Imprima uma
  // mensagem informando se a segunda string lida está contida dentro da
  // primeira. (estude a função strstr() que realiza esta tarefa) Guilherme
  // Pinheiro IF23
  char x[100], y[100];
  cout << "digite a primeira string: ";
  cin.get(x, 100);
  setbuf(stdin, NULL);
  cout << "digite a segunda string";
  cin.get(y, 100);
  cout << endl;
  if (strstr(x, y) != NULL) {
    cout << "esta contido";
  } else
    cout << "nao esta";
  return 0;
}