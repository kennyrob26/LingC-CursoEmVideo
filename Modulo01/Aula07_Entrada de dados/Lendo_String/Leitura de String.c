#import<stdio.h>

main(){
    char nome[30];                  //O scanf n�o aceita espa�o, ent�o tudo aquilo que estiver ap�s o espa�o ser� ignorado
    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Seu nome e: %s \n", nome);

    char nome2[30];
    printf("Digite seu nome: ");   //o gets(); � pr�pio para string, ent�o � recomendado utiliza-lo ao inv�s do printf
    fflush(stdin);
    gets(nome2);
    printf("Seu nome e: %s \n", nome2);
}
