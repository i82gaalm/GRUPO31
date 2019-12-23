#include <iostream>
#include <string>
#include <cstdio>
#include "paciente.h"
using namespace std;

int main(){
	Paciente p("a","a");
	Cita c("a","a","a","a","a");
	Historial_Paciente h("a","a","a","a","a","a");

	int opcion=1;
	cout<<"Seleccione una opcion: \n"<<endl;
	cout<<"1. Anadir paciente \n"<<endl;
	cout<<"2. Anadir cita \n"<<endl;
	cout<<"3. Anadir historial \n"<<endl;
	cout<<"4. Consultar citas por dia \n"<<endl;
	cout<<"5. Consultar citas por nombre y apellidos \n"<<endl;
	cout<<"6. Consultar historial por nombre y apellidos"<<endl;
	cout<<"7. Consultar lista de pacientes \n"<<endl;
	cout<<"8. Consultar paciente por nombre y apellidos \n"<<endl;
	cout<<"9. Modificar cita \n"<<endl;
	cout<<"10. Modificar historial \n"<<endl;
	cout<<"11. Modificar paciente \n"<<endl;
	cout<<"12. Borrar cita \n"<<endl;
	cout<<"13. Borrar paciente \n"<<endl;
	cout<<"0. Salir \n"<<endl;

	cin>>opcion;
	while(opcion!=0){
		switch(opcion){
			case 1:{
				cout<<endl;
				p.anadirPaciente();
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;

			case 2:{
				cout<<endl;
				c.anadirCita();
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;

			case 3:{
				h.anadirHistorial();
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;

			case 4:{
				cout<<endl;
				string fecha;
				cout<<"Introduzca el dia de la cita"<<endl;
				cin>>fecha;
				c.Consultar_dia(fecha);
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;
			
			case 5:{
				cout<<endl;
				string nombre;
				string apellidos;
				cout<<"Introduzca el nombre del paciente"<<endl;
				cin>>nombre;
				cout<<"Introduzca los apellidos del paciente"<<endl;
				cin>>apellidos;
				c.Consultar_paciente(nombre,apellidos);
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;
			
			case 6:{
				cout<<endl;				
				string nombre;
				string apellidos;
				cout<<"Introduzca el nombre del paciente"<<endl;
				cin>>nombre;
				cout<<"Introduzca los apellidos del paciente"<<endl;
				cin>>apellidos;
				h.Consultar_historial(nombre,apellidos);
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;

			case 7:{				
				cout<<endl;
				p.Consultar_lista();
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;

			case 8:{	
				cout<<endl;
				string nombre;
				string apellidos;
				cout<<"Introduzca el nombre del paciente"<<endl;
				cin>>nombre;
				cout<<"Introduzca los apellidos del paciente"<<endl;
				cin>>apellidos;
				p.Consultar_datos(nombre,apellidos);
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;
			
			case 9:{
				cout<<endl;
				string fecha;
				cout<<"Introduce el dia de la cita  a modificar(dd/mm/aaaa)"<<endl;
				cin>>fecha;
				c.Modificar_cita(fecha);
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;
			
			case 10:{
				cout<<endl;
				string fecha;
				cout<<"Introduce el dia del registro de historial a modificar(dd/mm/aaaa)"<<endl;
				cin>>fecha;
				h.Modificar_historial(fecha);
				cout<<endl;
				cin.ignore();
				cin.get();
			}break;			
				
			case 11:{
				string nomap;
				cout<<"Introduce el nombre y apellidos del paciente a modificar"<<endl;
				cin.ignore();
      			getline(std::cin,nomap);
				p.Modificar_paciente(nomap);
				cout<<endl;
				cin.get();
				cin.ignore();
			}break;

			case 12:{
				string fecha;
				string hora;
				cout<<"Introduce el dia de la cita a borrar"<<endl;
				cin>>fecha;
				cout<<"Introduce la hora de inicio de la cita a borrar"<<endl;
				cin>>hora;
				c.borrarCitaPaciente(fecha,hora);
				cout<<"Cita eliminada"<<endl;
				cin.get();
				cin.ignore();
			}break;
					
			case 13:{
				string nombre;
				cout<<"Introduce el nombre o dni del paciente  a borrar"<<endl;
				cin>>nombre;
				p.borrarPaciente(nombre);
				cout<<"Paciente eliminado"<<endl;
				cin.get();
				cin.ignore();
			}break;
		
			default:{
				printf("Opcion Invalida\n");
			}break;
		}
	}
}	
		
		
		
		
	



