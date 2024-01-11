Programa de Resolução de Equações Diferenciais por Runge-Kutta

Este programa em C resolve equações diferenciais ordinárias (EDOs) por meio dos métodos de Runge-Kutta de diferentes ordens. A EDO é definida pela função f(x, y), onde y' = f(x, y).

Instruções de Uso:
1. Compile o programa utilizando um compilador C (por exemplo, GCC):

bash
Copy code
gcc nome_do_programa.c -o nome_do_programa

2. Execute o programa:

bash
Copy code
./nome_do_programa

3. Insira os valores solicitados:

Valor inicial de x.
Valor inicial de y.
Valor final de x.
Número de subintervalos.
Escolha o método de Runge-Kutta:
1 - Ordem 1
2 - Ordem 2
4 - Ordem 4

4. O programa calculará e imprimirá o valor de y em x utilizando o método escolhido.

Funções Principais:
f(x, y): Define a equação diferencial a ser resolvida.
rungeKutta1(x, y, h): Implementa o método de Runge-Kutta de ordem 1.
rungeKutta2(x, y, h): Implementa o método de Runge-Kutta de ordem 2.
rungeKutta4(x, y, h): Implementa o método de Runge-Kutta de ordem 4.
Exemplo de Utilização:
Para uma EDO específica e método de Runge-Kutta de ordem 2:

bash
Copy code
Digite o valor inicial de x: 0
Digite o valor inicial de y: 1
Digite o valor final de x: 2
Digite o número de subintervalos: 100
Escolha o método de Runge-Kutta:
1 - Ordem 1
2 - Ordem 2
4 - Ordem 4
Digite o número do método: 2
