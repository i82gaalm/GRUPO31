
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

class Citas: public Paciente{

	private:
		//Paciente paciente_;
		string fecha_;
		string hora_inicio_;
		string hora_final_;
		string medico_;
		int consulta_;

	public:

			Citas(string nombre="",string apellidos="",int cod_postal=0,int telefono=0, string fecha_nacimiento="", string domicilio="", string seguro="") :
				Paciente(nombre,apellidos,cod_postal,telefono,fecha_nacimiento,domicilio,seguro){
			//paciente_=paciente;
			fecha_=fecha;
			hora_inicio_=hora_inicio;
			hora_final_=hora_final;
			medico_=medico;
			consulta_=consulta;
			}

		Consultar_paciente(string nombre, string apellidos);
		Consultar_dia(fecha);
}

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

	Consultar(string nombre, string apellidos);
}

#endif
