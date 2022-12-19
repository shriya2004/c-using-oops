//useing increment and decrement operators
#include<iostream>
using namespace std;
int main()
{
  int a=10,b=30,res_a1,res_a2,res_b1,res_b2;
  res_a1=++a;
  res_a2=a++;
  res_b1=--b;
  res_b2=b--;
  cout<<"pre increment of a ="<<res_a1<<endl;
  cout<<"post increment of a ="<<res_a2<<endl;
  cout<<"pre decrement of b ="<<res_b1<<endl;
  cout<<"post decrement of b ="<<res_b2<<endl;
  return 0;
}
output
pre increment of a =11
post increment of a =11
pre decrement of b =29
post decrement of b =29
