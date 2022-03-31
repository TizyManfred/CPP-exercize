#include <iostream>
#include <vector>

using namespace std;

int main() {
  int facce1; 
  int facce2;
  cin>>facce1;
  cin>>facce2;
  int len;
  if (facce1<facce2){
    len = (facce2-facce1)+1;
  }
  else {
    len = (facce1-facce2)+1;
  }
  
  int num;
  if (facce1<facce2){
      num = facce1;
    }
  else {
    num = facce2;
  }
  int i = 0;
  while (i<len){
    num = num + 1;
    cout<<num<<endl;
    i = i+1;
  }
  return 0;
}
