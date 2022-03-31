#include <iostream>
#include <vector>

using namespace std;

int main(){
    int v[5];
    int i = 0;

    for(; i<5; i++) {
      cin>>v[i];
    }

    i = 0;

    while(i<5){
        if(v[i]%2 == 0) {
            cout<<"Numero pari "<<v[i]<<endl;
        }
        else{

        }
        i = i + 1;
    }
    return 0;
}
