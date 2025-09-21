#include <iostream>

using namespace std;

int main() {
  /*
    Scrivere un programma che riceva in input numeri compresi compresi fra 10 e
    100 (validandoli) e visualizzi il numero minore, quello maggiore.
  */

  // PS: Visto che la consegna non specificava quanti numeri il programma doveva
  //     prendere in input ho deciso di farlo girare all'infinito.
  //     im proud of this one so dont copy it ;)

  int n, maggiore = 0, minore = 0;

  for (int i = 0; i == i; i++) {

    do {
      cout << "Inserisci un numero compreso tra 10 e 100: ";
      cin >> n;
      if (n < 10 || n > 100)
        cout << "Il numero inserito non e' compreso tra 10 e 100\n";
    } while (n < 10 || n > 100);

    if (i != 0) {
      if (maggiore < n)
        maggiore = n;
      if (minore > n)
        minore = n;
      if (minore == maggiore)
        cout << "Il numero inserito e uguale al precedente!\n";
      else
        cout << "Il numero minore e' " << minore << " e il numero maggiore e' "
             << maggiore << endl;
    } else {
      maggiore = n;
      minore = n;
    }
  }

  return 0;
}
