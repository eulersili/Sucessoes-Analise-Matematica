#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "portuguese");

    int opcao;

    sleep(1.2);

	printf("\n..............................Seja Bem vindo ao App de Analise Matematica..............................................\n");

	sleep(1);

	printf("\n................................................Iniciando................................................\n");

    sleep(2);

    printf("Menu:\n");
    sleep(2);
    printf("\n1-Para o estudo das sucessoes e limites com numeros fraccionarios.\n2-Para o estudo das sucessoes e limites com numeros inteiros\n");
    sleep(1);
    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        int  a1n, a2n, a1d, a2d, razn, razd, tgeraln, tgerald, ntermo,ki, ka, resposta;

        sleep(3);
        system("cls");
        printf("\n\n.........................................Bem vindo ao pacote 1..........................................................\n");
        sleep(2);
        printf("\nDigite os dois primeiros termos da sucessoo (numerador e denominador):");
        scanf("%d", &a1n);
        scanf("%d", &a1d);
        scanf("%d", &a2n);
        scanf("%d", &a2d);
        razn= a2n- a1n;
        razd= a2d-a1d;

        sleep(1);
        printf("\nQuantos termos desejas ver?    ");
        scanf("%d", &ntermo);
        sleep(1);
        printf("\nRazao do numerador: %d\n", razn);
        printf("\nRazao do denominador: %d\n", razd);
        sleep(1);
        printf("\nPA:\n");

        int a1nt = a1n;
        float limite = (float)razn/razd;
        for(ki = 0; ki< ntermo; ki++){
            printf("(%d), ",a1nt);
        	a1nt= a1nt+ razn;
			}
    sleep(2);
    printf("\n------------------------------------\n");

    int a1dt = a1d;
    for(ka= 0; ka < ntermo; ka++){
        printf("(%d), ",a1dt);
        a1dt = a1dt+ razd;
        }

    sleep(2);
    printf("\n\n\t\tCálculo do termo geral:\n");

    tgeraln= a1n + (razn* -1);
    tgerald= a1d + (razd* -1);
    if(tgeraln > 0 && razn >1){
		if(tgerald > 0 && razd >1){
		    printf("\nTermo geral do numerador:");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("Termo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = %dn + %d", razd, tgerald);

            sleep(2);
            printf("\n\n\t\tEstudo do limite da sucessao encontrada.\n");
            printf("\nlim %dn + %d/%dn + %d = %d/%d= %.2f„", razn, tgeraln,razd, tgerald, razn, razd, limite);

            printf("\nEsta sucessão é convergente");
			}
        if(tgerald < 0 && razd >1){
			printf("\nTermo geral do numerador:");

            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("Termo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = %dn%d", razd, tgerald);
            sleep(2);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
            printf("\nlim %dn + %d/%dn%d = %d/%d= %.2f„", razn, tgeraln,razd, tgerald, razn, razd, limite);

            printf("\nEsta sucessão é convergente");
        }

        if(tgerald > 0 && razd < 1 && razd != 0){

            printf("\nTermo geral do numerador:");

            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("Termo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = %dn + %d", razd, tgerald);

            sleep(2);
            printf("\n\n\t\tEstudo do limite da sucessao encontrada.\n");
            printf("\nlim %dn + %d/%dn + %d = %d/%d= %.2f„", razn, tgeraln,razd, tgerald, razn, razd, limite);

            printf("\nEsta sucessão é convergente");
        }

        if(tgerald < 0 && razd < 1 && razd != 0){
            printf("\nTermo geral do numerador:");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("Termo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = %dn%d", razd, tgerald);
            sleep(2);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
            printf("\nlim %dn + %d/%dn %d = %d/%d= %.2f„", razn, tgeraln,razd, tgerald, razn, razd, limite);

            printf("\nEsta sucessão é convergente");
        }

        if(tgerald > 0 && razd == 1){

            printf("\nTermo geral do numerador:");

            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("Termo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = n + %d", tgerald);

            sleep(2);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
            printf("\nlim %dn + %d/n + %d = %d/1= %.2f„", razn, tgeraln,tgerald, razn,limite);

            printf("\nEsta sucessão é convergente");
        }

        if(tgerald < 0 && razd == 1){
            printf("\nTermo geral do numerador:");

            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("Termo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = n%d",tgerald);
            sleep(2);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
            printf("\nlim %dn + %d/n%d = %d/1= %.2f„", razn, tgeraln, tgerald, razn,limite);

            printf("\nEsta sucessão é convergente");
        }

        if(tgerald == 0 && razd == 1){
            printf("\nTermo geral do numerador:");

            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("\nTermo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an = n");

            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
            printf("\nlim %dn + %d/n= %d/1= %.2f„", razn, tgeraln,razn,limite);

            printf("\nEsta sucessão é convergente");
        }

        if((tgerald == 0 && razd > 0) ||(tgerald == 0 && razd <0)){
            printf("\nTermo geral do numerador:");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
            printf("\nPasso3......an = %dn + %d", razn, tgeraln);
            printf("\n-----------------------------------------------------");
            printf("\nTermo geral denominador");
            printf("\nPasso1......an = a1+(n-1).r");
            printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
            printf("\nPasso3......an =%dn", razd);

            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
            printf("\nlim %dn + %d/%dn= %d/%d= %.2f„", razn, tgeraln, razd,razn, razd,limite);

            printf("\nEsta sucessão é convergente");
        }

      if(tgerald > 0 && razd == -1){
          printf("\nTermo geral do numerador:");
          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
          printf("\nPasso3......an = %dn + %d", razn, tgeraln);
          printf("\n-----------------------------------------------------");
          printf("Termo geral denominador");
          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
          printf("\nPasso3......an = -n + %d",tgerald);
          printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
          printf("\nlim %dn + %d/-n + %d = %d/%d= %.2f„", razn, tgeraln,tgerald, razn, razd, limite);
          printf("\nEsta sucessão é convergente");
      }

      if(tgerald == 0 && razd == -1){
          printf("\nTermo geral do numerador:");
          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
          printf("\nPasso3......an = %dn + %d", razn, tgeraln);
          printf("\n-----------------------------------------------------");
          printf("\nTermo geral denominador");
          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
          printf("\nPasso3......an = -n");
          printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
          printf("\nlim %dn + %d/-n= %d/%d= %.2f„", razn, tgeraln,razn,razd,limite);
          printf("\nEsta sucessão é convergente");
      }

      if(tgerald < 0 && razd == -1){
          printf("\nTermo geral do numerador:");
          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
          printf("\nPasso3......an = %dn + %d", razn, tgeraln);
          printf("\n-----------------------------------------------------");
          printf("Termo geral denominador");
          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1d, razd);
          printf("\nPasso3......an = -n%d",tgerald);

          printf("\n\n\t\tEstudo do limite da sucessao encontrada.\n");
          printf("\nlim %dn + %d/-n%d = %d/%d= %.2f„", razn, tgeraln,tgerald, razn, razd, limite);

          printf("\nEsta sucessão é convergente");
      }

      if(razd == 0){
          printf("\nTermo geral do numerador:");

          printf("\nPasso1......an = a1+(n-1).r");
          printf("\nPasso2......an= %d + (n-1).%d", a1n, razn);
          printf("\nPasso3......an = %dn + %d", razn, tgeraln);
          printf("\n-----------------------------------------------------");
          printf("\nTermo geral denominador");
          printf("Passo........an=%d", a1d);
          printf("\nSucessão constante");
          printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
          printf("\nlim %dn + %d/%d= %d„", razn, tgeraln,a1d, razn);
          printf("\nEsta sucessão é divergente");
      }


    }

             //segunda condicao/

    if(tgeraln < 0 && razn >1){
         if(tgerald < 0 && razd > 1){
         printf("Termo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= %dn%d", razd, tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/%dn%d = %d/%d=%.2f", razn, tgeraln, razd, tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");

         }
         if(tgerald >0 && razd > 1){

             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= %dn+%d", razd, tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/%dn+%d = %d/%d=%.2f", razn, tgeraln, razd, tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald == 0 && razd > 1){

            printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= %dn", razd);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/%dn= %d/%d=%.2f", razn, tgeraln, razd,razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald > 0 && razd < -1){
              printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= %dn+%d", razd, tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/%dn+%d = %d/%d=%.2f", razn, tgeraln, razd, tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");

         }

         if(tgerald < 0 && razd < -1){

             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= %dn%d", razd, tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/%dn%d = %d/%d=%.2f", razn, tgeraln, razd, tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");

         }

         if(tgerald == 0 && razd < -1){
             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= %dn", razd);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/%dn= %d/%d=%.2f", razn, tgeraln, razd,razn, razd, limite);
             printf("\nEsta sucessão é convergente");

         }

         if(tgerald > 0 && razd ==1){
             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
             printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso......an=n+%d",tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/n+%d = %d/%d=%.2f", razn, tgeraln,tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald < 0 && razd == 1){
             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
             printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= n%d",tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/n%d = %d/%d=%.2f", razn, tgeraln,tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
             printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso......an= n");
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/n= %d/%d=%.2f", razn, tgeraln,razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald > 0 && razd == -1){

             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an= -n+%d", tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/-n+%d = %d/%d=%.2f", razn, tgeraln,tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald < 0 && razd == -1){
             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an=-n%d",tgerald);
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/-n%d = %d/%d=%.2f", razn, tgeraln,tgerald, razn, razd, limite);
             printf("\nEsta sucessão é convergente");
         }

         if(tgerald == 0 && razd == -1){
             printf("\nTermo geral do numerador:");
             printf("\nPasso1.....an=a1+(n-1).r");
             printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
              printf("\nPasso3.....an=%dn%d", razn, tgeraln );

             printf("\nTermo geral do denominador");
             printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
             printf("\nPasso3......an=-n");
             printf("-----------------------------------------");
             printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

             printf("\nlim %dn%d/-n= %d/%d=%.2f", razn, tgeraln, razn, razd, limite);
             printf("\nEsta sucessão é convergente");
        }

        if(razd == 0){
            printf("Termo geral do numerador:");
            printf("\nPasso1.....an=a1+(n-1).r");
            printf("\nPasso2.....an=%d+(n-1).%d", a1n, razn);
            printf("\nPasso3.....an=%dn%d", razn, tgeraln );

            printf("\nTermo geral do denominador");
            printf("\nPasso1......an= a1+(n-1).r\nPasso2......an= %d+(n-1).%d", a1d, razd);
            printf("\nPasso......an=%d", a1d);
            printf("Denominador é constante");
            printf("-----------------------------------------");
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn%d/%d = %d", razn, tgeraln,tgerald, razn);
            printf("\nEsta sucessão é divergente");
        }


    }

         //Terceira condição/
    if(tgeraln == 0 && razn > 1){
        if((tgerald == 0 && razd > 1) || (tgerald == 0 && razd <-1)){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=%dn", razd);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

            printf("lim %dn/%dn = %d/%d =%.2f", razn, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

        if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=%dn+%d", razd, tgerald);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/%dn+%d= %d/%d =%.2f", razn, razd, tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
        }

        if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=%dn%d", razd, tgerald);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/%dn%d = %d/%d =%.2f", razn, razd,tgerald, razn, razd, limite);
            printf("\nEsta é uma sucessão convergente");
        }

        if(tgerald > 0 && razd == 1){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=n+%d", tgerald);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/n+%d= %d/%d =%.2f", razn, tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

        }

        if(tgerald < 0 && razd == 1){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=n%d", tgerald);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/n%d = %d/%d =%.2f", razn, tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
        }

        if(tgerald == 0 && razd == 1){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=n");
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/n = %d/%d =%.2f", razn,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
        }

        if(tgerald > 0 && razd == -1){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=-n+%d",tgerald);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/-n+%d= %d/%d =%.2f", razn,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
        }

        if(tgerald < 0 && razd == -1){
            printf("\nTermo geral do numerador");
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
            printf("\nPasso3......an=%dn", razn);

            printf("\nTermo geral do denominador:");

            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
            printf("\nPasso3......an=-n%d", tgerald);
            printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

            printf("\nlim %dn/-n%d= %d/%d =%.2f", razn,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
        }

        if(tgerald == 0 && razd == -1){
            printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/-n = %d/%d =%.2f", razn,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/%d=%d", razn,a1d,razn);

            printf("\nEsta é uma sucessão divergente");
          }



     }

     //Quarta condicao/


    if(tgeraln > 0 && razn < 0 && razn != -1){

         if(tgerald > 0 && razd < 0 && razn != -1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn+%d", razd, tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim %dn+%d/%dn+%d = %d/%d =%.2f", razn,tgeraln, razd, tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

         }
         if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim %dn+%d/%dn = %d/%d =%.2f", razn,tgeraln, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn+%d", razn, tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim %dn+%d/%dn+%d= %d/%d =%.2f", razn,tgeraln, razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn+%d", razn, tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim %dn+%d/%dn%d = %d/%d =%.2f", razn, tgeraln,razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/n+%d= %d/%d =%.2f", razn, tgeraln, tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/n%d = %d/%d =%.2f", razn, tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn+%d", razn, tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/n = %d/%d =%.2f", razn,tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/-n+%d= %d/%d =%.2f", razn, tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/-n%d= %d/%d =%.2f", razn, tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
              printf("\nPasso3......an=%dn+%d", razn, tgeraln);

              printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/-n = %d/%d =%.2f", razn,tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn+%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn+%d/%d=%d", razn, tgeraln,a1d, razn);

            printf("\nEsta é uma sucessão divergente");
          }


    }


