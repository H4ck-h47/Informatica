#include <iostream>

using namespace std;

int main()
{
    int a, b, resto, mcm, a1, b1;
    do {
        cout << "Inserisci il primo numero (positivo)" << endl;
        cin >> a;
    } while(a<0);
    do {
        cout << "Inserisci il secondo numero (positivo)" << endl;
        cin >> b;
    } while(b<0);
    a1=a;
    b1=b;
    while (b!=0){
        resto=a%b;
        a=b;
        b=resto;
    }
    mcm =(a1*b1)/a;
    cout << "Il risultato del MCD e': "<< a << " mentre dell' mcm e': " << mcm;

    return 0;
}
