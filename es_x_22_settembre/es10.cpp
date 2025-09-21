#include <iostream>

using namespace std;

int main() {
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
