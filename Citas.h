#ifndef CITAS_H
#define CITAS_H
#include <iostream>
#include <cstdlib>
#include <list>
#include <fstream>
using namespace std;
#include "paciente.h"

class Citas: public Paciente{
	
	private:
		Paciente paciente_;
		string fecha_;
		string hora_inicio_;
		string hora_final_;
		string medico_;
		int consulta_;
	
	public:
		
		Citas(string nombre="",string apellidos="",int cod_postal=0,int telefono=0, string
		fecha_nacimiento="", string domicilio="", string seguro=""):Paciente(nombre,apellidos,cod_postal,
		telefono,fecha_nacimiento,domicilio,seguro){
			
			paciente_=paciente;
			fecha_=fecha;
			hora_inicio_=hora_inicio;
			hora_final_=hora_final;
			medico_=medico;
			consulta_=consulta;
			
}
		
		
		Consultar_paciente(string nombre,string apellidos);
		Consultar_dia(fecha);












}
#endif

