/*EJERCICIO 1
Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo.
(Iterativa y recursiva).*/

#include<iostream>
using namespace std;

//Funcion Iterativa
int SumarIterativo(int *Arreglo, int tam){
	int sum = 0;
	for(int i=0; i<tam; i++)
		sum+=*Arreglo++; 									
	return sum;
}

//Funcion Recursiva
int SumarRecursivo(int *Arreglo, int tam){
	if(tam == 0)												
		return 0;
	else														
		return *Arreglo + SumarRecursivo(++Arreglo,--tam);
}

//Funcion IngresarDatos
void IngresarDatos(int *Arreglo, int tam){
for(int i=0;i<tam;i++){
	cout<<"\nIngrese "; cin>>*Arreglo++;
	}
}

//Funcion Principal
int main(){
	
	int tam, *Arreglo;											
	cout<<"Ingrese el tamaño de su vector "; cin>>tam;
	Arreglo = new int[tam];
	IngresarDatos(Arreglo,tam);
	cout<<"\nLa suma del vector con el metodo iterativo es: "<<SumarIterativo(Arreglo,tam)<<endl;
	cout<<"La suma del vector con el metodo recursivo es: "<<SumarRecursivo(Arreglo,tam)<<endl;
	return 0;
}  
