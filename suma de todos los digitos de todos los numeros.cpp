#include <iostream>

using namespace std;


int main()
{
int a,b,c,d,f,g,h,i,j;
cout<<"escriba el  numero a sumar"<<endl;
cin>>a;
f=a/10;
g=a-a/10*10;
cout<<"escriba el segundo numero a sumar"<<endl;
cin>>b;
h=b/10;
i=b-b/10*10;
j=f+g+h+i;
cout<<"la suma de todos los digitos es =  "<<j;
cout<<"  "<<endl;
system("pause");
}
