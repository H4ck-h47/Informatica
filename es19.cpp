#include <iostream>

using namespace std;

int main()
{
    int n;
    
    //leggo da tastiera un numero positivo assicurandomi che sia veramente tale
    do
    {
        cout << "Inserisci un numero positivo" << endl;
        cin >> n;
    }while(n<=0);
    //da qui in poi sono CERTO che il numero contenuto nella variabile n è positivo
    
    if(n%2 != 0)    //se il numero inserito dall'utente è dispari
        n++;        //rendilo pari (il pari immediatamente successivo al numero inserito)
    
    //da qui in poi sono CERTO che il numero contenuto nella variabile n è positivo ed è PARI
    
    //stampa a video tutti i numeri interi pari maggiori o uguali del numero inserito dell'utente
    for(int i=n; i>0; i=i+2)
        cout << i << endl;

    return 0;
}
