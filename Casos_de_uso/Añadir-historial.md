## Añadir Historial

**ID**:11 **Descripción**: se escribe el historial médico que se quiera añadir.

**Actores principales**: Secretario **Actores secundarios**: Usuario

**Precondiciones**
 * El paciente debe existir

**Flujo principal**:
  1. El administrador desea añadir un historial médico.
  2. El administrador abre el cuadro de diálogo.
  3. El administrador escribe el historial médico.
  4. El sistema manda un mensaje de confirmación.

**Postcondiciones**
  * Aparece un mensaje en la pantalla confirmando que el historial se ha añadido correctamente.

**Flujo alternativo**:
  4.a Aparece un mensaje de error en pantalla si hay algun fallo en el historial médico.
