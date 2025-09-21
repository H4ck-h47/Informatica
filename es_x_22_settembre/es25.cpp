#include <iostream>

using namespace std;

int main()
{
    /*
    Scrivere un programma che visualizzi un rettangolo la cui cornice sia costituita da caratteri
    asterisco, la parte interna da caratteri Q e dove i numeri di righe e di colonne del rettangolo
    siano decisi dall'utente (ciascuno di questi numeri non deve essere inferiore a 3).
    Per esempio, se il numero delle righe è uguale a 5 e il numero di colonne a 21, sul video
    deve apparire:
        *********************
        *QQQQQQQQQQQQQQQQQQQ*
        *QQQQQQQQQQQQQQQQQQQ*
        *QQQQQQQQQQQQQQQQQQQ*
        *********************
    */
    int righe, colonne;
    do {
        cout << "Inserisci il numero di righe (minimo 3): ";
        cin >> righe;
    } while (righe < 3);

    do {
        cout << "Inserisci il numero di colonne (minimo 3): ";
        cin >> colonne;
    } while (colonne < 3);

    cout << endl;

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            if (i == 0 || i == righe - 1 || j == 0 || j == colonne - 1) {
                cout << '*';
            } else {
                cout << 'Q';
            }
        }
        cout << endl;
    }
    return 0;
}
