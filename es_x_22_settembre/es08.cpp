#include <iostream>

using namespace std;

int main()
{
    /*
    Scrivere un programma che calcoli l'espressione y = 19*x + 4, dove x è una variabile reale il cui
    valore è richiesto all’utente in fase di esecuzione. Si visualizzi il valore finale di y.
    */
    float x, y;
    cout << "Inserisci il valore di x: ";
    cin >> x;
    y = (19*x) + 4;
    cout << "Il valore di y e': " << y;
    return 0;
}
