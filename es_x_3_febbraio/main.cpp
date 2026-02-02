#include <iostream>
#include <conio.h>
#define DIM 100
using namespace std;

int main()
{
    char frase[DIM];
    char carattere;
    int i=0, nospace=0;
    cout << "Inserisci una frase premendo invio: ";
    carattere = getche();
    while(carattere != '\r'){
        frase[i] = carattere;
        i++;
        carattere = getche();
    }
    frase[i] = '\0';
    i=0;
    while(frase[i] == ' '){
        nospace++;
        i++;
    }
    i=0;
    if (nospace !=0){
        while(frase[i]!= '\0'){
            frase[i]= frase[i+nospace];
            i++;
        }
    }
    cout << endl << "La frase inserita e' la seguente: "<< frase<< endl;
    return 0;
}
