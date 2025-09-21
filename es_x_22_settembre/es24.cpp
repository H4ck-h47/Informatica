#include <iostream>

using namespace std;

int main()
{
    /*
    Scrivere un programma visualizzi il quadrato dei primi 24 numeri naturali
    */
    int quadrato;
    for (int i = 1; i <= 24; i++) {
        quadrato = i * i;
        cout << "Il quadrato di " << i << " e' " << quadrato << endl;
    }
    return 0;
}
