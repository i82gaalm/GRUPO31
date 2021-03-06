***ESPECIFICACIÓN DE CLASES***


**1. Clase: Paciente**
 Esta clase contendrá las funciones relacionadas con la consulta de los datos del paciente, como consultar_datos y consultar_lista.

**Datos:**
  * Nombre(string): nombre del paciente.
  * Apellidos(string): apellido del paciente.
  * Código postal(int): código postal del paciente.
  * Fecha de nacimiento(int): fecha de nacimiento del paciente.
  * Domicilio(string): domicilio del paciente.
  * Seguro(string): seguro que posea el Paciente

**Métodos:**
  * Consultar_datos(): función que consulta los datos del paciente.
  * Consultar_lista(): función que consulta el número de pacientes que hay en la lista
  
  
 **2. Clase: Citas** 
 Esta clase contendrá la función consultar_dia y consultar_paciente.

**Datos:**
- Paciente(Paciente): datos (nombre, apellidos, código postal, número teléfono, fecha de nacimiento, domicilio, seguro) del paciente.
- Fecha(string): fecha de la cita.
- Hora Inicio/Final(string): hora de inicio/final de la cita.
- Médico(string): nombre del médico.
- Consulta(int): número de la consulta donde el paciente tiene la cita.

**Métodos:**

- Consultar_dia(): función que consulta el día de la cita.
- Consultar_paciente(): función que consulta el paciente que tiene la cita.


**3. Clase: Historial de paciente** 
 Esta clase no contiene ninguna función propia (ya que utiliza uha interfaz)
**Datos:**
- Síntomas(string): Síntomas del paciente.
- Diagnóstico(string): Diagnóstico del médico sobre la patología del paciente en función de los síntomas.
- Tratamientos(string): Tratamientos asignados por el médico para la cura de la patología.
- Fecha(string): Fecha exacta de la consulta.

**Métodos:**
- Ninguno (uso de interfaz)
