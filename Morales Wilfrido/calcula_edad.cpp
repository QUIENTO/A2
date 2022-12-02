//Autor: Wilfrido Israel Morales Torres
#include <iostream> //Llamando a la libreria para lograr tener ingreso a los dispositivos de ingreso y/o salida.
using namespace std;//Es ingresar al  espacio del nombre donde está encerrado toda la libreria.
int main()//Aqui iniciamos la ejecucion del programa.
{//Abrimos llave
	int XNCG_aa,XNCG_ma,XNCG_da,XNCG_an,XNCG_mn,XNCG_dn,XNCG_a,XNCG_m,XNCG_d;//Usamos int para representar un caracter y declaramos las variables enteras.
	cout<<"Ingrese la fecha actual :";cin>>XNCG_aa>>XNCG_ma>>XNCG_da;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.
	cout<<"Ingrese la fecha de nacimiento: ";cin>>XNCG_an>>XNCG_mn>>XNCG_dn;//Usamos cout para mostar por pantalla cualquier dato y cin para que el usuario ingrese datos.

      	if(XNCG_da>XNCG_dn){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.

		XNCG_d=XNCG_da-XNCG_dn;//Si se cumple la expresion entonces la variable XNCG_d es igual a la variable XNCG_da menos XNCG_dn.

	}else{//Si no se cumple la expresion cerramos llave, usamos else y abrimos llave.
		XNCG_da=XNCG_da+30;//La avariable XNCG_da es igual a XNCG_da mas 30.
		XNCG_ma=XNCG_ma-1;//La variable XNCG_ma es igual a XNCG_ma menos 1.
		XNCG_d=XNCG_da-XNCG_dn;//La variable XNCG_d es igual a XNCG_da menos XNCG_dn.
	}//Cerramos llave y la estructura del if.

      	if(XNCG_ma>XNCG_mn){//Usamos if como una composición de seleccion para tomar elecciones en  base a una expresion y abrimos llave.
	
XNCG_m=XNCG_ma-XNCG_mn;//Si se cumple entonces XNCG_m es igual a XNCG_ma menos XNCG_mn

	}else{//Si no se cumple la expresion cerramos llave,usamos else y abrimos llave.

		XNCG_ma=XNCG_ma+12;//La variable XNCG_ma es igual a la variable  XNCG_ma mas 12.
		XNCG_aa=XNCG_aa-1;//La variable XNCG_aa es  igual a la variable  XNCG_aa menos 1.
		XNCG_m=XNCG_ma-XNCG_mn;//La variable XNCG_m es igual a la variable XNCG_ma menos la variable XNCG_mn.
	}//Cerramos llave y la estructura del if.
                XNCG_a=XNCG_aa-XNCG_an;//La variable XNCG_a es igual a XNCG_aa menos la variable XNCG_an.

	cout<<"Usted tiene "<<XNCG_a<<" años, "<<XNCG_m<<" meses,"<<XNCG_d<<" dias"<<endl;//Presentamos el resultado por pantalla y usamos endl para un salto de linea.
	return 0;//Usamos return para terminar la ejecucion de una funcion.
	
}//Cerramos llave.
