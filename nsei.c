#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "");
    int Tprovas;
    int Tprovas1;
    int notamax;
    printf("Calcule c vc passou\n");
    printf("\n Digite quantas provas vc teve: ");
    scanf("%i",&Tprovas);
    for (int i = 0; i < 1; i++){
        if (Tprovas <= 0 || Tprovas > 100){
            printf("\nValor invalido\nN�mero negativo ou muito grande\n");
            printf("\nDigite o n�mero de provas novamente: ");
            scanf("%i",&Tprovas);
            i--;
        }
    }
    Tprovas1 = Tprovas - 1;
    printf("Qual a nota max de sua provas? Digite aqui: ");
    scanf("%i",&notamax);
    for (int i = 0; i < 1; i++){
        if (notamax <= 0){
            printf("\nValor invalido\nN�mero negativo ou muito grande\n");
            printf("\nDigite a nota maxima novamente: ");
            scanf("%i",&notamax);
            i--;
        }
    }

    float nota[Tprovas1];
    float media;
    float somanotas = 0;

    for (int i = 0; i < Tprovas; i++){
        printf("\nDigite sua nota%i: ", i + 1);
        scanf("%f", &nota[i]);
        if (nota[i] > notamax || nota[i] < 0){
            printf("Nota excede o limite maximo ou eh um numero negativo\nFavor digitar novamente");
            i--;
        }
    }

    for (int i = 0; i < Tprovas; i++){
        somanotas = somanotas + nota[i];
    }
    media = somanotas/Tprovas;

    printf("\nA media eh:%f",media);

    if (media < 0.3*notamax){
        printf("\nVc foi reprovado :(");
    }else if (media < 0.7*notamax){
        printf("Vc n passou, mas ainda tem chance de passar");
    }else if (media <= notamax){
        printf("Parabens vc passou");
    }else {
        printf("erro");

    }



    return 0;
}
