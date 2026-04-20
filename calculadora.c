#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void menu(){
    printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção:");
    
}

void soma(){
    double v1, v2;
    printf("Digite o primeiro número:\n");
    scanf("%lf",&v1);
    printf("Digite o segundo número:\n");
    scanf("%lf",&v2);
    double resp=v1+v2;
    printf("Resultado: %lf + %lf = %.2lf\n", v1, v2, resp);
}
void subtracao(){
    double v1, v2;
    printf("Digite o primeiro número:\n");
    scanf("%lf",&v1);
    printf("Digite o segundo número:\n");
    scanf("%lf",&v2);
    double resp=v1-v2;
    printf("Resultado: %lf - %lf = %.2lf\n", v1, v2, resp);
}
void multiplicacao(){
    double v1, v2;
    printf("Digite o primeiro número:\n");
    scanf("%lf",&v1);
    printf("Digite o segundo número:\n");
    scanf("%lf",&v2);
    double resp=v1*v2;
    printf("Resultado: %lf * %lf = %.2lf\n", v1, v2, resp);
}
void divisao(){
    double v1, v2;
    printf("Digite o primeiro número:\n");
    scanf("%lf",&v1);
    printf("Digite o segundo número:\n");
    scanf("%lf",&v2);
    if(v2==0){
        printf("Erro: Divisão por zero não é permitida.");
    }
    else{
    double resp=v1/v2;
    printf("Resultado: %lf / %lf = %.2lf\n", v1, v2, resp);
    }
}

bool reset(){
    int infinito=1;
    while(infinito==1){
    printf("Deseja realizar outra operação? (y/n):\n");
    char c; scanf(" %c", &c);
    if(c=='y'||c=='Y'){
        return true;
    }
    else if(c=='n'||c=='N'){
        return false;
    }
    else{
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.");
    }
        
  }
}
void saida(){
    printf("Obrigado por usar a calculadora! Até a próxima.");
}

int main()
{
    int infinito=1;
    while(infinito==1){
    menu();
    int option;
    scanf("%d", &option);
    switch(option){
        case 1:
            soma();
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
            saida();
            return 0;
            
        default:
        printf("Entrada invalida.\nPor favor, digite um numero de 1 a 5\n");
        continue;
    }
    if(!reset()){
        saida();
        return 0;
    }
    
}
}
