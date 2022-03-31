#include <iostream>
#include <string>

using namespace std;

int main(){
  string nome = "Andrea", cognome, saluto, risultato;
  cout << "Inserisci il cognome: ";
  cin >> cognome;

  cout << "Inserisci il saluto: ";
  cin.ignore();
  getline(cin,saluto);

  risultato = saluto + " " + nome + " " + cognome;
  cout << risultato << " [" << risultato.size() << "]";

  return 0;
}
