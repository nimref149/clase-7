#include "vectores.h"
#include <stdio.h>

void cargarVector(int numeros[],int tam)
{
int i;

for(i=0; i<tam; i++){

 printf("ingrese numeros ");
 scanf(" %d",&numeros[i]);

 }

}


void mostrarVector(int numeros[],int tam)
{
    int i;

for(i=0; i<tam; i++){

 printf("%d\n",numeros[i]);


}

}

int BuscarMaximo(int numeros[],int tam ){


int i;
int mayor;
int flag=0;
for(i=0; i<tam; i++){

if(flag==0 || numeros[i]>mayor){

mayor=numeros[i];

flag=1;
}

}
return mayor;
}


int buscarValor(int numeros[], int tam, int valor)
{
    int indiceVector=-1, i;

    for(i=0;i<tam;i++)
    {
        if(numeros[i]==valor)
        {
            indiceVector=i+1;

        }
    }

    return indiceVector;
}



