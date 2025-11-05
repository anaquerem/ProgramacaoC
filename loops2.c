#include <stdio.h>

int main(){

    int numero;

    do {

        printf("Digite um número par para sair do programa... \n");
        scantf("%d", &numero);

    } while (numero % 2 != 0);


    return 0;
}