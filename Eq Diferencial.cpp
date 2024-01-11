#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Função que define a equação diferencial: y' = f(x, y)
double f(double x, double y) {
    return 2 * x * y; // Exemplo de função: y' = x + y
}

// Função que implementa o método de Runge-Kutta de ordem 1
double rungeKutta1(double x, double y, double h) {
    double k1 = f(x, y);
    y = y + h * k1;
    return y;
}

// Função que implementa o método de Runge-Kutta de ordem 2
double rungeKutta2(double x, double y, double h) {
    double k1 = f(x, y);
    double k2 = f(x + h, y + h * k1);
    y = y + h * (k1 + k2) / 2;
    return y;
}

// Função que implementa o método de Runge-Kutta de ordem 4
double rungeKutta4(double x, double y, double h) {
    double k1 = f(x, y);
    double k2 = f(x + h / 2, y + h * k1 / 2);
    double k3 = f(x + h / 2, y + h * k2 / 2);
    double k4 = f(x + h, y + h * k3);
    y = y + h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
    return y;
}

int main() {
    double x0, y0, xf;
    int numSubintervalos, metodo;

    printf("Digite o valor inicial de x: ");
    scanf("%lf", &x0);
    printf("Digite o valor inicial de y: ");
    scanf("%lf", &y0);
    printf("Digite o valor final de x: ");
    scanf("%lf", &xf);
    printf("Digite o número de subintervalos: ");
    scanf("%d", &numSubintervalos);

    double h = (xf - x0) / numSubintervalos; // Calcula o tamanho do passo

    printf("Escolha o método de Runge-Kutta:\n");
    printf("1 - Ordem 1\n");
    printf("2 - Ordem 2\n");
    printf("4 - Ordem 4\n");
    printf("Digite o número do método: ");
    scanf("%d", &metodo);

    double x = x0;
    double y = y0;

    for (int i = 0; i < numSubintervalos; i++) {
        switch (metodo) {
            case 1:
                y = rungeKutta1(x, y, h);
                break;
            case 2:
                y = rungeKutta2(x, y, h);
                break;
            case 4:
                y = rungeKutta4(x, y, h);
                break;
            default:
                printf("Método inválido. Saindo do programa.\n");
                return 0;
        }

        x = x + h;
    }

    printf("O valor de y em x = %.2f é %.6f\n", xf, y);

    return 0;
}