//Quinta condicao


if(tgeraln < 0 && razn < 0 && razn != -1){

         if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim %dn%d/%dn = %d/%d =%.2f", razn,tgeraln, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn%d", razn, tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim %dn%d/%dn+%d= %d/%d =%.2f", razn,tgeraln, razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn%d", razn, tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim %dn%d/%dn%d = %d/%d =%.2f", razn, tgeraln,razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/n+%d= %d/%d =%.2f", razn, tgeraln, tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/n%d = %d/%d =%.2f", razn, tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald == 0 && razd == 1){
                printf("\nTermo geral do numerador");
                 printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
                 printf("\nPasso3......an=%dn%d", razn, tgeraln);

                printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/n = %d/%d =%.2f", razn,tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/-n+%d= %d/%d =%.2f", razn, tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/-n%d= %d/%d =%.2f", razn, tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/-n = %d/%d =%.2f", razn,tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn%d", razn, tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn%d/%d=%d", razn, tgeraln,a1d, razn);

            printf("\nEsta é uma sucessão divergente.");
          }

}

//Sexta condição//


if(tgeraln == 0 && razn < 0 && razn != -1){
     if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim %dn/%dn = %d/%d =%.2f", razn, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn", razn);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim %dn/%dn+%d= %d/%d =%.2f", razn, razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn",razn);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim %dn/%dn%d = %d/%d =%.2f", razn,razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/n+%d= %d/%d =%.2f", razn,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/n%d = %d/%d =%.2f", razn,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=%dn", razn);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/n = %d/%d =%.2f", razn,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/-n+%d= %d/%d =%.2f", razn,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/-n%d= %d/%d =%.2f", razn,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/-n = %d/%d =%.2f", razn,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=%dn", razn);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim %dn/%d=%d", razn,a1d,razn);

            printf("\nEsta é uma sucessão convergente");
          }

}

