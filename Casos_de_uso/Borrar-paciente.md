## Borrar datos de paciente

**ID**:02 **Descripción**: Se introduce el nombre y apellido del paciente para borrarlo.

**Actores principales**: Administrador **Actores secundarios**: Usuario

**Precondiciones**:
 * Que el paciente exista previamente en el sistema.

**Flujo principal**:
  1. El administrador busca el paciente en el sistema.
  2. El administrador abre el cuadro de diálogo.
  3. El administrador elimina al paciente del sistema.
  4. El administrador muestra por pantalla un mensaje de confirmación.

**Postcondiciones**:
 * Paciente borrado del sistema.

**Flujo alternativo**:
 1.a Salta un mensaje de error si el paciente no se encuentra en el sistema.
