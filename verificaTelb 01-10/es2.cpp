#include <iostream>

using namespace std;

int main()
{
    int nmax=0, nmin=0, n, num;
    do{
        cout << "Quanti numeri vuoi inserire" << endl;
        cin >> n;
    } while (n<0);
    for (int i; i<n; i++){
        cout << "Inserisci il primo numero: ";
        cin >> num;
        if (num > nmax){
            nmax=num;
        } else if (num< nmin){
            nmin=num;
        }
    }
    cout << "Il numero massimo inserito e': " << nmax << " invece quello minore e': "<< nmin;
    return 0;
}