//Sétima condição//

if(tgeraln > 0 && razn == 1){

    if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim n+%d/%dn = %d/%d =%.2f", tgeraln, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n+%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim n+%d/%dn+%d= %d/%d =%.2f",tgeraln,razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n+%d",tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim n+%d/%dn%d = %d/%d =%.2f",tgeraln, razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n+%d/n+%d= %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
              printf("\nPasso3......an=n+%d", tgeraln);
              printf("\nTermo geral do denominador:");
              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=n%d", tgerald);
              printf("\n\n\t\tEstudo do limite da sucessão encontrada.");
              printf("\nlim n+%d/n%d = %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);
              printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n+%d", tgeraln);
             printf("\nTermo geral do denominador:");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n+%d/n = %d/%d =%.2f", tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n+%d/-n+%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n+%d/-n%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n+%d/-n = %d/%d =%.2f", tgeraln, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n+%d/%d= %d", tgeraln,a1d,razn);

            printf("\nEsta é uma sucessão divergente");
          }

}

//Oitava condição//


if(tgeraln < 0 && razn == 1){

     if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim n%d/%dn = %d/%d =%.2f", tgeraln, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim n%d/%dn+%d= %d/%d =%.2f",tgeraln,razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n%d",tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim n%d/%dn%d = %d/%d =%.2f",tgeraln, razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/n+%d= %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/n%d = %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/n = %d/%d =%.2f", tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/-n+%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/-n%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/-n = %d/%d =%.2f", tgeraln, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n%d/%d= %d", tgeraln,a1d, razn);

            printf("\nEsta é uma sucessão convergente");
          }


}

