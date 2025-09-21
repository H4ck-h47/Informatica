#include <iostream>

using namespace std;

int main() {

  /*
   Scrivere un programma che dato un numero maggiore di 10 visualizzi se è
   multiplo solo di 2 oppure se è multiplo solo di 3 oppure se è multiplo di
   entrambi o né di 2 né di 3, se il numero non è valido (non maggiore di 10)
   visualizzi un messaggio di errore.
  */

  int n;

  do {
    cout << "Inserisci un numero maggiore di 10:";
    cin >> n;
    if (n <= 10)
      cout << "Il numero inserito non e' maggiore di 10!\n";
  } while (n <= 10);

  if (n % 3 == 0 && n % 2 == 0) {
    cout << "Il numero inserito e' multiplo di 2 e 3." << endl;
  } else if (n % 3 == 0) {
    cout << "Il numero inserito e' multiplo di 3." << endl;
  } else if (n % 2 == 0) {
    cout << "Il numero inserito e' multiplo di 2." << endl;
  } else {
    cout << "Il numero inserito non e' multiplo di 2 o 3." << endl;
  }

  return 0;
}
