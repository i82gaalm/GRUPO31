#include "paciente.h"
//Comprobar que está en la lista de pacientes!!!!!!!!
Paciente::Consultar_datos(string nombre,string apellidos){
	int aux=1;
	for(list<Paciente>::iterator it=pacientes_.begin() ; it!=pacientes_.end(); it++){
    	if (it.getNombre()==nombre && it.getApellidos()==apellidos)
    	{
    		aux=0;
    		printf("Datos: \n");
			string nomap=getNombre()+" "+getApellidos();
			printf("Nombre y Apellidos: %s\n", nomap);
			printf("Código Postal: %d\n", getCodigoPostal());
			printf("Teléfono: %d\n", getTelefono());
			printf("Fecha de Naciminento: %s\n", getNaciminento());
			printf("Domicilio: %s\n", getDomicilio());
			printf("Seguro: %s\n", getSeguro());		
    	}
  	}
  	if(aux==1){printf("El paciente introducido no se encuentra registrado en el sistema";}
}

Paciente::Consultar_lista(list<Paciente> lista){
  string nomap;
  for(list<Paciente>::iterator it=lista.begin() ; it!=lista.end(); it++){
    nomap=getNombre()+" "+getApellidos();
    printf("|Nombre y Apellidos: %s | Teléfono: %d | Domicilio: %s | Seguro: %s |\n", nomap, it.getTelefono(), it.getDomicilio(), it.getSeguro());
  }
}

Cita::Consultar_paciente(string nombre, string apellidos){
	int aux=1;
	for(list<Cita>::iterator it=citas_.begin() ; it!=citas_.end(); it++){
    	if (it.getNombre()==nombre && it.getApellidos()==apellidos)
    	{
    		aux=0;
    		printf("|Fecha: %s | Hora inicial: %s | Hora final: %s | Médico: %s | Consulta: %d |\n", it.getFecha(), it.getInicio(), it.getFinal(), it.getMedico(), it.getConsulta());
    	}
  	}
  	if(aux==1){printf("El paciente introducido no se encuentra registrado en el sistema\n";}
}

Cita::Consultar_dia(string fecha){
	printf("Citas del día: \n");
	int aux=1;
	for(list<Cita>::iterator it=citas_.begin() ; it!=citas_.end(); it++){
    	if (fecha==it.getFecha())
    	{
    		aux=0;
    		printf("|Fecha: %s | Hora inicial: %s | Hora final: %s | Médico: %s | Consulta: %d |\n", it.getFecha(), it.getInicio(), it.getFinal(), it.getMedico(), it.getConsulta());
    	}
  	}
  	if(aux==1){printf("No hay citas registradas\n";}
}

Historial_Paciente::Consultar_historial(string nombre, string apellidos){
	int c=1;
	int a;
	for(list<Historial_Paciente>::iterator it=historial_.begin() ; it!=historial_.end(); it++){
    	if (it.getNombre()==nombre && it.getApellidos()==apellidos)
    	{
    		printf("Registro %d: \n", c);
    		printf("Sintomas: %s\n", it.getSintomas());
			printf("Diagnostico: %d\n", it.getDiagnostico());
			for (int i = 0; i < (it->getTratamientos().size()); ++i)
			{
				a=i+1;
				printf("Tratamiento %d: %s\n", a, it->getTratamientos()[i]);	
			}
			printf("Fecha: %s\n", it.getFecha());
			c++;
    	}
  	}
  	if(c==1){printf("El paciente introducido no se encuentra registrado en el sistema\n";}
}

void Cita::borrarCitaPaciente(string s,string p){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getCitas();
		for(i=aux.begin();i!=aux.end();i++){
				
				if((i->getFecha()==s)&&(i->getInicio()==p)){
							aux.erase(i);
				}
				
				}

setCitas(aux);

}

void Paciente::borrarPaciente(string s){
	
	list<Paciente> aux;
	list<Paciente>::iterator i;
	aux=getPacientes();
		for(i=aux.begin();i!=aux.end();i++){
				string d=getNombre()+" "+getApellidos();
				if(i->getDNI()==s||d==s){
							aux.erase(i);
				}
				
				}

setPacientes(aux);

}
