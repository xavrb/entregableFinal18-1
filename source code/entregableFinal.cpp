#include <iostream>
#include <string.h>
#define leng 50 // longitud para el problema 9
using namespace std;
// Funciones prototipos
void menu(void);
void checador(int); //prototipo de funcion de checador 

void ULAM (void);//prototipo de funcion ULAM
void SERIE(void);//prototipo de funcion de SERIE
void CALCULO_SUELDO(string,float, float);//prototipo de funcion SUELDO
int SUMA(int,int,int,int);
bool HORARIO_VERANO(short d, short m);
void TRABAJADORES(void);


//clases



class barrio{

	private: 
		int noHabitantes;
 		
	public:string nombreBarrio;
	
		barrio(){
			nombreBarrio="";
			noHabitantes= 0;
		}
		~barrio(){}
		void setNBName(string);
		void setNoHab(int);
		int searchByName(char *);
		int searchBylNameFather(char *);
		int searchBylNameMother(char *);
		int searchByAgeRange(int, int);
 

};

class habitante: public barrio{
	private:
		char name[leng], lnameFather[leng], lnameMother[leng];
      		int edad, id;
	  
	  public:
	      habitante(){
		 edad=0;
	      }
	      ~habitante(){}
		int setName();
 		int setlNameFather();		
		int setlNameMother();
		int setEdad();
	      void printInfo(int);
	      void search(int);
		int end();
	      
};



class empresa{
	private: 
		
	 

	public:string name;
		float ganancias;
		empresa(){// constructor
			string name="";
			ganancias=0.0;
		}
		~empresa(){} // destructor
		void printName();
		void setName(string);
 
		

};

class sat {
	private:
		string name;
		

	public: 
		
		sat(){
			name= "SAT";
		}
		~sat(){}
		void ganancias(empresa, empresa, int);
};


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
				ULAM();
				break;

			case 's':
			case 'S':
				cout << "\nOpción seleccionada: Serie \n";
				SERIE();
				break;
			
			case 'c':
			case 'C':{
			
					cout << "\nOpción seleccionada: Cálculo del sueldo \n";
					string nombre;
				   	float sdo_bruto  = 0.0;
				   	float descuentos = 0.0;
				   	bool jesus = true; // true = 1 , false =  0
				   	cout << "\nDar el nombre del empleado :";
				   	cin >> nombre;
				   	
				   	do
				   	{
					   	cout << "\nDar el Sueldo del empleado :";
					   	cin >> sdo_bruto;
						cout << "\nDar el descuento del empleado :";
					   	cin >> descuentos;
				  	 } while ( (sdo_bruto < 0.0) || (descuentos < 0) || (descuentos > sdo_bruto) );
					   
					   //SERGUNDO PADSO INVOCAR A LA FUNCION
					   CALCULO_SUELDO(nombre,sdo_bruto,descuentos);
				}
				break;
			case 'h':
			case 'H':{
				cout << "\nOpción seleccionada: Horarios \n";
				short dia = 0 , mes = 0 ; 
			   	bool resultado = false;
			   	do
			   	{
				   	cout << "\nDar el dia :";
				   	cin >> dia;
					cout << "\nDar el mes :";
				   	cin >> mes;
			   } while ( (dia < 1 || dia > 31) || (mes < 1 || mes > 12 ) );
				   
				   //SERGUNDO PADSO INVOCAR A LA FUNCION.
				   
				resultado = HORARIO_VERANO(dia,mes);
				  cout << "xxxxxxxxxxxxxxxxx" << resultado;
				if (resultado == true)
				   {  
			         cout << " \n\n SE HA TERMINADO EL HORARIO DE VERANO !!!!!";		
				   }
				else
				   {
				   	cout << " \n\n AUN SEGUIMOS CON EL HORARIO ANTERIOR, LASTIMA !!!!!";
				   }
				}
				break;
			case 'e':
			case 'E':
				cout << "\nOpción seleccionada: Empleados \n";
				TRABAJADORES();
				break;
			case 'g':
			case 'G':{
				int anios;
				empresa japon;
				japon.setName("Japon");
				empresa mexico;
				mexico.setName("Mexico");
				sat satmex;
				cout << "\nIngrese el número de años para calcular:\t";
				cin >> anios;
				satmex.ganancias(japon, mexico, anios);
				}
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
			case 'B':{
				int h;
				cout << "\nOpción seleccionada: Habitantes de un barrio \n";
				cout << "\nCreando barrio\n";
				barrio ecatepec;
				ecatepec.setNBName("Ecatepec");
				cout << "\nBarrio creado: " << ecatepec.nombreBarrio << "\n Ingrese numero de habitantes en "<< ecatepec.nombreBarrio << "\t";
				cin >> h;
				if(h>0){ ecatepec.setNoHab(h);
					
				}else{cout <<"No se pudo agregar habitantes al barrio.\n"; break;}
				habitante* habitantes = new habitante[h];
				int centinel = 0, hab=0;
				cout << "\nAgregando residentes\n";
				while(centinel != 1 && hab<h){

					cout << "Ingrese nombre de residente "<< hab<< "\n";
 					habitantes[hab].setName();
 					habitantes[hab].setlNameFather();
 					habitantes[hab].setlNameMother();
 					habitantes[hab].setEdad();
					if(habitantes[hab].end()){
						cout<< "Se terminó la carga de datos";
						centinel =1;
					}else{
					cout << "\nHabitante ingresado\n";
					habitantes[hab].printInfo(hab);}
					hab++;

				}


				}break;
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




