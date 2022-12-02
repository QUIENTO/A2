//Autor: Wilfrido Israel Morales Torres
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es ingresar al  espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave
	float XNCG_x,XNCG_s=0,XNCG_s1=0,XNCG_s5=0;//Usamos float para representar un caracter y declaramos las variables flotantes
	int XNCG_i=0,XNCG_l,XNCG_i1=0,XNCG_i5=0;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>XNCG_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.

	cout<<"Ingrese x: ";cin>>XNCG_x;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	XNCG_i=XNCG_i+1;//Aumentamos el contador.
	XNCG_s=XNCG_s+XNCG_x;//Acumulamos.
	if(XNCG_x==1){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
		XNCG_i1=XNCG_i1+1;//Aumentamos el contador de las monedas de 1 dolar.
		XNCG_s1=XNCG_s1+XNCG_x;//Acumulamos las monedas de 1 dolar.
	}else{//Cerramos llave y usamos else en caso de que no se cumpla con la expresion especificada.

		XNCG_i5=XNCG_i5+1;//Aumentamos el contador de las monedas de 50 centavos.
		XNCG_s5=XNCG_s5+XNCG_x;//Acumulamos las monedas de 50 centavos.
	}//Cerramos llave y la estructura del if.

	}while(XNCG_i<XNCG_l);//Esto se va a repetir mientras la expresion sea falsa.
	cout<<"La cantidad de monedas es: "<<XNCG_i<<endl;//Presentamos por pantalla la cantidad total de monedas
	cout<<"El valor es: "<<XNCG_s<<endl;//Presentamos por pantalla el valor total de las monedas


	cout<<"La cantidad de monedas de 1$ es: "<<XNCG_i1<<endl;//Presentamos por pantalla la cantidad total de las monedas de 1 dolar
	cout<<"El valor es: "<<XNCG_s1<<endl;//Presentamos por pantalla el valor total de las monedas de 1 dolar

	cout<<"La cantidad de monedas de 50ctvs es: "<<XNCG_i5<<endl;//Presentamos por pantalla la cantidad total de las monedas de 50 centavos
	cout<<"La cantidad de moneda es: "<<XNCG_s5<<endl;//Presentamos por pantalla el valor total de las monedas de 50 centavos
	return 0;//Usamos return para terminar la ejecucion de una funcion
}//Cerramos llave.
