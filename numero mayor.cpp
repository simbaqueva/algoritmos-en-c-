#include <iostream>

using namespace std;


int main()
{
int a,b,c,d,f;
cout<<"escriba un numero"<<endl;
cin>>a;
b=a/10;
c=a-a/10*10;         
if (b>c){
cout<<"el primer digito es mayor"<<endl;
}
else{
cout<<"el segundo digito es mayor"<<endl;  
}
system("pause");                
}
    