void ULAM()
{
  system ("cls");
 system ("color 0b");	
  cout << "\n PROBLEMA : ULAM (A un numero dado mayor a 0 ";
  cout << "\n cada elemento de la serie se va obteniendo de la siguiente forma : ";
  cout << "\n si es par dividirlo entre dos y si es impar multiplicarlo por tres y sumarle 1; y terminará al llegar a 1 .";
  cout << "\n ejemplo: la serie de ULAM del número 5 es: 5, 16,8,4,2,1 .";
  int intNumero = 0 ; 
 
  do
 { 
    cout << "\n\n\n\n\n\nFavor de proporcionar un Numero Positivo : ";
    cin >> intNumero;
 	
 } while (intNumero < 1);

 cout << intNumero << ","; 
 while ( intNumero > 1)
 {
 	
 	if (intNumero % 2 == 0)
 	   {
 	     intNumero /= 2 ;	
 	   	
	   }
	else
	    {
		  intNumero = intNumero * 3 + 1;
		}	
 	
 	cout << intNumero << ",";
 }

 return ; 	
}
  
  
  
  
  
void SERIE()
{
 system ("cls");
 system ("color 0a");	
 cout << "\n PROBLEMA : Realizar una funcion para mostrar la serie (asi como se observa) :";
 cout << "\n\n\n 1/1  +  9/3  +  25/5  + 49/7  +  81/9  +  121/11  +  169/13.";
 cout << "\n\n\n\n\n\n Se inicia la serie en  : \n";
 
 
 
 
 int Alfa = 8000 ;
 
 cout << endl << endl << endl << endl << endl;
 
 for( Alfa = 1 ; Alfa <= 13 ; Alfa+=2)
   {
 
    	cout << (Alfa * Alfa) << "/" << Alfa ;
    	if (Alfa < 13)
    	{
		   cout <<" + ";
		}
    	else
    	{
    		cout <<".";
		}
    }	
  
  cout << "\n\n";	
 return;	
}





void CALCULO_SUELDO(string nombre, float sdo_bruto, float descuentos)
{
	system ("cls");
//system ("color 6a");
	float SUELDO_NETO =0;
	SUELDO_NETO = sdo_bruto - descuentos;
	
	cout << "\n EL Empleado : " << nombre;
	cout << "\n Tiene un Sueldo Bruto: $ " << sdo_bruto;
	cout << "\n y Descuentos de $ : " << descuentos;
	cout << "\n --------------------";
	cout << "\n SUELDO NETO $ " << SUELDO_NETO;
	cout << endl;
	system("cls");
	cout << "\n\n\n Voy a llamar a otra funcion de SUMA con valores constantes: ";
	cout << SUMA(10,500,100,1000);
	
	return ;
}

