#include <iostream>
#include <time.h>

#define narray 1000

using namespace std;

int main () {
  int array[narray], n, risultato, conta=0, maxconta=0;
  do {
    cout << "Inserisci un numero (maggiore di 0 e minore di 1000)" << endl;
    cin >> n;
  } while (n<0 || n>1000);
  srand(time(NULL));
  for (int i=0; i<n; i++) {
    array[i] = rand() % 32766 - 16383;
  }

  for (int i=0; i<n; i++) {
  conta=0;
    for(int j=0; j<n; j++) {
      if (array[i]== array[j])
        conta++;
    }

    if (conta > maxconta){
      maxconta=conta;
      risultato=array[i];
    }
  }

  cout << "il numero che compare più volte è: " << risultato<< endl << endl;
  for (int i=0; i<n; i++){
    cout << array[i] << " ";
  }

  return 0;
}
