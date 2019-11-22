#include "paciente.h"
#include <list>

void Paciente::borrarPaciente(string dni_nomap){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPaciente();
		for(i=aux.begin();i!=aux.end();i++){
				string nomap=getNombre()+" "+getApellidos();
				if(i->getDni()==dni_nomap||nomap==dni_nomap){
							aux.erase(i);
				}
				
				}

setPaciente(aux);

}
