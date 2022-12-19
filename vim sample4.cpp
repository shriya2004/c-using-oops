/printing adress and value of pointer
#include<iostream>
using namespace std;
int main()
{
        int a=3000,*ptr,val;
        ptr = &a;
        val=*ptr;
        cout<<"value of a ="<<a<<endl;
        cout<<"value of ptr ="<<ptr<<endl;
        cout<<"value of val ="<<val<<endl;
        return 0;
}
output
value of a =3000
value of ptr =0x7ffc00d56ab8
value of val =3000
