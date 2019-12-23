#include "paciente.h"
//Comprobar que está en la lista de pacientes!!!!!!!!
void Paciente::Consultar_datos(string nombre,string apellidos){
	int aux=1;
	for(list<Paciente>::iterator it=pacientes_.begin() ; it!=pacientes_.end(); it++){
    	if (it.getNombre()==nombre && it.getApellidos()==apellidos)
    	{
    		aux=0;
    		printf("Datos: \n");
			string nomap=it->getNombre()+" "+it->getApellidos();
			printf("Nombre y Apellidos: %s\n", nomap);
			printf("Código Postal: %d\n", getCodigoPostal());
			printf("Teléfono: %d\n", getTelefono());
			printf("Fecha de Naciminento: %s\n", getNaciminento());
			printf("Domicilio: %s\n", getDomicilio());
			printf("Seguro: %s\n", getSeguro());		
    	}
  	}
  	if(aux==1){printf("El paciente introducido no se encuentra registrado en el sistema";)}
}

void Paciente::Consultar_lista(list<Paciente> lista){
  string nomap;
  for(list<Paciente>::iterator it=lista.begin() ; it!=lista.end(); it++){
    nomap=it->getNombre()+" "+it->getApellidos();
    printf("|Nombre y Apellidos: %s | Teléfono: %d | Domicilio: %s | Seguro: %s |\n", nomap, it.getTelefono(), it.getDomicilio(), it.getSeguro());
  }
}

void Cita::Consultar_paciente(string nombre, string apellidos){
	int aux=1;
	for(list<Cita>::iterator it=citas_.begin() ; it!=citas_.end(); it++){
    	if (it.getNombre()==nombre && it.getApellidos()==apellidos)
    	{
    		aux=0;
    		printf("|Fecha: %s | Hora inicial: %s | Hora final: %s | Médico: %s | Consulta: %d |\n", it.getFecha(), it.getInicio(), it.getFinal(), it.getMedico(), it.getConsulta());
    	}
  	}
  	if(aux==1){printf("El paciente introducido no se encuentra registrado en el sistema\n";)}
}

void Cita::Consultar_dia(string fecha){
	printf("Citas del día: \n");
	int aux=1;
	for(list<Cita>::iterator it=citas_.begin() ; it!=citas_.end(); it++){
    	if (fecha==it.getFecha())
    	{
    		aux=0;
    		printf("|Fecha: %s | Hora inicial: %s | Hora final: %s | Médico: %s | Consulta: %d |\n", it.getFecha(), it.getInicio(), it.getFinal(), it.getMedico(), it.getConsulta());
    	}
  	}
  	if(aux==1){printf("No hay citas registradas\n";)}
}

