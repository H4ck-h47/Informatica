#include <iostream>
#include <time.h>
#define MAX 10000
using namespace std;

int main()
{
    int n;
    srand(time(NULL));
    do
    {
        cout << "Inserisci il numero di elementi nell'array: " ;
        cin >> n;
    }
    while(n < 1 || n > MAX);
    int numeri[MAX];

    for(int i=0; i<n; i++)
    {
        numeri[i] = rand() % 32766 - 16383;
    }

    int somma = 0, nmax, nmin = numeri[0], pmax, pmin, pos=0, neg=0, pari=0, dispari=0;
    float media;
    for(int i=0; i<n; i++){
        somma = somma + numeri[i];
        if (numeri[i] > nmax){
            nmax = numeri[i];
            pmax = i;
        }
        if (numeri[i] < nmin) {
            nmin = numeri[i];
            pmin = i;
        }
        if (numeri[i] > 0){
            pos++;
            if(numeri[i] % 2 == 0)
                pari++;
            else
                dispari++;
        }else
            neg++;
    }
    media= somma/float(n);
    for (int i=0; i<n; i++) cout << numeri[i]<< " ";
    cout << endl<< endl;
    cout << "Somma: "<< somma << endl;
    cout << "Media: "<< media << endl;
    cout << "Minimo: "<< nmin << ", Posizione del minimo: "<< pmin<< endl;
    cout << "Massimo: "<< nmax << ", Posizione del massimo: "<< pmax<< endl;
    cout << "Positivi: "<< pos << endl;
    cout << "Negativi: "<< neg << endl;
    cout << "Positivi pari: "<< pari << endl;
    cout << "Positivi dispari: "<< dispari << endl;



    return 0;
}

