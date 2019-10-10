## Consultar las citas por día

**ID**: 10
**Descripción**: Se introduce el día a buscar y el sistema muestra las citas.

**Actores principales**: Administrador
**Actores secundarios**:

**Precondiciones**:
* El día debe ser igual o posterior al actual

**Flujo principal**:
1. El administrador desea consultar las citas en un día
2. El administrador abre el cuadro de diálogo de búsqueda en el menú principal
3. El administrador introduce el día, mes y año
4. El sistema muestra por pantalla las citas de ese día

**Postcondiciones**:

* Se muestran al administrador las distintas citas del día con su respectivos datos: Nombre, Apellidos, Fecha, Hora Inicia/Final, Médico y Consulta

**Flujos alternativos**:

4.a. Si el día ya ha pasado, se muestra un mensaje de error
