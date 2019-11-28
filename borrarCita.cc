#include "paciente.h"
#include <list>
using namespace std;

void Paciente::borrarCitaPaciente(string s,string p){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPacientes();
		for(i=aux.begin();i!=aux.end();i++){
				
				if((i->getFecha()==s)&&(i->getHora_Inicio()==p)){
							aux.erase(i);
				}
				
				}

setPacientes(aux);

}