void Historial_Paciente::Consultar_historial(string nombre, string apellidos){
	int c=1;
	int a;
	for(list<Historial_Paciente>::iterator it=historial_.begin() ; it!=historial_.end(); it++){
    	if (it.getNombre()==nombre && it.getApellidos()==apellidos)
    	{
    		printf("Registro %d: \n", c);
    		printf("Sintomas: %s\n", it.getSintomas());
			printf("Diagnostico: %d\n", it.getDiagnostico());
			printf("Tratamiento: %s\n", it->getTratamiento()[i]);	
			printf("Fecha: %s\n", it.getFecha());
			c++;
    	}
  	}
  	if(c==1){
  		printf("El paciente introducido no se encuentra registrado en el sistema\n";)
  	}
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

void Cita::Modificar_cita(string s){
  list <Cita>::iterator it;
  list <Cita> aux;
  Cita a("");
  int opcionmenu=0;
  string opcion="s";
  string modificado;
  string med, hora;
  int entero;
  aux=getCitas();
  Consultar_dia(s);
  printf("Selecciona una medico y una hora de inicio\n");
  printf("Medico: ");
  cin.ignore();
  getline(std::cin,med);
  printf("Hora de Inicio: ");
  cin.ignore();
  getline(std::cin,hora);
  for(it=aux.begin();it!=aux.end();it++){
    if(it->getFecha()==s && it->getInicio()==hora && it->getMedico()==med){
      a=*it;
      aux.erase(it);
    }
  }
  while(opcion!="n"||opcion!="N"){
    cout << "Seleccione parametro a cambiar" << '\n';
    cout << "1.- Fecha" << '\n';
    cout << "2.- Hora de Inicio" << '\n';
    cout << "3.- Hora Final" << '\n';
    cout << "4.- Medico" << '\n';
    cout << "5.- Consulta" << '\n';
    cin.ignore();
    cin >> opcionmenu;
    switch (opcionmenu) {
      case 1:
      cout << "Introduzca la fecha" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setFecha(modificado);
      break;
      case 2:
      cout << "Introduzca la hora de inicio" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setInicio(modificado);
      break;
      case 3:
      cout << "Introduzca la hora final" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setFinal(modificado);
      break;
      case 4:
      cout << "Introduzca el medico" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setMedico(modificado);
      break;
      case 5:
      cout << "Introduzca la Consulta" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      a.setConsulta(entero);
      break;
    }
    cout << "¿Desea cambiar otro dato?" << '\n';
    cout << "Si: pulse cualquier tecla" << '\n';
    cout << "No: pulse n" << '\n';
    cin.ignore();
    cin >> opcion;
    }
    aux.push_back(a);
    setCitas(aux);
}

void Historial_Paciente::Modificar_historial(string s){
  list <Historial_Paciente>::iterator it;
  list <Historial_Paciente> aux;
  Historial_Paciente a("");
  int opcionmenu=0;
  string opcion="s";
  string modificado;
  int entero;
  aux=getHistorial();

  for(it=aux.begin();it!=aux.end();it++){
    if(it->getFecha()==s){
      a=*it;
      aux.erase(it);
    }
  }
  while(opcion!="n"||opcion!="N"){
    cout << "Seleccione parametro a cambiar" << '\n';
    cout << "1.- Sintomas" << '\n';
    cout << "2.- Diagnostico" << '\n';
    cout << "3.- Tratamiento" << '\n';
    cout << "4.- Fecha" << '\n';
    cin.ignore();
    cin >> opcionmenu;
    switch (opcionmenu) {
      case 1:
      cout << "Introduzca el sintoma" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setSintoma(modificado);
      break;
      case 2:
      cout << "Introduzca el diagnotico" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setDiagnostico(modificado);
      break;
      case 3:
      cout << "Introduzca el tratamiento" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setTratamiento(modificado);
      break;
      case 4:
      cout << "Introduzca la fecha" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setFecha(modificado);
      break;
    }
    cout << "¿Desea cambiar otro dato?" << '\n';
    cout << "Si: pulse cualquier tecla" << '\n';
    cout << "No: pulse n" << '\n';
    cin.ignore();
    cin >> opcion;
    }
    aux.push_back(a);
    setHistorial(aux);
}

void Paciente::Modificar_paciente(string s){
  list <Historial_Paciente>::iterator it;
  list <Historial_Paciente> aux;
  Historial_Paciente a("");
  int opcionmenu=0;
  string opcion="s";
  string modificado;
  int entero;
  aux=getPacientes();
  string nomap;
  for(it=aux.begin();it!=aux.end();it++){
    nomap=it->getNombre()+" "+it->getApellidos();
    if(nomap==s){
      a=*it;
      aux.erase(it);
    }
  while(opcion!="n"||opcion!="N"){
    cout << "Seleccione parametro a cambiar" << '\n';
    cout << "1.- DNI" << '\n';
    cout << "2.- Nombre" << '\n';
    cout << "3.- Apellidos" << '\n';
    cout << "4.- Telefono" << '\n';
    cout << "5.- Codigo Postal" << '\n';
    cout << "6.- Fecha de nacimiento" << '\n';
    cout << "7.- Domicilio" << '\n';
    cout << "8.- Seguro" << '\n';
    cin.ignore();
    cin >> opcionmenu;
    switch (opcionmenu) {
      case 1:
      cout << "Introduzca el DNI" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setDNI(modificado);
      break;
      case 2:
      cout << "Introduzca el nombre" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setNombre(modificado);
      break;
      case 3:
      cout << "Introduzca los apellidos" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setApellidos(modificado);
      break;
      case 4:
      cout << "Introduzca el telefono" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      a.setTelefono(entero);
      break;
      case 5:
      cout << "Introduzca el codigo postal" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      a.setCodigoPostal(entero);
      break;
      case 6:
      cout << "Introduzca la fecha de nacimiento(formato dd/mm/aaaa)" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setNacimiento(modificado);
      break;
      case 7:
      cout << "Introduzca el domcilio" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      a.setDomicilio(modificado);
      break;
      case 8:
      cout << "Introduzca el seguro" << '\n';
      cin.ignore();
      getline(std::cin,modificado);
      entero=atoi(modificado.c_str());
      a.setSeguro(entero);
      break;
    }
    cout << "¿Desea cambiar otro dato?" << '\n';
    cout << "Si: pulse cualquier tecla" << '\n';
    cout << "No: pulse n" << '\n';
    cin.ignore();
    cin >> opcion;
    }
    aux.push_back(a);
    setPacientes(aux);
}
void Citas::anadirCita(){

		string aux;
		list<Citas> lista;
		list<Citas>::iterator i;
		Cita c("");
		
	cout<<"Introduzca la fecha de la cita"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setFecha(aux);
	cout<<"Introduzca la hora de la cita"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setHora_inicio(aux);
	cout<<"Introduzca el medico de la consulta"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setMedico(aux);
	cout<<"Introduzca la consulta de la cita"<< '\n';
	cin.ignore();
	cin>>aux;
	c.setConsulta(aux);
	citas_.push_back(c);
	}
void Historial_Paciente::anadirHistorial(){
		string aux;
		list<Historial_Paciente> lista;
		list<Historial_Paciente>::iterator i;
		Historial h("");
		
cout<<"Introduzca los sintomas del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setSintomas(aux);
cout<<"Introduzca el diagnostico del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setDiagnostico(aux);
cout<<"Introduzca los tratamientos del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setTratamientos(aux);
cout<<"Introduzca la fecha"<< '\n';
	cin.ignore();
	cin>>aux;
	h.setFecha(aux);
	historial_.push_back(h);
	}
void Paciente::anadirPaciente(){
	string aux;
	list<Paciente> lista;
	list<Paciente>::iterator i;
	Paciente p("");
	cout<<"Introduzca el DNI del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setDNI(aux);
	cout<<"Introduzca el nombre del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setNombre(aux);
	cout<<"Introduzca los apellidos del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setApellidos(aux);
	cout<<"Introduzca el codigo postal del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setCod_postal(aux);
	cout<<"Introduzca el telefono del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setTelefono(aux);
	cout<<"Introduzca la fecha de nacimiento del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setFecha_nacimiento(aux);
	cout<<"Introduzca el domicilio del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setDomicilio(aux);
	cout<<"Introduzca el seguro del paciente"<< '\n';
	cin.ignore();
	cin>>aux;
	p.setSeguro(aux);
	pacientes_.push_back(p);
	}
