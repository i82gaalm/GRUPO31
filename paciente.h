
#ifndef PACIENTE_H
#define PACIENTE_H
using namespace std;
#include <cstdlib>
#include <list>
#include <iostream>
#include <fstream>




class Paciente{

private:
		string nombre_;
		string apellidos_;
		int cod_postal_;
		int telefono_;
		string fecha_nacimiento_;
		string domicilio_;
		string seguro_;

public:
		Paciente(string nombre="",string apellidos="",int cod_postal=0,int telefono=0, string
		fecha_nacimiento="", string domicilio="", string seguro=""){
	    
	    nombre_=nombre;
	    apellidos_=apellidos;
	    cod_postal_=cod_postal;
	    telefono_=telefono;
	    fecha_nacimiento_=fecha_nacimiento;
	    domicilio_=domicilio;
	    seguro_=seguro;
	    
	
	
	
	}
		Consultar_datos(string nombre,string apellidos);
		Consultar_lista();


}

#endif
