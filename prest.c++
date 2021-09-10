#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 
 
int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    int PRESTACAO, VALOR, TEMPO, TAXA;
 
    cout<<"Qual o tempo ? \n";
    cin >>TEMPO;
 
    cout<<"Qual a valor ? \n";
    cin >>VALOR;
 
    cout<<"Qual a taxa ? \n";
    cin >>TAXA;
    
    PRESTACAO=VALOR+(VALOR*TAXA/100)*TEMPO;
    
    cout <<"A prestação é :"<< PRESTACAO; 
    cout <<"\n"; 
    
    system("pause");  
}
