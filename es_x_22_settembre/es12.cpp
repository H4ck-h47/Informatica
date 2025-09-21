#include <iostream>

using namespace std;

int main() {

  int secondi, ore, minuti;

  do {
    cout << "Inserisci le ore:";
    cin >> ore;
    if (ore < 0)
      cout << "L'input non puo' essere negativo!\n";
  } while (ore < 0);

  do {
    cout << "Inserisci i minuti:";
    cin >> minuti;
    if (minuti < 0)
      cout << "L'input non puo' essere negativo!\n";
  } while (minuti < 0);

  do {
    cout << "Inserisci i secondi:";
    cin >> secondi;
    if (secondi < 0)
      cout << "L'input non puo' essere negativo!\n";
  } while (secondi < 0);

  minuti = minuti + ore * 60;
  secondi = secondi + minuti * 60;

  cout << "L'equivalente in secondi del tempo inserito e': " << secondi;

  return 0;
}
