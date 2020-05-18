/*EJERCICIO 5
Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
(asuma que la cadena b tiene el tamaño suficiente para contener los elementos de a). */

#include<iostream>
using namespace std;

//Funcion que retorna el tamanio de las cadenas
int StringLenght(char *Cadena){
	int cont=0;							
	while(*Cadena++ != '\0')				
		cont++;										
	return cont;
}

//Funcion que concatena la cadena A a la cadena B
void concatenarStrings(char *CadenaA, char *CadenaB){
	char *AuxB = CadenaB+StringLenght(CadenaB);
	while(*CadenaA != '\0'){													
		*AuxB++ = *CadenaA++;											
	}
	cout<<"La Cadena B concatenada es: "<<CadenaB;
}

//FuncionPrincipal
int main(){
	char CadenaA[30], CadenaB[60];												
	cout<<"Ingrese una palabra "; cin.getline(CadenaB, 30,'\n');
	cout<<"Ingrese otra palabra "; cin.getline(CadenaA, 60,'\n');
	concatenarStrings(CadenaA, CadenaB);
	return 0;
} 
