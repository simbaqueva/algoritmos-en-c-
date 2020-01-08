#include <iostream>

using namespace std;


int main()
{
int a,b,f,g;
cout<<"escriba un numero"<<endl;
cin>>a;
b=a/10;
f=a-a/10*10;
if(b==f){
cout<<"los digitos son iguales"<<endl;
}
else{
cout<<"los digitos no son iguales"<<endl;  
}
system("pause");            
}
