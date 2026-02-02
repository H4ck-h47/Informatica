#include <iostream>

using namespace std;

int main() {

  char frase[] = "        Ciao";
  int i = 0, n = 0;
  while (frase[i] != '\0') {
    if (frase[i] != ' ') {
      frase[n] = frase[i];
      n++;
    }
    i++;
  }
  frase[n] = '\0';
  cout << "Il messaggio modificato e': " << frase;

  return 0;
}
