#include <iostream>

using namespace std;

int main() {
  /*
    Sapendo che in un parcheggio ogni ora costa 2.50 €, scrivere un programma
    che richieda il numero complessivo delle ore e visualizzi il totale da
    pagare. (Validare il numero delle ore con messaggio d’errore)
  */

  float totale, ore;
  do {
    cout << "Inserire il numero di ore di sosta: ";
    cin >> ore;
    if (ore < 0)
      cout << "Il numero dato in input non e valido!\n";
  } while (ore < 0);

  totale = ore * 2.50;

  cout << "Il totale da pagare e' " << totale << "euro";

  return 0;
}
