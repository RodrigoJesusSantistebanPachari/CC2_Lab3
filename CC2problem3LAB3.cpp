/* 	EJERCICIO 3
	Implementar una función que ordene los elementos de un arreglo: ascendente. */

#include<iostream>
using namespace std;

//Función Ordenamiento por Seleccion
void ordenarArray(int *Arreglo, int tam){
	int aux, *Ptr2, *Ptr = Arreglo;
	for(int i=0; i<tam+1; i++){
		for(int j=i;j<tam;j++){
			Ptr2 = Arreglo+j;
			if(*Ptr>*Ptr2){
				aux=*Ptr;
				*Ptr = *Ptr2;
				*Ptr2 = aux;
			}
		}	
		Ptr++;
	}
}

//Funcion Ingresar
void IngresarDatos(int *Arreglo, int tam){
	for(int i=0; i<tam; i++){
		cout<<endl<<"Ingrese un numero "; cin>>*Arreglo++;
	}
}

//Funcion Imprimir
void PrintArray(int *Arreglo, int tam){
	for(int i=0;i<tam;i++){
		cout<<*Arreglo++<<endl;
	}
}

//Función Principal
int main(){
	
	int tam, *Arreglo;
	cout<<"Ingrese el tamaño de su vector "; cin>>tam;
	Arreglo = new int[tam];
	IngresarDatos(Arreglo,tam);
	cout<<"\nSu vector ordenado es:"<<endl;
	ordenarArray(Arreglo,tam);
	PrintArray(Arreglo, tam);
	return 0;
}  
