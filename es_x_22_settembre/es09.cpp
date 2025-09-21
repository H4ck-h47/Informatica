#include <iostream>

using namespace std;

int main()
{
    /*
    Scrivere un programma che, richieste in input lunghezza, larghezza e altezza di un parallelepipedo,
    ne calcoli la superficie totale e il volume. (In questo caso le tre misure devono essere numeri positivi
    quindi vanno validati senza ulteriore richiesta)
    */

    int lunghezza, larghezza, altezza, superficie, volume;
    do {
        cout << "Inserisci la misura della lunghezza: ";
        cin >> lunghezza;
    } while (lunghezza <0);
    do {
        cout << "Inserisci la misura della larghezza: ";
        cin >> larghezza;
    } while (larghezza <0);
    do {
        cout << "Inserisci la misura della altezza: ";
        cin >> altezza;
    } while (altezza <0);

    superficie= 2*((lunghezza*altezza)+(altezza*larghezza)+(lunghezza*larghezza));
    volume= lunghezza*altezza*larghezza;
    cout << "La superficie totale e' di: " << superficie << " mentre il volume e' di: " << volume;

    return 0;
}
