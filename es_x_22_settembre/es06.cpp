#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    /*
        Scrivere un programma che generi tre numeri casuali compresi fra 1 e 10 e li visualizzi in
        ordine crescente, nel caso di numeri uguali ne visualizzi uno solo. (Ricordo che per generare
        numeri casuali è necessario “caricare” la libreria <ctime>, usare la funzione srand per
        l’inizializzazione e la funzione rand per la generazione dei numeri).
    */

    int num1, num2, num3;
    srand(time(NULL));
    num1= rand()%11;
    num2= rand()%11;
    num3= rand()%11;

    if (num1 == num2) {
        cout << "i numeri generati sono: " << num1 << "; " << num3;
    } else if (num2== num3){
        cout << "i numeri generati sono: " << num1 << "; " << num3;
    }else if (num1== num3){
        cout << "i numeri generati sono: " << num2 << "; " << num3;
    } else {
        cout << "i numeri generati sono: " << num1<< "; " << num2 << "; " << num3;
    }
    return 0;
}
