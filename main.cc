#include <iostream>
#include <string>
#include <cstdio>
#include "paciente.h"


int main() {
int opcion=0;
Paciente paciente[10];
Cita cita[10];
Historial histor[10];
int historial=0;



switch(opcion){

cout<<"Seleccione una opcion"<<endl;
cout<<"1.Anadir paciente"<<endl;
cout<<"2.Anadir cita"<<endl;
cout<<"3.Anadir historial"<<endl;
cout<<"4.Consultar cita por dia"<<endl;
cout<<"5.Consultar cita por nombre y apellidos"<<endl;
cout<<"6.Consultar historial por nombre y apellidos"<<endl;
cout<<"7.Consultar lista de pacientes"<<endl;
cout<<"8.Consultar paciente por nombre y apellidos"<<endl;
cout<<"9.Modificar cita"<<endl;
cout<<"10.Modificar historial"<<endl;
cout<<"11.Modificar paciente"<<endl;
cout<<"12.Borrar cita"<<endl;
cout<<"13.Borrar paciente"<<endl;
cin>>opcion;
switch(opcion){

case 1:{
	 paciente[historial]=anadirPaciente();
	 cout<<endl;
	 historial++;	
	 cout<<endl;
	 cin.ignore();
	 cin.get()
	 }break;
case 2:{
	 cita[historial]=anadirCita();
	 cout<<endl;
	 historial++;	
	 cout<<endl;
	 cin.ignore();
	 cin.get()
	 }break;
case 3:{
	 histor[historial]=anadirHistorial();
	 cout<<endl;
	 historial++;	
	 cout<<endl;
	 cin.ignore();
	 cin.get()
	 }break;

case 4:{
	
	cout<<endl;
	
	string fecha;
	
		cout<<"Introduzca el dia de la cita"<<endl;
		cin>>fecha;
		Consultar_dia(fecha);
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
		Consultar_paciente(nombre,apellidos);
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
		Consultar_historial(nombre,apellidos);
		cout<<endl;
		cin.ignore();
		cin.get();
		}break;


case 7:{
	
	cout<<endl;
	
	list<Paciente>lista;

		
		Consultar_lista(lista);
		cout<<endl;
		cin.ignore();
		cin.get();
case 8:{
	
	cout<<endl;
	
	string nombre;
	string apellidos;
	
		cout<<"Introduzca el nombre del paciente"<<endl;
		cin>>nombre;
		cout<<"Introduzca los apellidos del paciente"<<endl;
		cin>>apellidos;
		Consultar_datos(nombre,apellidos);
		cout<<endl;
		cin.ignore();
		cin.get();
		}break;
case 9:{
		string fecha;
		cout<<"Introduce el dia de la cita  a modificar"<<endl;
		cin>>fecha;
		cita[historial]=anadirCita();
		cout<<"Cita editada"<<endl;
		cin.get();
		cin.ignore();
		}break;
case 10:{
		int dni;
		cout<<"Introduce el dni del paciente"<<endl;
		cin>>dni;
		histor[historial]=anadirHistorial();
		cout<<"Historial editado"<<endl;
		cin.get();
		cin.ignore();
		}break;
		
		
case 11:{
		int dni;
		cout<<"Introduce el dni del paciente a modificar"<<endl;
		cin>>dni;
		paciente[historial]=anadirPaciente();
		cout<<"Paciente editado"<<endl;
		cin.get();
		cin.ignore();
		}break;

case 12:{
		string fecha;
		string hora;
		cout<<"Introduce el dia de la cita a borrar"<<endl;
		cin>>fecha;
		cout<<"Introduce la hora de la cita a borrar"<<endl;
		cin>>hora;
		borrarCitaPaciente(fecha,hora);
		historial--;
		cout<<"Cita eliminada"<<endl;
		cin.get();
		cin.ignore();
		}break;
		
case 13:{
		string nombre;
		cout<<"Introduce el nombre del paciente  a borrar"<<endl;
		cin>>nombre;
		borrarPaciente(nombre);
		historial--;
		cout<<"Paciente eliminado"<<endl;
		cin.get();
		cin.ignore();
		}break;

}
}

		
		
		
		
		
	



