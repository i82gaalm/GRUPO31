#include paciente.h
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
#inlcude <cstdio>


void Paciente::anadirPaciente(){
	string aux;
	list<Paciente> lista;
	list<Paciente>::iterator i;
	Paciente p("");
	cout<<"Introduzca el DNI del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setDNI(aux);
	cout<<"Introduzca el nombre del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setNombre(aux);
	cout<<"Introduzca los apellidos del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setApellidos(aux);
	cout<<"Introduzca el codigo postal del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setCod_postal(aux);
	cout<<"Introduzca el telefono del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setTelefono(aux);
	cout<<"Introduzca la fecha de nacimiento del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setFecha_nacimiento(aux);
	cout<<"Introduzca el domicilio del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setDomicilio(aux);
	cout<<"Introduzca el seguro del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setSeguro(aux);
	lista.push_back(p);
	}
	
		
		


