#include <iostream>

using namespace std;

int main()
{
    int num;
    bool nPrimo = true;

    cout << "Inserisci un numero intero: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " non e' un numero primo." << endl;
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            nPrimo = false;
            break;
        }
    }

    if (nPrimo)
        cout << num << " e' un numero primo." << endl;
    else
        cout << num << " non e' un numero primo." << endl;
    return 0;
}
