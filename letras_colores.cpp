#include <iostream>
using namespace std;

int main(){
    char letra;
    cout << "ingrese una de las siguientes letras:R,Y,B,W,K,C,G"<< endl;
    cin >>  letra;
    if ( letra == 'R')
    cout << " Color es Rojo"<< endl; 
    else if( letra == 'Y'  )
    cout <<"Color es Amarillo"<< endl;
    else if( letra == 'B'  )
    cout <<" color es Azul"<< endl;
    else if( letra == 'W' )
    cout <<"Color es Blanco"<< endl;
    else if( letra == 'K' )
    cout <<"Color es Negro"<< endl;
     else if( letra == 'C' )
    cout <<"Color es Cian"<< endl;
     else if( letra == 'G' )
    cout <<"Color es Verde"<< endl;
    else 
    cout << "Letra no válida"<< endl;
    return 0;
}