//Nona condição//

if(tgeraln == 0 && razn == 1){

    if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim n/%dn = %d/%d =%.2f", razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n");

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim n/%dn+%d= %d/%d =%.2f",razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n");

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim n/%dn%d = %d/%d =%.2f",razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/n+%d= %d/%d =%.2f",tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/n%d = %d/%d =%.2f",tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=n");

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/n = %d/%d =%.2f",razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/-n+%d= %d/%d =%.2f",tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/-n%d= %d/%d =%.2f",tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/-n = %d/%d =%.2f", razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim n/%d= %d",a1d);

            printf("\nEsta é uma sucessão convergente");
          }

}

//Décima condição//


if(tgeraln > 0 && razn == -1){

    if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim -n+%d/%dn = %d/%d =%.2f", tgeraln, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n+%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim -n+%d/%dn+%d= %d/%d =%.2f",tgeraln,razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n+%d",tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim -n+%d/%dn%d = %d/%d =%.2f",tgeraln, razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/n+%d= %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/n%d = %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n+%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/n = %d/%d =%.2f", tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/-n+%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/-n%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/-n = %d/%d =%.2f", tgeraln, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n+%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/%d= ±∞", tgeraln,a1d);

            printf("\nEsta é uma sucessão divergente");
          }

}

//Décima primeira condição//

if(tgeraln < 0 && razn == -1){

    if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim -n%d/%dn = %d/%d =%.2f", tgeraln, razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim -n%d/%dn+%d= %d/%d =%.2f",tgeraln,razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n%d",tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim -n%d/%dn%d = %d/%d =%.2f",tgeraln, razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n%d/n+%d= %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n%d/n%d = %d/%d =%.2f", tgeraln,tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n%d", tgeraln);

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n%d/n = %d/%d =%.2f", tgeraln,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n+%d/-n%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n%d/-n%d= %d/%d =%.2f", tgeraln,tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n%d/-n = %d/%d =%.2f", tgeraln, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n%d", tgeraln);

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n%d/%d= %d" ,tgeraln,a1d, razn);

            printf("\nEsta é uma sucessão convergente");
          }

}

//Décima segunda condição//

