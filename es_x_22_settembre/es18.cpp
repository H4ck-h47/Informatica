#include <iostream>

using namespace std;

int main() {
  /*
  Nell’ambito di un data disciplina, uno studente effettua tre verifiche e
  ottiene, per ciascuna di esse, uno voto espresso con un numero intero. Alla
  fine dell’anno, l’insegnante determina la media aritmetica dei tre voti (la
  media è in generale un numero reale) e formula un giudizio sulla base delle
  seguenti regole: M < 4.5 Gravemente insufficiente; 4.5 ≤ M < 6.0
  Insufficiente; 6.0 < M ≤ 7.5 Sufficiente; M > 7.5 Buono; Scrivere un programma
  che richieda l’inserimento da tastiera dei tre voti e, dopo avernene
  determinato la media, mostri il giudizio corrispondente.
  */
  float voto1, voto2, voto3, media;
  do {
    cout << "Inserisci il primo voto: ";
    cin >> voto1;
  } while (voto1 < 0);
  do {
    cout << "Inserisci il primo voto: ";
    cin >> voto2;
  } while (voto2 < 0);
  do {
    cout << "Inserisci il primo voto: ";
    cin >> voto3;
  } while (voto3 < 0);

  media = (voto1 + voto2 + voto3) / 3;
  if (media < 4.5) {
    cout << "La tua media e' gravemente insufficente perche' hai: " << media;
  } else if (media >= 4.5 && media < 6) {
    cout << "La tua media e' insufficente perche' hai: " << media;
  } else if (media >= 6 && media <= 7.5) {
    cout << "La tua media e' sufficente perche' hai: " << media;
  } else if (media > 7.5) {
    cout << "La tua media e' buona perche' hai: " << media;
  }

  return 0;
}
