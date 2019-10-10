## Consultar datos de un paciente por nombre y apellido

**ID**: 04
**Descripción**: Se introduce el nombre y apellidos del paciente a consultar y el sistema lo muestra.

**Actores principales**: Administrador
**Actores secundarios**: Paciente

**Precondiciones**:
* Ninguna

**Flujo principal**:
1. El administrador desea consultar los datos de un paciente
2. El administrador abre el cuadro de diálogo de búsqueda en el menú principal
3. El administrador introduce el nombre y apellidos del paciente
4. El sistema muestra por pantalla los datos del paciente

**Postcondiciones**:

* Se muestran al administrador los distintos datos del paciente: Nombre, Apellidos, Código Postal, Nº Teléfono, Fecha de Nacimiento, Domicilio y Seguro

**Flujos alternativos**:

4.a. Si no existe el paciente, se muestra un mensaje de error
