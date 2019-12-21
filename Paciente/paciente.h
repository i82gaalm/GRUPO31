
#ifndef PACIENTE_H
#define PACIENTE_H
#include <cstdlib>
#include <list>
#include <iostream>
#include <fstream>
using namespace std;

class Paciente{

private:
		string nombre_;
		string apellidos_;
		string dni_
		int cod_postal_;
		int telefono_;
		string fecha_nacimiento_;
		string domicilio_;
		string seguro_;
		list<Paciente> pacientes_;

public:
		Paciente(string nombre,string apellidos,int cod_postal=0,int telefono=0, string fecha_nacimiento="", string domicilio, string seguro){

	    nombre_=nombre;
	    apellidos_=apellidos;
	    cod_postal_=cod_postal;
	    telefono_=telefono;
	    fecha_nacimiento_=fecha_nacimiento;
	    domicilio_=domicilio;
	    seguro_=seguro;
	}
		void Consultar_datos(string nombre,string apellidos);
		void Consultar_lista(list<Paciente> lista);
		void borrarPaciente(string s);

		inline void setNombre(string nombre){nombre_=nombre;}
		inline string getNombre(){return nombre_;}

		inline void setApellidos(string apellidos){apelllidos_=apellidos;}
		inline string getApellidos(){return apellidos_;}

		inline void setDNI(string dni){dni_=dni;}
		inline string getDNI(){return dni_;}

		inline void setCodigoPostal(string cod_postal){cod_postal_=cod_postal;}
		inline int getCodigoPostal(){return cod_postal_;}

		inline void setTelefono(string telefono){telefono_=telefono;}
		inline int getTelefono(){return telefono_;}

		inline void setNacimiento(string fecha_nacimiento){fecha_nacimiento_=fecha_nacimiento;}
		inline string getNacimiento(){return fecha_nacimiento_;}

		inline void setDomicilio(string domicilio){domicilio_=domicilio;}
		inline string getDomicilio(){return domicilio_;}

		inline void setSeguro(string seguro){seguro_=seguro;}
		inline string getSeguro(){return segurouro_;}

		inline void setPacientes(list<Paciente> pacientes){pacientes_=pacientes;}
		inline list<Paciente> getPacientes(){return pacientes_;}




};

class Cita: public Paciente{

	private:
		//Paciente paciente_;
		string fecha_;
		string hora_inicio_;
		string hora_final_;
		string medico_;
		int consulta_;
		list<Cita> citas_

	public:

			Cita(string nombre,string apellidos,string fecha, string hora_inicio, string hora_final, string medico="",  int consulta=0, int cod_postal=0,int telefono=0, string fecha_nacimiento="", string domicilio="", string seguro="") :
				Paciente(nombre,apellidos,cod_postal,telefono,fecha_nacimiento,domicilio,seguro){
			//paciente_=paciente;
			fecha_=fecha;
			hora_inicio_=hora_inicio;
			hora_final_=hora_final;
			medico_=medico;
			consulta_=consulta;
			}

		void Consultar_paciente(string nombre, string apellidos);
		void Consultar_dia(fecha);
		void borrarCitaPaciente(string s,string p);

		inline void setFecha(string fecha){fecha_=fecha;}
		inline string getFecha(){return fecha_;}

		inline void setInicio(string hora_inicio){hora_inicio_=hora_inicio;}
		inline string getInicio(){return hora_inicio_;}

		inline void setFinal(string hora_final){hora_final_=hora_final;}
		inline string getFinal(){return hora_final_;}

		inline void setMedico(string medico){medico_=medico;}
		inline string getMedico(){return medico_;}

		inline void setConsulta(string consulta){consulta_=consulta;}
		inline int getConsulta(){return consulta_;}

		inline void setCitas(list<Cita> citas){citas_=citas;}
		inline list<Cita> getCitas(){return citas_;}

};

class Historial_Paciente: public Paciente{
private:

	string sintomas_;
	string diagnostico_;
	string tratamientos_[];
	string fecha_;
	list<Historial_Paciente> historial_;

public:

	void Historial_Paciente(string nombre,string apellidos, string sintomas, string diagnostico, string tratamientos, string fecha,int cod_postal=0,int telefono=0, string fecha_nacimiento="", string domicilio="", string seguro=""):
		Paciente(nombre,apellidos,cod_postal,telefono,fecha_nacimiento,domicilio,seguro){
		sintomas_=sintomas;
		diagnostico_=diagnostico;
		tratamientos_=tratamientos;
		fecha_=fecha;
		}

	void Consultar_historial(string nombre, string apellidos);

	inline void setSintomas(string sintomas){sintomas_=sintomas;}
	inline string getSintomas(){return sintomas_;}

	inline void setDiagnostico(string diagnostico){diagnostico_=diagnostico;}
	inline string getDiagnostico(){return diagnostico_;}

	inline void setTratamientos(string tratamientos[]){tratamientos_=tratamientos;}
	inline string getTratamientos(){return tratamientos_;}

	inline void setFecha(string  fecha){fecha_= fecha;}
	inline string getFecha(){return fecha_;}
};

#endif
