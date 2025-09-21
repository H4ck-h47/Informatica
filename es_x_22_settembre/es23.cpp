#include <iostream>

using namespace std;

int main()
{
    /*
    Scrivere un programma che verifichi se un numero inserito da tastiera è una potenza del 2 e,
    se lo è, determini l'esponente
    */
    int numero, esponente=0, potenza=1;
    do {
        cout << "inserisci un numero: ";
        cin >> numero;
    } while (numero < 0);

    while (potenza < numero) {
        potenza *= 2;
        esponente++;
    }

    if (potenza == numero) {
        cout << numero << " e' una potenza di 2." << endl;
        cout << "Esponente: " << esponente << " (2^" << esponente << " = " << numero << ")" << endl;
    } else {
        cout << numero << " non e' una potenza di 2." << endl;
    }

    return 0;
}
