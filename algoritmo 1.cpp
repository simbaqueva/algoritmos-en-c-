#include <iostream>

using namespace std;


int main()
{
int n,m,j,k,l;
cout<<"digite un numero"<<endl;
cin>>n;
j=n/10;
cout<<j;
k=n*j/10;
cout<<k;
if (k==4){
cout<<"el numero termina en 4"<<endl;
}
else{
cout<<"el numero no termina en 4"<<endl;
}
system("pause");
}
