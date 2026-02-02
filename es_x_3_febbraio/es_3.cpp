#include <iostream>

using namespace std;

int main() {

  char frase[] = "Ciao,", del[] = "Cmioa";
  int i = 0, n = 0;
  while (del[i] != '\0') {
    if (frase[0] == del[i]) {
      while (frase[n] != '\0') {
        frase[n] = frase[n + 1];
        n++;
      }
      frase[n] = '\0';
      n = 0;
      cout << i << ": " << frase << endl;
    }
    i++;
  }
  cout << "Il messaggio modificato e': " << frase;

  return 0;
}
