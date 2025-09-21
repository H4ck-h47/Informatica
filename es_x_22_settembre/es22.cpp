#include <iostream>

using namespace std;

int main() {
  int a, b;
  int q, counter = 0;
  cout << "Inserire un numero: ";
  cin >> b;
  do {
    cout << "Inserire un secondo numero(maggiore del primo): ";
    cin >> a;
    if (a <= b)
      cout << "Valore inserito non maggiore di del primo numero!\n";
  } while (a <= b);

  if (a % b != 0)
    cout << "Il numero " << a << " non e' divisibile per " << b;
  else if (b != 1) { // non copiare l'edge case nella quale c'e' 1 come divisore
                     // salta (elif e lultimo else con il cout infinite volte).
    q = a;
    while (q % b == 0) {
      counter++;
      q = q / b;
    };

    cout << "Il numero " << a << " e' divisibile per " << b << " " << counter
         << " volta(/e).";
  } else
    cout << "Il numero " << a << " e' divisibile per " << b
         << " infinite volte.";

  return 0;
}
