#include <iostream>
#define DIM 30
using namespace std;

int main() {
  char messaggio[DIM] = "Ciao, come stai?", vecchio[DIM] = "ai",
       nuovo[DIM] = "is";
  int i = 0, len_frase, len_vecchio;
  while (messaggio[i] != '\0' && i < DIM)
    i++;
  len_frase = i;
  i = 0;
  while (vecchio[i] != '\0' && i < DIM)
    i++;
  len_vecchio = i;

  cout << "Il messaggio da modificare e': " << messaggio << endl;
  cout << "len_frase, len_vecchio" << endl
       << len_frase << endl
       << len_vecchio << endl;

  for (int i = 0; i <= len_frase; i++) {
    for (int j = 0; j <= len_vecchio; j++) {
      if (messaggio[i] == vecchio[j])
        messaggio[i] = nuovo[j];
    }
  }

  cout << "Il messaggio modificato e': " << messaggio;

  return 0;
}
