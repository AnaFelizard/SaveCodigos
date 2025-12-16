#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 

Área de tranferencias
    ;

*/

void adicao(){
    double x, y;
    printf("Digite o primeiro número:\n");
    scanf("%lf", &x);
    printf("Digite o segundo número:\n");
    scanf("%lf", &y);
    printf("Resultado: %g + %g = %g\n", x, y, x+y);
}

void subtracao(){
    double x, y;
    printf("Digite o primeiro número:\n");
    scanf("%lf", &x);
    printf("Digite o segundo número:\n");
    scanf("%lf", &y);
    printf("Resultado: %g - %g = %g\n", x, y, x-y);
}

void multiplicacao(){
    double x, y;
    printf("Digite o primeiro número:\n");
    scanf("%lf", &x);
    printf("Digite o segundo número:\n");
    scanf("%lf", &y);
    printf("Resultado: %g × %g = %g\n", x, y, x*y);
}

void divisao(){
    double x, y;
    printf("Digite o primeiro número:\n");
    scanf("%lf", &x);
    printf("Digite o segundo número:\n");
    scanf("%lf", &y);
    if(y==0){
        printf("Erro: Divisão por zero não é permitida.\n");
    }
    else{
        printf("Resultado: %g ÷ %g = %g\n", x, y, x/y);
    }
}


int main(){
    for(int controlador=0;controlador==0;){
        printf("==============================\n");
        printf("Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:\n");

        int entrada;
        scanf("%d", &entrada);

        switch (entrada)
        {
        case 1:
            adicao();
            break;
        
        case 2:
            subtracao();
            break;

        case 3:
            multiplicacao();
            break;

        case 4:
            divisao();
            break;

        case 5:
            controlador++;
            printf("Obrigado por usar a calculadora! Até a próxima.");
                return 0;

        default:
            printf("Erro: Resposta inválida.\n");
            break;
        }

         printf("Deseja realizar outra operação? (s/n):\n");
        char r[2];
        scanf(" %c", &r[0]);
        for(;r[0]!='N'&&r[0]!='n'&&r[0]!='S'&&r[0]!='s';){
                printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
                scanf(" %c", &r[0]);
            }
        if(r[0]=='N'||r[0]=='n'){
            controlador++;
        }
        else if(r[0]=='S'||r[0]=='s'){
            continue;
        }
        
        
    }

    printf("Obrigado por usar a calculadora! Até a próxima.");

}