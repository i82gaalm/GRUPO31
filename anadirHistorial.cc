#include paciente.h
#include <iostream>
#include <list>
#include <string>
#include <cstdlib>
#inlcude <cstdio>

void Historial_Paciente::anadirHistorial(){
		string aux;
		list<HistoriaL_Paciente> lista;
		list<Historial_Paciente>::iterator i;
		Historial h("");
		
cout<<"Introduzca los sintomas del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setSintomas(aux);
cout<<"Introduzca el diagnostico del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setDiagnostico(aux);
cout<<"Introduzca los tratamientos del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setTratamientos(aux);
cout<<"Introduzca la fecha"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setFecha(aux);
	
	}