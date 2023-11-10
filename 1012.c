/*moinul*/
#include <stdio.h>

int main(){
    double A,B,C,pi=3.14159,TRI,CI,TRA,QUA,RE;
    scanf("%lf%lf%lf",&A,&B,&C);
    TRI=.5*A*C;
    CI=pi*C*C;
    TRA=.5*(A+B)*C;
    QUA=B*B;
    RE=A*B;

    printf("TRIANGULO: %.3lf\n",TRI);
     printf("CIRCULO: %.3lf\n",CI);
      printf("TRAPEZIO: %.3lf\n",TRA);
       printf("QUADRADO: %.3lf\n",QUA);
       printf("RETANGULO: %.3lf\n",RE);

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    return 0;
}
