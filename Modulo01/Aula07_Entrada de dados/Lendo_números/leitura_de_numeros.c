#include<stdio.h>
/*******************************************************************************************************
*    Obs: Quando vamos receber dados com o scanf é necessário utilizar o & comercial antes da variavel.*
*    Pois o scanf não necessita do valor da variável e sim o seu endereço de memória (&)               *
*******************************************************************************************************/
void main(){
    int num;
    float med;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);                              //Recebendo um número inteiro
    printf("O numero digitado foi: %d \n", num);

    printf("Digite um numero real: ");
    scanf("%f", &med);                              //Recebendo um número real
    printf("O numero digitado foi: %.2f", med);
}
