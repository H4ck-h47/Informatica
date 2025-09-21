#include <iostream>

using namespace std;

int main() {

  char input;

  cout << "a. Per immettere dati \nb. Per determinare il maggiore" << endl
       << "c. Per determinare il minore \nd. Per ordinare \ne. Per "
          "visualizzare\n";

  cout << "Scelta:";
  cin >> input;

  switch (input) {
  case 'a':
    cout << "Esecuzione opzione a...";
    break;
  case 'b':
    cout << "Esecuzione opzione b...";
    break;
  case 'c':
    cout << "Esecuzione opzione c...";
    break;
  case 'd':
    cout << "Esecuzione opzione d...";
    break;
  case 'e':
    cout << "Esecuzione opzione e...";
    break;
  default:
    cout << "Opzione insistete!";
  }

  return 0;
}
