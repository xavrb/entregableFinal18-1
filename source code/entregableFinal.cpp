#include <iostream>
#include <string.h>
 
using namespace std;
// Funciones prototipos
void menu();
void checador(int); //prototipo de funcion de checador 
void ganancias(int);



//clases



//...

int main(){
char opc = '\0';

	menu();

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
				int anios;
				cout << "\nOpción seleccionada: Empresa Ganancias \n";
				cout << "\nIngrese anios para el calculo: \t";
				cin >> anios;
				cout << "Calculando las ganancias con " << anios << "\n";
				ganancias(anios);
				cout << "\nIngrese opción para continuar:\n";
				
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
			case 'q':
			case 'Q':
				cout <<"\nSaliendo...\n";
				return 1;
			break;
			default:
				cout << "OPCION INCORRECTA! ingrese opcion valida\n";
				break;
		}

		menu();




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







// Funciones
void menu(void){
	for(int x=0;x<50;x++){cout<<"=";}
	cout << "\n\nEntregable final \nMenú Principal\n Elige opción:\n(u) ULAM\t\t(s) SERIE\n(c) Cálculo del sueldo\t(h) Horarios\n(e) Empleados\t\t(g) Empresa Ganancias\n(m) Meteorología\t(x) Estacionamiento\n(b) Habitantes de un barrio\t\t(q) Quitar \n>> opción?";

}



void checador(int noEmpleados){
	
	int x, h_entrada,h_salida, minExtraGlobales =0;
	float promedio; //todos flotan
	
	for(x=0; x<noEmpleados;x++){
		cout << "Ingrese horas de entrada y salida:\n";
		cin >> h_entrada >> h_salida;
		cout << "Tiempo trabajado por empleado "<< x+1 << ":\t" <<h_salida-h_entrada<< "\t" << "Min. extra:"<<h_salida-h_entrada-480 << "\n" ;		
		minExtraGlobales = minExtraGlobales + (h_salida - h_entrada-480);
		
		
	}

	cout << "Minutos Extra Globales" << minExtraGlobales;
}

void ganancias(int n){
	int x,acp1=0, acp2=0;
	float gananciasp1,gananciasp2;
	for(x=0; x<n;x++){
		cout << "Ingrese ganancias de pais 1 del anio " << x+1 << "\t";
		cin >> gananciasp1;
		cout << "Ingrese ganancias de pais 2 del anio " << x+1 << "\t";
		cin >> gananciasp2; 
		if(gananciasp1>gananciasp2) acp1++;
		else acp2++;
	}
	if (gananciasp1>gananciasp2) cout << "El pais 1 gano mas\n";
	else if( gananciasp1 == gananciasp2) cout << "\n\nRESULTADO===============\n   Los paises empataron\n";
	else cout << "El pais 2 gano";

}

