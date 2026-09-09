#include <stdio.h>
#include <windows.h>
int main() {
    system("chcp 65001 > nul");
    const float PI = 3.14159; // No se usa, pero es válida
    
    int num1, num2;
    float resultado;

    printf("--- Calculadora Basica ---\n");
    printf("Ingrese dos numeros enteros:\n");

    printf("Primer numero: ");
    scanf("%d", &num1);

    printf("Segundo numero: ");
    scanf("%d", &num2);

    printf("\n--- Resultados ---\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    // Corrección: Usar la variable 'resultado' en lugar de 'num1 % num2' para el formato %.2f
    resultado = (float)num1 / num2;
    printf("%d / %d = %.2f\n", num1, num2, resultado);

    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    // Operadores de incremento
    printf("\n--- OPERADORES ESPECIALES ---\n");
    int x = num1;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++); // Post-incremento
    printf("Después de x++: x = %d\n", x);
    printf("++x = %d\n", ++x);   // Pre-incremento

    return 0;
}                                                       