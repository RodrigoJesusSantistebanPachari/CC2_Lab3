/*EJERCICIO 4
Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)*/

#include<iostream>

using namespace std;

//Funcion Iterativa
int StringLenghtI(char *Cadena){
	int cont=0;						
	while(*Cadena++ != '\0')				
		cont++;										
	return cont;
}

//Funcion Recursiva								
int StringLenghtR(char *Cadena, int suma){
	if(*Cadena++=='\0')						
		return suma;
	else									
		StringLenghtR(Cadena, ++suma);					
}

//Funcion Principal
int main(){
	
	char *Cadena = new char[30];
	cout<<"Ingrese una palabra "; cin.getline(Cadena, 30,'\n');
	cout<<"El tamaño de su cadena usando la funcion iterativa es: "<<StringLenghtI(Cadena)<<endl;
	cout<<"El tamaño de su cadena usando la funcion recursiva es: "<<StringLenghtR(Cadena,0)<<endl;
	
	return 0;
}  
