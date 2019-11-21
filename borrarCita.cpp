#include "paciente.h"
#include <list>

void Paciente::borrarPaciente(string s,string p){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPaciente();
		for(i=aux.begin();i!=aux.end();i++){
				
				if((i->getFecha()==s)&&(i->getHora_Inicio())){
							aux.erase(i);
				}
				
				}

setPaciente(aux);

}
