#include<stdio.h>
/*******************************************************************************************************
*    Obs: Quando vamos receber dados com o scanf � necess�rio utilizar o & comercial antes da variavel.*
*    Pois o scanf n�o necessita do valor da vari�vel e sim o seu endere�o de mem�ria (&)               *
*******************************************************************************************************/
void main(){
    int num;
    float med;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);                              //Recebendo um n�mero inteiro
    printf("O numero digitado foi: %d \n", num);

    printf("Digite um numero real: ");
    scanf("%f", &med);                              //Recebendo um n�mero real
    printf("O numero digitado foi: %.2f", med);
}
