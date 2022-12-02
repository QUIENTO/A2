//Autor: Wilfrido Israel Morales Torres
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es ingresar el  espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa
{//Abrimos llave
	float XNCG_x,XNCG_pm=0;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int XNCG_i=0,XNCG_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>XNCG_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{////Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
	cout<<"Ingrese x: ";cin>>XNCG_x;//Usamos cout para mostrar un mensaje por pantalla y que el usuario lo ingrese.
	XNCG_i=XNCG_i+1;//Aumentamos el contador.
	if(XNCG_x>XNCG_pm){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		XNCG_pm=XNCG_x;//Igualamos la variable XNCG_pm con la variable XNCG_x.
	}//Cerramos llave y la estructura del if.

	}while(XNCG_i<XNCG_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"El promedio maximo del curso es: "<<XNCG_pm<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
}//Cerramos llave.