if(tgeraln == 0 && razn == -1){


    if((tgerald == 0 && razd >1) || (tgerald == 0 && razd <-1)){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%dn", razd);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");

       printf("lim -n/%dn = %d/%d =%.2f", razd, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente");
          }

          if((tgerald > 0 && razd > 1)|| (tgerald> 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n");

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn+%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim -n/%dn+%d= %d/%d =%.2f",razd, tgerald,razn, razd, limite);

                printf("\nEsta é uma sucessão convergente.");
          }

          if((tgerald <0 && razd > 1) || (tgerald< 0 && razd < -1)){
              printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n");

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
              printf("\nPasso3......an=%dn%d", razd, tgerald);
           printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

           printf("\nlim -n/%dn%d = %d/%d =%.2f",razd,tgerald, razn, razd, limite);
                printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n+%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/n+%d= %d/%d =%.2f",tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(tgerald < 0 && razd == 1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/n%d = %d/%d =%.2f",tgerald, razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == 1){
             printf("\nTermo geral do numerador");
             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
             printf("\nPasso3......an=-n");

         printf("\nTermo geral do denominador:");

              printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/n = %d/%d =%.2f",razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald > 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n+%d",tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/-n+%d= %d/%d =%.2f",tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald < 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n%d", tgerald);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/-n%d= %d/%d =%.2f",tgerald,razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");
          }

          if(tgerald == 0 && razd == -1){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=-n");
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/-n = %d/%d =%.2f", razn, razd, limite);

            printf("\nEsta é uma sucessão convergente.");

          }

          if(razd == 0){
              printf("\nTermo geral do numerador");
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1n,razn);
         printf("\nPasso3......an=-n");

     printf("\nTermo geral do denominador:");

          printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1d,razd);
          printf("\nPasso3......an=%d", a1d);
       printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

       printf("\nlim -n/%d= %d",a1d, razn);

            printf("\nEsta é uma sucessão convergente");
          }

}
sleep(5);
printf("..............................");
int npg;
system("cls");
sleep(2);
printf("\nDigite 1 para o estudo da PG");
scanf("%d", &resposta);
sleep(2);

