#include <iostream>

using namespace std;

int main()
{


    int tempoInSecondi, ore, minuti, secondi;
    cout << "Inserisci il tempo in secondi: ";
    cin >> tempoInSecondi;


    ore = tempoInSecondi / 3600;
    minuti = (tempoInSecondi % 3600) / 60;
    secondi = tempoInSecondi % 60;


    cout << "Equivalente: " << ore << " ore, " << minuti << " minuti, " << secondi << " secondi." << endl;
    return 0;
}
