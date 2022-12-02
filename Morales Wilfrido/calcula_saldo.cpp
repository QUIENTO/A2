//Autor: Wilfrido Israel Morales Torres
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es ingresar al  espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave
	float XNCG_x,XNCG_s=0;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int XNCG_i=0,XNCG_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese cantidad de egresos (l): ";cin>>XNCG_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese saldo inicial (s): ";cin>>XNCG_s;///Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
	cout<<"Ingrese egreso(x): ";cin>>XNCG_x;//Usamos cout para pedir un valor y cin para que el usuario lo ingrese
	XNCG_i=XNCG_i+1;//Aumentamos el contador
	XNCG_s=XNCG_s+XNCG_x;//Acumulamos

	}while(XNCG_i<XNCG_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"El saldo final es: "<<XNCG_s<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave.
