#include <iostream>

using namespace std;

int main()
{
    /*
        Scrivere un programma che, lette le misure dei lati di un triangolo, visualizzi se il triangolo è
        equilatero, isoscele o scaleno.
    */
    float a, b, c;

    cout << "Inserisci i tre lati del triangolo:\n";
    do {
        cout << "Lato1= ";
        cin >> a;
    } while (a<0);
    do {
        cout << "Lato2= ";
        cin >> b;
    } while (b<0);
    do {
        cout << "Lato3= ";
        cin >> c;
    } while (c<0);

    if ( (a < b + c) && (b < a + c) && (c < a + b) ) {

        if (a == b && b == c) {
            cout << "Il triangolo e' equilatero." << endl;
        }
        else if (a == b || b == c || a == c) {
            cout << "Il triangolo e' isoscele." << endl;
        }
        else {
            cout << "Il triangolo e' scaleno." << endl;
        }

    } else {
        cout << "I tre lati non possono formare un triangolo.";
    }
    return 0;
}
