#include <iostream>
using namespace std;
int main(){
  char literka;
  cin>>literka;
  if(int(literka)>=65 && int(literka)<=122)
  {
    if(int(literka)>=65 && int(literka)<=90)
    {
      cout<<"podałes dużą literke";
    }
    else if(int(literka)>=97 && int(literka)<=122)
    {
      cout<<"podałes małą literke";
    }
    else{
    cout<<"podałes zła wartosc";
  }
  }
  else{
    cout<<"podałes zła wartosc";
  }
  return 0;
}