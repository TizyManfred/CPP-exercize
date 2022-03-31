#include <iostream>
using namespace std;

int main(){
  int num;
  int N = 5;
  int i = 0;
  int pari; 
  int maggiore = 0;
  int minore = 0;
  
  while(i<N){
    cout<<"Inserisci il numero: ";
    cin>>num;
    if (num%2 == 0){
      pari = pari + 1;    
    }
    else{
      pari = pari;
    }
    if(i==0){
      num = maggiore;
      num = minore;
    }
    else{
      if (num<minore){
        minore = num;
      }
      else{
        minore = minore;
      }
      if(num>maggiore){
        maggiore = num;
      }
      else{
        maggiore = maggiore;
      }
    }
  i = i + 1;
  }
  
  cout<<"Il numero di pari è: "<<pari<<endl;
  cout<<"Il maggiore è: "<<maggiore<<endl;
  cout<<"Il minore è: "<<minore<<endl;
  return 0;
}
