#include <iostream>
using namespace std;

int main() {
  int numero;
  cin>>numero;
  
  int unita;
  int decine;
  int centinaia;
  int migliaia;
  
  migliaia = numero/1000;
  centinaia = (numero%1000)/100;
  decine = (numero%100)/10;
  decine = (numero/10)/1;
  
  cout<<migliaia<<centinaia<<decine<<unita;
  return 0; 
} 