if(resposta == 1){

    int pg1, pg2, pgr, pg1nt, la;


    printf("\n\n\..............................Bem vindo ao pacote PG.............................");

    sleep(5);
    printf("\nDigite o primeiro e o segundo termo da PG:  ");
    scanf("%d", &pg1);
    scanf("%d", &pg2);
    sleep(2);
    printf("\nQuantos termos desejas ver?  ");
    scanf("%d", &npg);

    pgr = pg2 / pg1;

    sleep(2);
    printf("Razão da PG: %d\n", pgr);

    pg1nt = pg1;
    sleep(2);
    for(la = 0 ; la < npg ; la++){
        printf("(%d),", pg1nt);
        pg1nt = pg1nt * pgr;


    }

}

    }

    else if(opcao == 2){

        int a1int,a2int, opcao,numero_termo, i,termogeral,razint; //anint, monotint, limitint, progint, somaint, iint;

        sleep(5);
        system("cls");
        sleep(1);

		printf("\n\n...........................Bem vindo ao pacote 2:\n\n\t...….............Sucessoes e limites com numeros inteiros..................):");

		printf("\n---------------------------------------------\nDigite os dois primeiros termos da sucessão: ");
    	scanf("%d", &a1int);
  		scanf("%d", &a2int);
		razint = a2int- a1int;
   		sleep(2);

  		printf("Quantos termos desejas ver?    ");
   		scanf("%d", &numero_termo);
   		printf("Razão: %d\n", razint);
   		printf("....PA:");
   		int a1inte = a1int;
   		for(i = 0; i< numero_termo; i++){
        	printf("(%d), ",a1inte);

        	a1inte= a1inte+ razint;

    	}
   		sleep(2);

   		printf("\n\n\t\tCalculo do termo geral:\n");

   		termogeral = a2int+ (razint * -2);

   //primeira condição//

       	if(termogeral > 0 && razint != 1 && razint != 0){
        	printf("\nPasso1......an = a1+(n-1).r");
        	printf("\nPasso2......an= %d + (n-1).%d", a1int, razint);
        	printf("\nPasso3......an = %dn + %d", razint, termogeral);
        	printf("\n-----------------------------------------------------");
        	sleep(2);
        	printf("\n\n\t\tEstudo do limite da sucessão encontrada.\n");
        	printf("\nlim %dn + %d = lim(%d)+lim(%dn)", razint, termogeral, termogeral, razint);
        	printf("\nx-∞          x-∞    x-∞");
        	printf("\nlim(%d)=%d", termogeral, termogeral);
        	printf("\nx-∞");
        	printf("\nlim%dn = %d(∞) =∞", razint, razint);
        	printf("\nx-∞");
        	printf("\nlim∞+%d=∞.", termogeral);
        	printf("\nx-∞");
          	printf("\nEsta sucessão é divergente.");
        	printf("\n-----------------------------------------------------");
        	printf("\n\n\t\tEstudo da monotonia desta sucessão");
        	printf("\n\nPasso1......Un+1 = Un\nPasso2......Un+1 = %d(n+1) +%d.", razint, termogeral);
            if(razint>0){
                int r = razint*1, o = termogeral+r, p=o-termogeral;
                printf("\nPasso3......Un+1 = %dn + %d + %d\nPasso4......Un+1 = %dn+%d", razint, r, termogeral, razint,o);
                printf("\nPasso5......Un+1-Un = %dn +%d-(%dn+%d)", razint, o, razint, termogeral);
                printf("\nPasso6......Un+1-Un = %dn-%dn+%d-%d\nPasso7......Un+1 -Un = %d-%d = %d", razint, razint, o, termogeral, o, termogeral,p);
                if(p>0){
                printf("\n.......Sucessão monótona Crescente.");
            	}
                else if(p<0){
                printf("\n.......Sucessão monótona Decrescente.");
                }
                else{
                printf("\nNão é uma sucessão monótona.");
                }
            }
            if(razint<0){
                int t =razint *1, y=t+termogeral,x=y-termogeral, u=razint* -1;

                printf("\nPasso3......Un+1= %dn%d +%d", razint, t, termogeral);
                if(y>0){
                   printf("\nPasso4.......Un+1-Un= %dn+%d - (%dn +%d)", razint, y, razint, termogeral);
                }
                else if(y<0){
                    printf("\nPasso4......Un+1-Un=%dn%d-(%dn+%d)", razint, y, razint, termogeral);
                }
                if(u>0 && y>0){
                     printf("\nPasso5.......Un+1-Un= %dn+%dn+%d-%d", razint,u, y, termogeral);
                }
                if(u>0 && y<0){
                    printf("\nPasso5......Un+1-Un=%dn+%dn%d-%d", razint, u, y, termogeral);
                }

                else if(u<0 && y>0){
                    printf("\nPasso5......Un+1-Un= %dn%dn+%d-%d", razint, u, y, termogeral);
                }
                if(u<0 && y<0){
                    printf("\nPasso5......Un+1-Un=%dn%dn%d-%d", razint, u, y, termogeral);
                }
                printf("\nPasso6.......Un+1-Un= %d-%d=%d", y, termogeral, x);


                if(x>0){
                    printf("\n........Sucessão monótona crescente");
                }
                else if(x<0){
                    printf("\n........Sucessão monótona decrescente.");
                }
                else{
                    printf("\nNão é uma sucessão monótona.");
                }
        	}

    	}

        /*segunda condicao*/
    	if(termogeral < 0 && razint !=1 && razint !=0){
        	int pi= razint* 1, pu= -pi-termogeral, tit= termogeral* -1, po= pi-termogeral, pr= -1*razint;
        	printf("\nPasso1.....an=a1+(n-1).r");
        	printf("\nPasso2.....an=%d+(n-1).%d", a1int, razint);
         	if(razint>0){
            	printf("\nPasso3.....an=%dn%d", razint, termogeral );
         	}
         	if(razint< -1){

            	printf("\nPasso3.....an=%dn%d", razint, termogeral);
         	}
         	if(razint== -1){
            	printf("\nPasso3.....an=-n%d", termogeral);
        	}


        	printf("-----------------------------------------");
        	printf("\n\n\t\tEstudo do limite da sucessão encontrada.");

         	if(razint < -1 || razint > 1){
            	printf("\nlim %dn - %d = lim(%d)+lim(%dn)", razint, termogeral, termogeral, razint);
            	printf("\nx-∞          x-∞    x-∞");
            	printf("\nlim(%d)=%d", termogeral, termogeral);
            	printf("\nlim%dn = %d(∞) =∞", razint, razint);
            	printf("\nlim∞%d=-∞.", termogeral);
            	printf("\nEsta sucessão é divergente.");
            }
    		if(razint==-1){
            	printf("\nlim -n %d = lim(%d)+lim(-n)", termogeral, termogeral);
            	printf("\nx-∞          x-∞    x-∞");
            	printf("\nlim(%d)=%d", termogeral, termogeral);
            	printf("\nlim-n = -%d(∞) =-∞", razint);
            	printf("\nlim-∞%d=-∞.", termogeral);
            	sleep(3);
            	printf("\nEsta sucessão é divergente.");
            }
        	printf("---------------------------------------");
        	printf("\n\n\t\tEstudo da monotonia da sucessão encontrada.");

        	printf("\nPasso1......Un+1=Un\nPasso2......Un+1=%d(n+1)%d", razint, termogeral);
        	if(razint==-1){

               	printf("\nPasso3......Un+1=-n%d%d", pi, termogeral);
               	printf("\nPasso4......Un+1=-n-%d", pu);
               	printf("\nPasso5.......Un+1-Un=-n-%d-(-n%d)",pu, termogeral);
                printf("\nPasso6......Un+1-Un=-n+n+%d-%d", tit, pu);
                printf("\nPasso7......Un+1-Un=%d-%d=%d", tit, pu, tit-pu);
                if(tit-pu >0){
                    printf("\nSucessão monótona crescente");
                }
                else if(tit-pu <0){
                    printf("\nSucessão monótona decrescente");
                }
                else{
                    printf("\nNão é uma sucessão monótona");
                }
            }


            if(razint>0 && razint != 1){

                printf("\nPasso3......Un+1=%dn+%d%d", razint, pi, termogeral);

                if(po>0){
                    printf("\nPasso4......Un+1=%dn+%d", razint, po);
                    printf("\nPasso5......Un+1-Un=%dn+%d-(%dn%d", razint, po, razint,termogeral);
                    printf("\nPasso6......Un+1-Un=%dn+%d+%dn+%d", razint, po, razint, tit);
                    printf("\nPasso7......Un+1-Un=%d+%d=%d", po, tit, po+tit);
                    if(po+tit>0){
                        printf("\nSucessão monótona Crescente.");
                    }
                    else if(po+tit <0){
                        printf("\nSucessão monótona decrescente.");
                    }
                    else{
                        printf("\nNão é uma sucessão monótona.");
                    }
                }
                else if(po<0){
                    printf("\nPasso4......Un+1= %dn%d", razint, po);

                    printf("\nPasso5......Un+1-Un=%dn%d-(%dn%d", razint, po, razint,termogeral);
                    printf("\nPasso6......Un+1-Un=%dn%d+%dn+%d", razint, po, razint, tit);
                    printf("\nPasso7......Un+1-Un=%d+%d=%d", po, tit, -po+tit);
                }
                if(-po+tit >0){
                    printf("\nSucessão monótona crescente.");
                }
             	else if(-po+tit <0){
                    printf("\nSucessão monótona decrescente");
                }
             	else{
                    printf("\nNão é uma sucessão monótona.");
                }
             }
            if(razint< -1){

                printf("\nPasso3......Un+1=%dn%d%d", razint, pi, termogeral);
                if(po>0){
                	printf("\nPasso4......Un+1=%dn+%d", razint, po);

                    printf("Passo5......Un+1-Un=%dn+%d-(%dn%d)", razint, po, razint, termogeral);
                    printf("\nPasso6......Un+1-Un=%dn+%d+%d+%d", razint, pr, po, tit);
                    printf("\nPasso7......Un+1-Un=%d+%d=%d", po, tit, po+tit);
                    if(po+tit>0){
                        printf("\nSucessão monótona crescente.");
                    }
                    else if(po+tit <0){
                        printf("\nSucessão monótona decrescente.");
                    }
                    else{
                        printf("\nNão é uma sucessão monótona");
                    }
               }
               if(po<0){
                    printf("\nPasso4......Un+1=%dn%d", razint, po);
                    printf("\nPasso5......Un+1-Un=%dn%d-(%dn%d)", razint, po, razint, termogeral);
                    printf("\nPasso6......Un+1-Un=%dn+%dn%d+%d", razint, pr,po, tit );
                    printf("\nPasso7......Un+1-Un=%d+%d=%d", po, tit, po+tit);
                    if(po+tit>0){
                        printf("Sucessão monótona crescente.");

                    }
                    else if(po+tit <0){
                        printf("Sucessão monótona decrescente");
                    }
                    else{
                        printf("Não é uma sucessão monótona");
                    }
                }
          	}
    	}
             /*Terceira condição*/
     	if(termogeral == 0 && razint !=0 && razint!= 1){
        	int h= a1int+(razint* -1), pak=razint*1, lo=-1*razint;
     		printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1int, razint);
          	printf("\nPasso3......an=%dn+%d", razint, h);
     		printf("\nPasso4......an=%dn", razint);

       		printf("\n\n\t\tEstudo do limite desta sucessão\n");
           	printf("lim %dn", razint);
           	printf("\nx-∞");
       		if(razint>0){
            	printf("\nlim%d(∞)=+∞", razint);
       		}
       		else if(razint<0){
            	printf("\nlim%d(∞)=-∞", razint);
        	}
         	printf("\nEsta é uma sucessão divergente");

         	printf("\n\n\t\tEstudo da monotonia da sucessão encontrada\n");

         	printf("\nPasso1......Un+1=Un\nPasso2......Un+1=%d(n+1)", razint);
         	if(pak>0){
               printf("\nPasso3......Un+1=%dn+%d", razint, pak);
               printf("\nPasso4......Un+1-Un=%dn+%d-(%dn)", razint, pak, razint);
               if(lo<0){
                   printf("\nPasso5......Un+1-Un=%dn+%d%dn", razint, pak,lo);
                   printf("Passo6......Un+1-Un=%d", pak);
               	}
                else if(lo>0){
                    printf("\nPasso5......Un+1-Un=%dn+%d+%dn", razint, pak,lo);
                    printf("\nPasso6......Un+1-Un=%d", pak);
                }
                printf("\nSucessão monótona crescente");
    		}
         //pak <0

        	if(pak<0){
                printf("\nPasso3......Un+1=%dn%d", razint, pak);
             	printf("\nPasso4......Un+1-Un=%dn%d-(%dn)", razint, pak, razint);
             	if(lo<0){
                printf("\nPasso5......Un+1-Un=%dn+%d%dn", razint, pak,lo);
                printf("Passo6......Un+1-Un=%d", pak);
            	}
            	else if(lo>0){
                	printf("\nPasso5......Un+1-Un=%dn%d+%dn", razint, pak,lo);
                	printf("\nPasso6......Un+1-Un=%d", pak);
             	}
             	printf("\nSucessão monótona decrescente");
         	}

    	}

        /*Quarta condição*/

      if(termogeral > 0 && razint == 1){
         int mu=1+termogeral, g= -1*termogeral;
         printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1int, razint);
         printf("\nPasso3......an=n+%d",termogeral);
         printf("\n\n\t\tEstudo do limite da sucessão encontrada");
         printf("\nlimit n+%d", termogeral);
         printf("\nx-∞");
         printf("\nlimit (∞)+limit(%d)",termogeral);
         printf("\nlimit ∞ + %d = ∞", termogeral);

         printf("\n\n\t\tEstudo da monotonia da sucessão encontrad");

         printf("\nPasso1......Un+1=Un\nPasso2......Un+1=n+%d= n+1+%d", termogeral, termogeral);
         printf("\nPasso3......Un+1=n+%d", mu);
         printf("\nPasso4......Un+1-Un=n+%d-(n+%d)", mu, termogeral);
         if(g>0){
         printf("\nPasso5......Un+1-Un=n-n+%d+%d",mu, g);
         printf("\nPasso6......Un+1-Un=%d+%d=%d", mu, g, mu+g);
         }
         printf("\nSucessão monótona crescente.");

         if(g<0){
             printf("\nPasso5......Un+1-Un=n-n+%d%d",mu, g);
          printf("\nPasso6......Un+1-Un=%d%d=%d", mu, g, mu+g);
         }
         if(mu+g >0){
             printf("\nSucessão monótona crescente.");
         }
         else if(mu+g<0){
             printf("\nSucessão monótona decrescente");
         }
         }

         if(termogeral <0 && razint == 1){
             int plot= termogeral+1, tun= termogeral*-1;

             printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1).%d", a1int, razint);
             printf("\nPasso3......an=n%d", termogeral);

             printf("\n\n\t\tEstudo do limite da sucessão encontrada");
             printf("\nlim n%d=lim(∞)%d=∞%d=-∞\n", termogeral, termogeral, termogeral);
             printf("Esta sucessão é divergente.");

             printf("\n\n\t\tEstudo da Monotonia da sucessão encontrada");
             printf("\nPasso1......Un+1=Un\nPasso2......Un+1=n+1%d",termogeral );
             if(plot ==0){
                 printf("\nPasso3......Un+1= n");
                 printf("\nPasso4.......Un+1-Un=n-(n%d)", termogeral);
                 printf("\nPasso5......Un+1-Un=n-n+%d", termogeral*-1);
                 printf("\nPasso6......Un+1-Un=%d", termogeral*-1);
                 printf("\nSucessão monótona crescente");
             }
             if(plot>0){

                printf("\nPasso3......Un+1= n+%d", plot);
                printf("\nPasso4.......Un+1-Un=n+%d-(n%d)", plot,termogeral);
                printf("\nPasso5......Un+1-Un=n-n+%d+%d", plot, tun);
                printf("\nPasso6......Un+1-Un=%d", tun+plot);
                 printf("\nSucessão monótona crescente");
             }

             if(plot<0){

                 printf("\nPasso3......Un+1= n%d", plot);
                printf("\nPasso4.......Un+1-Un=n%d-(n%d)",plot,termogeral);
                printf("\nPasso5......Un+1-Un=n-n%d+%d", plot, tun);
                printf("\nPasso6......Un+1-Un=%d", plot+tun);
                 if(plot+tun >0){
                     printf("\nSucessão monótona crescente.");
             }
                 if(plot+tun <0){
                     printf("\nSucessão monótona decrescente.");
             }
     }
         }

