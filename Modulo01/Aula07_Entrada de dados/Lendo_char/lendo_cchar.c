#import<stdio.h>
/**********************************************************************************
 *   Obs: Quando trabalhamos com a leitura de caracteres ou String,
 *        é necessário utilizar a função fflush(stdin).
 *        Isso ocorre por conta do buffer que existe na linguagem c,
 *        quando digitamos um valor no terminal e depois apertamos enter,
 *        o enter fica nesse buffer pois não cabe na mesma váriavel que o valor.
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
