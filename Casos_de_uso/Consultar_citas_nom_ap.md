## Consultar las citas de un paciente por nombre y apellido

**ID**: 09
**Descripción**: Se introduce el nombre y apellidos del paciente y el sistema muestra sus citas.

**Actores principales**: Secretario
**Actores secundarios**: Paciente

**Precondiciones**:
* El paciente debe existir

**Flujo principal**:
1. El administrador desea consultar las citas de un paciente
2. El administrador abre el cuadro de diálogo de búsqueda en el menú principal
3. El administrador introduce el nombre y apellidos del paciente
4. El sistema muestra por pantalla las citas del paciente

**Postcondiciones**:

* Se muestran al administrador las distintas citas del paciente con su respectivos datos: Fecha, Hora Inicia/Final, Médico y Consulta

**Flujos alternativos**:

4.a. Si no existe el paciente, se muestra un mensaje de error
