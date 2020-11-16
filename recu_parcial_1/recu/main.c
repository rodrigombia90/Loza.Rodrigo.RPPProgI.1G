#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una función llamada aplicarDescuento que reciba como
parámetro el precio de un producto
y devuelva el valor del producto con un descuento del 5%.
Realizar la llamada desde el main. *

2.2. Crear una función que se llame contarCaracteres que
reciba una cadena de caracteres como primer parámetro y
un carácter como segundo y devuelva la cantidad de veces
 que ese carácter aparece en la cadena *

 3. Dada la estructura Notebook(id, procesador, marca, precio)
 generar una función que permita ordenar un array de dicha
estructura por marca.
 Ante igualdad de marca deberá ordenarse por precio.
 Hardcodear datos y mostrarlos desde el main. *

*/

typedef struct
{
    int id;
    char procesador;
    int precio;
    char marca;

}eNotebook;

int contarCaracteres(char cadenaCaracteres1[], char cadenaCaracteres2[]);
int ordenarNotebooks(eNotebook notebook);
int aplicarDescuento(int precioProducto);

int main()
{
    int precio=100;
    int cadena1;//= "hola";
    int cadena2;//= "alo";

    printf("el precio con el 5 de descuento es: \n");
    aplicarDescuento(precio);


    eNotebook notebooks= {
        {1,"intel",1500,"lenovo"},
        {2,"amd",1600,"asus"},
        {3,"celeron",2600,"bgh"} };


    contarCaracteres(cadena1,cadena2);


    return 0;
}



int aplicarDescuento(int precioProducto)
{
    int precioDescuento=precioProducto*0.95;

    return printf("%d",precioDescuento);



}


int ordenarNotebooks(eNotebook notebook)
{
    int error=0;



    return error;
}



int contarCaracteres(char cadenaCaracteres1[], char cadenaCaracteres2[])
{
	int cantidad;
	char car;

	printf("Ingrese un palabra para comparar\n");
	scanf("%c",&car);

	for(int i = 0; i<strlen(cadenaCaracteres1);i++)
	{
		if(car == cadenaCaracteres1[i] && cadenaCaracteres2[i])
		{
			cantidad++;
		}
	}

	return cantidad;

}
