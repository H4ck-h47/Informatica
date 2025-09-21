#include <iostream>

using namespace std;

int main()
{
    int numero, divisore=2;
    bool primoFattoreStampato = false;

    do {
        cout << "Inserisci un numero positivo: ";
        cin >> numero;
    } while (numero <0);
    cout << "Fattori primi di " << numero << " sono: ";


    while (numero > 1) {
        if (numero % divisore == 0) {
            if (primoFattoreStampato) {
                cout << " * ";
            }
            cout << divisore;
            numero /= divisore;
            primoFattoreStampato = true;
        } else {
            divisore++;
        }
    }
    return 0;
}
