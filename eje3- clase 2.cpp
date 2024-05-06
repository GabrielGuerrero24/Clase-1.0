#include <iostream>
using namespace std;
int main ()
{
int i=0;
int n=1;
cout << " ingrese un numero entero positivo n \n";
cin >> n; 
if (n>0) 
{
    while (i<n)
    {
        cout<<i<< "\n";
        i= i+2;
    }
    
}else 
    {
        cout << " numero no valido \n";
    }
return 0;
}