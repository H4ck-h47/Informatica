#include <iostream>

using namespace std;

int main()
{
    /*
        Scrivere un programma che risolva l'equazione di primo grado ax = b, visualizzando a seconda dei
        casi la soluzione, la scritta equazione indeterminata oppure equazione impossibile. I
        coefficienti reali a e b devono essere richiesti in input all'utente.
    */
    float a,b,x;

    cout << "Inserisci il coeficente a:";
    cin >> a;
    cout << "Inserisci il coeficente b: ";
    cin >> b;

    if (a=0) {
        cout << "L'equazione è impossibile";
    } else if (b=0) {
        cout << "L'equazione è indeterminata";
    } else {
        x=b/a;
        cout << "La soluzione e': " << x;
    }

    return 0;
}
