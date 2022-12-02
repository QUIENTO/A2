//Autor: Wilfrido Israel Morale Torres
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es ingresar al  espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave
	float XNCG_x,XNCG_s=0,XNCG_vb,XNCG_piva=12,XNGC_viva,XNCG_pdesc=10,XNCG_vdesc,XNCG_vn;//Usamos float para representar un caracter y declaramos las variables flotantes.
	int XNCG_i=0,XNCG_l;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese l: ";cin>>XNCG_l;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	do{//Usamos do-while para repetir una instruccion hasta que la expresion especificada sea falsa.
		cout<<"Ingrese x: ";cin>>XNCG_x;////Usamos cout para mostrar por pantalla cualquier dato y cin para que el usuario ingrese datos.
		XNCG_i=XNCG_i+1;//Aumentamos el contador.
		XNCG_s=XNCG_s+XNCG_x;//Acumulamos.
	}while(XNCG_i<XNCG_l);//Esto se va a repetir mientras la expresion sea falsa.
	XNCG_vb=XNCG_s;//La variable XNCG_vb es igual a la variable XNCG_s.
	XNGC_viva=XNCG_vb*XNCG_piva/100;//La variable XNCG_viva es igual a la variable XNCG_vb por la variable XNCG_piva dividido entre 100.
	XNCG_vdesc=XNCG_vb*XNCG_pdesc/100;//La variable XNCG_vdesc es igual a la variable XNCG_vb por la variable XNCG_pdesc divido entre 100.
	XNCG_vn=XNCG_vb+XNGC_viva-XNCG_vdesc;//La variable XNCG_vn es igual a la variable XNCG_vb mas la variable XNCG_viva menos XNCG_vdesc.
	cout<<"El valor a pagar es de: "<<XNCG_vn<<endl;//Usamos cout para mostrar un mensaje y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
}//Cerramos llave.
