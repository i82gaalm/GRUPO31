**Modificar datos de paciente**

**ID**:03 **Descripción**: Se introduce el nombre y apellidos del usuario que se quiere modificar.

**Actores principales**: Administrador **Actores secundarios**: Usuario

**Precondiciones**:
 * Que exista el usuario en el sistema.

**Flujo principal**:
 1. El administrador desea modificar los datos del usuario.
 2. El administrador abre el cuadro de diálogo.
 3. El administrador modifica los datos del usuario.
 4. Aparece en pantalla un mensaje de confirmación del cambio en los datos del usuario.

**Postcondiciones**:
  * Se muestra los datos cambiados del paciente modificados al Administrador.

**Flujos alternativos**:
 1.a Si no existe el usuario, aparece un mensaje de error.
