#include <iostream>

using namespace std;

int main()
{
    /*
        Sapendo che in un parcheggio la prima ora costa 2.50 € mentre tutte le successive costano 1.50 €,
        scrivere un programma che richieda il numero complessivo delle ore e visualizzi il totale da pagare.
    */
    int nore;
    float prezzo=0;

    cout << "Inserisci il numero di ore che stai nel parcheggio: ";
    cin >> nore;
    nore -= 1;
    for (int i=0; i<nore; i++) {
        prezzo += 1.50;
    }
    prezzo+=2.50;
    cout << "il prezzo da pagare e': "<< prezzo;
    return 0;
}
