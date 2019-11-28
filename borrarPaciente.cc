#include "paciente.h"
#include <list>
using namespace std;

void Paciente::borrarPaciente(string s){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPacientes();
		for(i=aux.begin();i!=aux.end();i++){
				string d=getNombre()+" "+getApellidos();
				if(i->getDni()==s||d==s){
							aux.erase(i);
				}
				
				}

setPacientes(aux);

}

