/*EJERCICIO 6
Implemente una función que reciba dos cadenas a y b; y copie los elementos de la cadena a para la cadena b. */

#include<iostream>
using namespace std;

//Funcion copiar
void PassData(char *CadenaA, char *CadenaB){					
	for(int i=0; i<30; i++){						
		*CadenaB++ = *CadenaA++;							
	}
}

//FuncionPrincipal
int main(){
	char CadenaA[30], CadenaB[30]; 				
	cout<<"Ingrese una palabra "; cin.getline(CadenaA, 30,'\n');
	PassData(CadenaA, CadenaB);
	cout<<"Su nueva cadena es "<<CadenaB;			
	return 0;
} 
