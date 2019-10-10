## Modificar cita

**ID**:08 **Descripción**: Se escribe la cita que se desea modificar.

**Actores principales**: Administrador **Actores secundarios**: Usuario

**Precondiciones**:
  * Que exista la cita previamente.

**Flujo principal**
  1. El administrador desea modificar una cita.
  2. El administrador abre la ventana de diálogo y escribe la cita a modificar.
  3. El administrador modifica la cita.
  4. El sistema manda un mensaje de confirmación.

**Postcondiciones**:
  * Aparece un aviso que indica que se ha modificado correctamente la cita.

**Flujo alternativo**:
  4.a Aparece un mensaje de error si los datos introducidos de la cita son erróneos o la hora se encuentra ocupada por otra cita.
