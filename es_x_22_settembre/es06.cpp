#include <ctime>
#include <iostream>

using namespace std;

int main() {
  /*
      Scrivere un programma che generi tre numeri casuali compresi fra 1 e 10 e
     li visualizzi in ordine crescente, nel caso di numeri uguali ne visualizzi
     uno solo. (Ricordo che per generare numeri casuali è necessario
     “caricare” la libreria <ctime>, usare la funzione srand per
      l’inizializzazione e la funzione rand per la generazione dei numeri).
  */

  int num1, num2, num3, temp;
  srand(time(NULL));
  num1 = rand() % 11;
  num2 = rand() % 11;
  num3 = rand() % 11;

  if (num1 == num2 == num3)
    cout << num1;
  else {
    if (num1 > num2) {
      temp = num1;
      num1 = num2;
      num2 = temp;
    }
    if (num1 > num3) {
      temp = num1;
      num1 = num3;
      num3 = temp;
    }
    if (num2 > num3) {
      temp = num2;
      num2 = num3;
      num3 = temp;
    }

    cout << num1 << " " << num2 << " " << num3;
  }

  return 0;
}
