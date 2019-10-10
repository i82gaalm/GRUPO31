## Consultar el historial de un paciente por nombre y apellido

**ID**: 13
**Descripción**: Se introduce el nombre y apellidos del paciente y el sistema muestra su historial.

**Actores principales**: Administrador
**Actores secundarios**: Paciente

**Precondiciones**:
* Ninguna

**Flujo principal**:
1. El administrador desea consultar el historial de un paciente
2. El administrador abre el cuadro de diálogo de búsqueda en el menú principal
3. El administrador introduce el nombre y apellidos del paciente
4. El sistema muestra por pantalla el historial del paciente

**Postcondiciones**:

* Se muestran al administrador el historial del paciente con su respectivos datos: Síntomas, Diagnóstico, Tratamientos y Fecha

**Flujos alternativos**:

4.a. Si no existe el paciente, se muestra un mensaje de error