//fim da cond

// quinta condição

        if(termogeral == 0 && razint==1){
            printf("\nPasso1......an=a1+(n-1).r\nPasso2......an=%d+(n-1)%d", a1int, razint);
            printf("\nPasso3......an=n");
            printf("\n\n\t\tEstudo do limite da sucessão encontrada");

            printf("\nlim n=(∞)=∞");
            printf("\nEsta sucessão é divergente.");
            printf("\n\n\t\tEstudo da Monotonia da sucessão encontrada\n");
            printf("Passo1......Un+1=Un\nPasso2......Un+1=n+1\nPasso3......Un+1-Un=n+1-n\nPasso4......Un+1-Un=n-n+1\nPasso5......Un+1-Un=1");
            printf("\nSucessão monótona crescente");
        }


//sexta condição//

        if(termogeral == 0 && razint == 0){
            printf("\nSucessão constante");


     }
    }

        sleep(5);
        system("cls");
        printf("\n\n\t\t...................Participantes..................");
        sleep(2);
        sleep(2);
        printf("\nBerta de Oliveira\nDemetrio Efraim\nEuler Sili\nHelder Machado\nJoao Puati\nLuis Kazade\nSergio Morais");
        sleep(8);
        system("cls");
        printf("\n\nObrigado por visitares o app Analise Matematica\n\\t...........................Volte sempre.........................\nPressiona qualquer letra para terminar o programa");


}
