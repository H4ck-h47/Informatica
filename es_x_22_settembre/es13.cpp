#include <iostream>

using namespace std;

int main() {
  /*
      Scrivere un programma che richieda un tempo in secondi e ne visualizzi
     l'equivalente in ore, minuti e secondi.
  */

  int tempoInSecondi, ore, minuti, secondi;
  cout << "Inserisci il tempo in secondi: ";
  cin >> tempoInSecondi;

  ore = tempoInSecondi / 3600;
  minuti = (tempoInSecondi % 3600) / 60;
  secondi = tempoInSecondi % 60;

  cout << "Equivalente: " << ore << " ore, " << minuti << " minuti, " << secondi
       << " secondi." << endl;
  return 0;
}
