#include "paciente.h"
#include <list>

void Paciente::borrarPaciente(string s){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPaciente();
		for(i=aux.begin();i!=aux.end();i++){
				string d=getNombre()+" "+getApellidos();
				if(i->getDni()==s||d==s){
							aux.erase(i);
				}
				
				}

setPaciente(aux);

}
