#include<iostream>

using namespace std;
int main()
{

//int n;
//cin>>n;
//for( ; n>0; n = n/10)
//  cout << n % 10 << endl;
//  return 0;
//int d = 0;
//for(int i=1; i<100; i=i*2) d = d + i;
//cout << d;



int n, divisor=2; cin >> n;
  bool divisorFound = false;
  while(n-2){
    if(n % divisor == 0){
      divisorFound = true;
      break;
    }
    divisor = divisor + 1;
  }
  if(!divisorFound) cout <<"Prime.\n";
  else cout <<"Composite.\n";


return 0;

}


