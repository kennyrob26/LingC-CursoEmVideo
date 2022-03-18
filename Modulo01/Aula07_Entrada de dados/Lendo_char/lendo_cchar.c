#import<stdio.h>
/**********************************************************************************
 *   Obs: Quando trabalhamos com a leitura de caracteres ou String,
 *        � necess�rio utilizar a fun��o fflush(stdin).
 *        Isso ocorre por conta do buffer que existe na linguagem c,
 *        quando digitamos um valor no terminal e depois apertamos enter,
 *        o enter fica nesse buffer pois n�o cabe na mesma v�riavel que o valor.
***********************************************************************************/

void main(){
    char resp;
    printf("Digite um caractere: ");
    fflush(stdin);
    resp = getchar();
    printf("o caractere digitado foi: %c\n", resp);

    char resp2;
    printf("Digite um caractere: ");
    fflush(stdin);
    scanf("%c", &resp2);
    printf("O caractere digitado foi: %c\n", resp2);

}
