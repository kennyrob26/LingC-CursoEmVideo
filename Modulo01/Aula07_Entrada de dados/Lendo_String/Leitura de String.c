#import<stdio.h>

main(){
    char nome[30];                  //O scanf não aceita espaço, então tudo aquilo que estiver após o espaço será ignorado
    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Seu nome e: %s \n", nome);

    char nome2[30];
    printf("Digite seu nome: ");   //o gets(); é própio para string, então é recomendado utiliza-lo ao invés do printf
    fflush(stdin);
    gets(nome2);
    printf("Seu nome e: %s \n", nome2);
}