// FUNCION SUMA

 int SUMA(int n1, int n2, int n3, int n4)
 {
 	int SUMITA = 0 ; 
 	SUMITA = n1 + n2 + n3 + n4; 
 	return (  SUMITA )       ;
 	
 	
 }
 
 
 //FUNCION HORARIO VERANO 
 
 
  bool HORARIO_VERANO(short dia, short mes)
 {
 	if ( dia > 29 && mes > 10 ) 
	 {
	 	 	return (true ) ;
	  }
	  else
	  {
	  	 	return (false) ;
	   } 
 	
 	
 }
 
 
 
 void TRABAJADORES()
{
  float turno_cumplido_8_horas = 0 ; 
  float total_empleados = 0 ;
  short minutos_extras = 0 ;
  short minutos_entrada  = 0, minutos_salida = 0 ;
  float porciento = 0.0 ;
  float MINUTOS = 0; 
  
  do	
     {
     	cout << "\nFavor de capturar los minutos de entrada (terminar con un 0)  :";
     	cin >> minutos_entrada;
     	cout << "\nFavor de capturar los minutos de salida (terminar con un 0)  :";
     	cin >> minutos_salida;
     	MINUTOS = minutos_salida - minutos_entrada;
     	if (MINUTOS > (60 * 8))
           {
           	 minutos_extras = minutos_extras + (MINUTOS - (60 * 8));
	         turno_cumplido_8_horas ++;
	       
	  	   }     	
     	total_empleados++;
	 }	while(minutos_entrada != 0 || minutos_salida != 0);
	
	total_empleados--;

    //MOSTRAR LOS RESULTADOS
    cout << "\n\n\n\n total de empleados :" << total_empleados;
     cout << "\n total de turnos cumplidos :" << turno_cumplido_8_horas;
    
    porciento = (turno_cumplido_8_horas / total_empleados) * 100 ; 
    cout << "\n\n el " << porciento << " % cumpleieron con su turno de 8 horas." ; 
    cout << "\nse han hecho un total de " << minutos_extras << " minutos extras";
return ; 
}


// CLASES

void sat::ganancias(empresa a,empresa b, int n){
	int x,acp1=0, acp2=0;
 
	for(x=0; x<n;x++){
		cout << "Ingrese ganancias de "<< a.name <<" del anio " << x+1 << "\t";
		cin >> a.ganancias;
		cout << "Ingrese ganancias de "<< b.name <<" del anio " << x+1 << "\t";
		cin >> b.ganancias; 
		if(a.ganancias>b.ganancias) acp1++;
		else acp2++;
	}
	if (a.ganancias>b.ganancias) cout <<"\n\nRESULTADO===============\n"<< a.name <<" gano mas\n";
	else if( a.ganancias == b.ganancias) cout << "\n\nRESULTADO===============\n   Los paises empataron\n";
	else cout <<"\n\nRESULTADO===============\n"<< b.name << " gano";

}



void empresa::printName(){
	cout << name;
}

void empresa::setName(string n){
	name=n;

}




// BARRIO
void  barrio::setNBName(string n){
	nombreBarrio = n;

}


void barrio::setNoHab(int x){
	noHabitantes = x;
	cout << "Habitantes actuales en " << nombreBarrio<< ": \t"<< noHabitantes;

}

// habitante




void habitante::printInfo(int id){
	cout << "Datos de habitante "<< id<< ":";
	cout << "\nNombre: "<< name;
	cout << "\nApellido paterno: "<< lnameFather;
	cout << "\nApellido materno: "<< lnameMother;
	cout << "\nEdad: "<< edad<<"\n\n";
}


int habitante::setName(){
	cout << "Ingrese nombre\t";
	cin >> name;
	return 0;
}

int habitante::setlNameFather(){
	cout << "Ingrese Apellido paterno\t";
	cin >> lnameFather;
	return 0;
}
int habitante::setlNameMother(){
	cout << "Ingrese Apellido materno\t";
	cin >> lnameMother;
	return 0;
}
int habitante::setEdad(){
	cout << "Ingrese edad\t";
	cin >> edad;
	return 0;
}

int habitante::end(){
	if(!strcmp(name,"X") && !strcmp(lnameFather, "X") && !strcmp(lnameMother, "X") && edad==-1){ cout <<"CENTINELA!";return 1;}
	else{ return 0;}
}


