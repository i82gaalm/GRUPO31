#ifndef HISTORIAL_PACIENTE_H
#define HISTORIAL_PACIENTE_H
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>
using namespace std;
#include "paciente.h"

class Historial_Paciente: public Paciente{
private:
	
	string sintomas_;
	string diagnostico_;
	string tratamientos_;
	string fecha_;

	


public:
	
	Historial_Paciente(string nombre="",string apellidos="",int cod_postal=0,int telefono=0, string
		fecha_nacimiento="", string domicilio="", string seguro=""):Paciente(nombre,apellidos,cod_postal,
		telefono,fecha_nacimiento,domicilio,seguro){
		
		
		sintomas_=sintomas;
		diagnostico_=diagnostico;
		tratamientos_=tratamientos;
		fecha_=fecha;
		
		}
	

	
	Consultar(string nombre,string apellidos);
	







}
#endif
