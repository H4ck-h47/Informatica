#include <iostream>

using namespace std;

int main() {
  /*
      Scrivere un programma che risolva l'equazione di primo grado ax = b,
     visualizzando a seconda dei casi la soluzione, la scritta equazione
     indeterminata oppure equazione impossibile. I coefficienti reali a e b
     devono essere richiesti in input all'utente.
  */
  float a, b, x;

  cout << "Inserisci il coeficente a:";
  cin >> a;
  cout << "Inserisci il coeficente b: ";
  cin >> b;

  if (a != 0) {
    x = b / a;
    cout << "L'equazione ha una soluzione: x = " << x;
  } else { // a = 0
    if (b != 0) {
      cout << "L'equazione e' impossibile.";
    } else { // a=0 e b=0
      cout << "L'equazione e' indeterminata.";
    }
  }
  return 0;
}
