#include <iostream>

using namespace std;

int main() {
  int num1 = 0, num2 = 0, num3 = 0, temp = 0;
  /*
      In una gara podistica di soli tre partecipanti bisogna stabilire l'ordine
     di arrivo. Scrivere un programma che riceva in input tre numeri interi
     (corrispondenti alla durata in minuti della prestazione di ciascun
     concorrente) e visualizzare qual è stato il tempo minore (concorrente
     vincitore) e qual e' stato il tempo maggiore (concorrente arrivato ultimo).
      Inoltre visualizzare se il concorrente arrivato secondo (tempo intermedio)
     è arrivato più vicino al primo o all'ultimo.
  */
  do {
    cout << "inserisci il primo numero: ";
    cin >> num1;
  } while (num1 < 0);
  do {
    cout << "inserisci il secondo numero: ";
    cin >> num2;
  } while (num2 < 0);
  do {
    cout << "inserisci il terzo numero: ";
    cin >> num3;
  } while (num3 < 0);

  if (num1 > num2) {
    temp = num2;
    num2 = num1;
    num1 = temp;
  }
  if (num2 > num3) {
    temp = num3;
    num3 = num2;
    num2 = temp;
  }
  if (num3 < num1) {
    temp = num1;
    num1 = num3;
    num3 = temp;
  }
  if (num1 > num2) {
    temp = num2;
    num2 = num1;
    num1 = temp;
  }
  if (num2 > num3) {
    temp = num3;
    num3 = num2;
    num2 = temp;
  }

  if (num2 - num1 < num3 - num2)
    cout << "Il tempo intermedio e' arrivato piu vicino al primo" << endl;
  else
    cout << "Il tempo intermedio e' arrivato piu vicino all'ulimo" << endl;

  cout << "il minor tempo e': " << num1 << "; il secondo e': " << num2
       << "; il terzo e': " << num3 << ";";

  return 0;
}
