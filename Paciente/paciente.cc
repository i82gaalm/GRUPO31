#include "paciente.h"
//Comprobar que está en la lista de pacientes!!!!!!!!
Paciente::Consultar_datos(string nombre,string apellidos){
  printf("Datos: \n");
  string nomap=getNombre()+" "+getApellidos();
  printf("Nombre y Apellidos: %s\n", nomap);
  printf("Código Postal: %d\n", getCodigoPostal());
  printf("Teléfono: %d\n", getTelefono());
  printf("Fecha de Naciminento: %s\n", getNaciminento());
  printf("Domicilio: %s\n", getDomicilio());
  printf("Seguro: %s\n", getSeguro());
}

Paciente::Consultar_lista(list<Paciente> lista){
  string nomap;
  for(list<Paciente>::iterator it=lista.begin() ; it!=lista.end(); it++){
    nomap=getNombre()+" "+getApellidos();
    printf("|Nombre y Apellidos: %s | Teléfono: %d | Domicilio: %s | Seguro: %s |\n", nomap, getTelefono(), getDomicilio(), getSeguro();
  }
}

Citas::Consultar_paciente(string nombre, string apellidos){

}

Citas::Consultar_dia(string fecha){

}

Historial_Paciente::Consultar(string nombre, string apellidos){

}

