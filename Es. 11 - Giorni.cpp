#include <iostream>
#include <list> 
#include <vector> 

using namespace std;

int main() {
    int N=0,giorni=0,j=0;
    cin>>N;
    
    vector<int> t(N), s(N);
    vector<bool> giorniAnno(366,false);

    
    for(int i=0;i<N;i++){
        cin>>s[i]>>t[i];
        for (j=s[i];j<=t[i];j++){
            giorniAnno[j]=true;
        }
    }
    for(int i=1;i<=365;i++){
        if (giorniAnno[i]==true){
            giorni++;
        }
    }
    cout<<giorni;

    return 0;
}
