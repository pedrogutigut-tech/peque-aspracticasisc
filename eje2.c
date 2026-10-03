#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void) {
    int edad, tipo;
    char respuesta;
    bool credencial, bloqueado;

    // Solicitud de datos
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("¿Tiene credencial vigente? (S/N): ");
    scanf(" %c", &respuesta);
    credencial = (toupper(respuesta) == 'S');

    printf("¿Se encuentra bloqueado? (S/N): ");
    scanf(" %c", &respuesta);
    bloqueado = (toupper(respuesta) == 'S');

    // Validación de acceso
    if (edad >= 18 && credencial == true && !bloqueado) {

        printf("\nSelecciona el tipo de usuario:\n");
        printf("1. Administrador\n");
        printf("2. Empleado\n");
        printf("3. Invitado\n");
        printf("Opcion: ");
        scanf("%d", &tipo);

        switch (tipo) {
            case 1:
                printf("ACCESO COMO ADMINISTRADOR\n");
                break;
            case 2:
                printf("ACCESO COMO EMPLEADO\n");
                break;
            case 3:
                printf("ACCESO COMO INVITADO\n");
                break;
            default:
                printf("TIPO DE USUARIO NO VÁLIDO\n");
        }

    } else {
        printf("ACCESO DENEGADO\n");
    }

    return 0;
}