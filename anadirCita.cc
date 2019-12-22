#include paciente.h
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
#inlcude <cstdio>


void Citas::anadirCita(){

		string aux;
		list<Citas> lista;
		list<Citas>::iterator i;
		Cita c("");
		
	cout<<"Introduzca la fecha de la cita"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setFecha(aux);
	cout<<"Introduzca la hora de la cita"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setHora_inicio(aux);
	cout<<"Introduzca el medico de la consulta"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setMedico(aux);
	cout<<"Introduzca la consulta de la cita"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setConsulta(aux);
	
	}
	