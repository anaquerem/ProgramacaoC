#include <stdio.h>

int main(){

    int numero;

    do {

        printf("Digite um número par para sair do programa...");
        scantf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é par!", numero);
        } else {
            printf("%d é impar!", numero);
        }

    } while (numero % 2 != 0);


    return 0;
}