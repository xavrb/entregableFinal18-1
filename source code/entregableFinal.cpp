#include <iostream>
#include <string.h>
#define noAlumnos 200
using namespace std;


int main(){
 
 
	cout << "Entregable final \n Menú Principal\n Elige opción:\t (u) ULAM\n(s) SERIE\n(c) Cálculo del sueldo\n(h) Horarios\n(e) Empleados\n(g) Empresa Ganancias\n(m) Meteorología\n(x) Estacionamiento\n(b) Habitantes de un barrio \n>> opción?";

	do{
		cin >> opc;
		switch(opc){
			case 'u':
			case 'U':
				cout << "\nOpción seleccionada: ULAM \n";
				break;

			case 's':
			case 'S':
				cout << "\nOpción seleccionada: Serie \n";
				break;
			
			case 'c':
			case 'C':
				cout << "\nOpción seleccionada: Cálculo del sueldo \n";
				break;
			case 'h':
			case 'H':
				cout << "\nOpción seleccionada: Horarios \n";
				break;
			case 'e':
			case 'E':
				cout << "\nOpción seleccionada: Empleados \n";
				break;
			case 'g':
			case 'G':
				cout << "\nOpción seleccionada: Empresa Ganancias \n";
				break;
			case 'm':
			case 'M':
				cout << "\nOpción seleccionada: Meteorología \n";
				break;
			case 'x':
			case 'X':
				cout << "\nOpción seleccionada: Estacionamiento \n";
				break;
			case 'b':
			case 'B':
				cout << "\nOpción seleccionada: Habitantes de un barrio \n";
				break;

			default:
				cout << "OPCION INCORRECTA! ingrese opcion valida\n";
				break;
		}






	}while(opc!='u'||opc!='s'||opc!='c'||opc!='h'||opc!='e'||opc!='g'||opc!='m'||opc!='x'||opc!='b'||opc!='U'||opc!='S'||opc!='C'||opc!='H'||opc!='E'||opc!='G'||opc!='M'||opc!='X'||opc!='B');
					 	//	u= ULAM
						//	s=SERIE
						//	c= calculo del sueldo
						//	h=horario de verano
						//	e=empleados
						//	g= empresa ganancias
						//	m=meteorologia
						//	x=estacionamiento
						//	b= habitantes de barrio





	return 0;

}


