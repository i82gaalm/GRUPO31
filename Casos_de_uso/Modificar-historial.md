## Modificar Historial

**ID**: 12 **Descripción**: se modifica el historial médico que se desea.

**Actores principales**: Secretario **Actores secundarios**: usuario

**Precondiciones**:
  * El historial médico tiene que existir en el registro.

**Flujo principal**:
  1. El administrador desea modificar un historial médico.
  2. El administrador abre el cuadro de diálogo correspondiente.
  3. El administrador modifica el historial deseado.
  4. El sistema muestra un mensaje de confirmación.

**Postcondiciones**:
  * Aparece un mensaje confirmando que los datos han sido modificados correctamente.

**Flujo alternativo**:
  4.a Aparece un mensaje de error si hay algún fallo en los datos modificados.
