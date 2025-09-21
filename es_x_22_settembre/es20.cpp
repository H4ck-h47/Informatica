#include <iostream>

using namespace std;

int main()
{
    /*
        Riscrivere il seguente codice utilizzando un’iterazione definita (for) in modo tale che
        l’output sia lo stesso (identico) dell’iterazione proposta
        int a,b;
        cout << “Inserisci due numeri: “;
        cin >> a;
        cin >> b;
        while(a<b){
            cout << a << endl;
            a++;
        }
    */
    int a,b;
    cout << "Inserisci due numeri: ";
    cin >> a;
    cin >> b;
    for (a; a<b; a++)
        cout << a << endl;


    return 0;
}
