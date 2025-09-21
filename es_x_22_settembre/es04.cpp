#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Inserisci un numero";

  cin >> n;

  if (n > 0)
    cout << "Il numero e’ maggiore di 0";
  else if (n < 0)
    cout << "il numero inserito e’ negativo";
  else
    cout << "il numero inserito e’ 0";

  return 0;
}
