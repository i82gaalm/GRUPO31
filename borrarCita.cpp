#include "paciente.h"
#include <list>

void Paciente::borrarPaciente(string fecha,string hora_inicio){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPaciente();
		for(i=aux.begin();i!=aux.end();i++){
				
				if((i->getFecha()==fecha)&&(i->getHora_Inicio()==hora_inicio)){
							aux.erase(i);
				}
				
				}

setPaciente(aux);

}
