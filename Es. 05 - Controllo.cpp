#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Inserisci il numero";
  cin>>n;
  while(n>=1000){
    cout<<"Riprova! Il numero deve essere minore di 1000";
    cout<<"Inserisci il numero";
    cin>>n;
  }
  int i = 0;
  if(i<n){
    i = i + 1;
  } else {
    return 0;
  }
}
