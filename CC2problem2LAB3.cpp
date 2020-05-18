/*EJERCICIO 2
Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva).*/

#include<iostream>
using namespace std;

//Funcion de Intercambio
void Swap(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;	 
}

//Funcion Iterativa
void invertirArrayI(int *Arreglo, int tam){															
	int *ptr = Arreglo+tam-1;
	while(Arreglo<ptr){																		
		Swap(*Arreglo++,*ptr--);
	}
}

//Funcion Recursiva
void invertirArrayR(int *Arreglo, int tam){			
    if (tam <= 1){										
    	return;
	} 
    else{
    	int *Aux1 = Arreglo+(tam--) -1;
		Swap(*Arreglo, *Aux1);
		invertirArrayR(++Arreglo, --tam);	
		}
	}

//Funcion IngresarDatos
void IngresarDatos(int *Arreglo, int tam){
	for(int i=0;i<tam;i++){
		cout<<"\nIngrese "; cin>>*Arreglo++;
	}
}

//Funcion Imprimir
void PrintArray(int *Arreglo, int tam){
	for(int i=0;i<tam;i++){
		cout<<*Arreglo++<<endl;
	}
}

//Funcion Principal
int main(){
	
	int tam, *Arreglo;
	cout<<"Ingrese el tamaño de su vector "; cin>>tam;
	Arreglo = new int[tam];
	IngresarDatos(Arreglo,tam);
	invertirArrayI(Arreglo,tam);
	cout<<"\nEl vector invertido por la funcion iterativa es: "<<endl;				
	PrintArray(Arreglo,tam);
	invertirArrayR(Arreglo, tam);
	cout<<"\nEl vector invertido nuevamente por la funcion recursiva es: "<<endl; 
	PrintArray(Arreglo,tam);
	
	return 0;
}  
