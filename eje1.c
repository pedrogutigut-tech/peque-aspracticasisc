#include <stdio.h>
int main() {
int opcion;
float resultado,numero1,numero2;
printf("ingrese una opcion: ");
scanf("%d", &opcion);
switch(opcion) {

    case 1:
     printf("ingrese el primer numero: ");
     scanf("%f", &numero1);
     printf("ingrese el segundo numero: ");
     scanf("%f", &numero2);
     resultado = numero1 + numero2;
     printf("el resultado es: %.2f\n", resultado);
        break;

    case 2:
     printf("ingrese el primer numero: ");
     scanf ("%f", &numero1);
        printf("ingrese el segundo numero: ");
        scanf("%f", &numero2);
        resultado = numero1 - numero2;
        printf("el resultado es: %.2f\n", resultado);
        break; 

       case 3:
        printf("ingrese el primer numero ");
        scanf("%f", &numero1);
       printf("ingrese el segundo numero: ");
        scanf("%f", &numero2);
        resultado = numero1 * numero2;
        printf("el resultado es: %.2f\n", resultado);
        
        case 4:printf("ingrese el primer numero ");
        scanf("%f", &numero1);
       printf("ingrese el segundo numero: ");
        scanf("%f", &numero2);
       
        if (numero2==0){
        printf("no se puede dividir baboso");
        }else{ resultado = numero1 / numero2;
        printf("el resultado es: %.2f\n", resultado);}
        break;
        
        
        default:printf("opcion invalida");
}

        return 0;

}