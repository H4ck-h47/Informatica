#include <iostream>
#define DIM 100

using namespace std;

int main()
{
    int numeri[DIM], q, i = 0;
    do {
        cout << "Quanti numeri vuoi inserire (max " << DIM << " numeri)? ";
        cin >> q;
    }
    while (q <= 0 || q > DIM);
    
    for (int i = 0; i < q; i++)
    {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
    }

    
    while (i < q/2 && numeri[i] == numeri[q-1-i])
        i++;

    
    if (i == q/2)
        cout << "L'array e' palindromo";
    else        
        cout << "L'array non e' palindromo";
    return 0;
}

