#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i, j,opcao,vet[5][5],t, f, ma[5][5],soma, soma2, soma3, soma4, soma5, soma6, soma7, somo=0,somafinal=0, r, s;
	char mat[5][5];
	float num, decimetro, centimetro, milimetro;

	do{
	    printf("\nMenu:\n");
        printf("1-Ver a letra S\n");
        printf("2-Ver a letra U\n");
        printf("3-Ver a letra S e U\n");
        printf("4-Ver a soma das margens\n");
        printf("5-Ver o rectangulo\n");
        printf("6-Conversao de metros para decimetros, centimetros e milimetros\n");
        printf("7-Sair\n");
		printf("\nDigite a sua opcao: ");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				system("cls");
			    sleep(1);

                /*Desenhando a letra S*/
				printf("Desenhando a letra S...\n\n");
                for(i=0; i<5; i++){
                    for(j=0; j<5; j++){
                        vet[i][j] = '*';

                        if(i== 0 && j == 0){
                            printf(" ");
                        }
                        if(i== 0 && j== 1){
                            printf("\t");
                            sleep(1);
                        }
                        if(i== 0 && j== 2){
                            printf("  %c", vet[i][j]);

                        }
                        if(i== 0 && j== 3){
                            printf("    %c", vet[i][j]);
                        }
                        if(i== 0 && j== 4){
                            printf("\n\n");
                        }
                        if(i== 1 && j== 0){
                            printf(" ");
                            sleep(1);
                        }
                        if(i== 1 && j== 1){
                            printf("\t%c", vet[i][j]);
                        }
                        if(i== 1 && j == 2){
                            printf(" ");
                        }
                        if(i== 1 && j== 3){
                            printf(" ");
                        }
                        if(i==1 && j== 4){
                            printf("\n\t");
                        }
                        if(i==2 && j==0){
                            printf(" ");
                        }
                        if(i== 2 && j== 1){
                            printf(" ");
                            sleep(1);
                        }
                        if(i== 2 && j== 2){
                            printf("%c", vet[i][j]);
                        }
                        if(i== 2 && j== 3){
                            printf("   %c", vet[i][j]);
                        }
                        if(i==2 && j== 4){
                            printf("\n");
                        }
                        if(i== 3 && j== 0){
                            printf("  ");
                        }
                        if(i== 3 && j== 1){
                            printf(" ");
                        }
                        if(i== 3 && j==2){
                            printf(" ");
                            sleep(1);
                        }
                        if(i== 3 && j== 3){
                            printf("\n\t       %c", vet[i][j]);
                        }
                        if(i== 3 && j== 4){
                            printf(" ");
                        }
                        if(i==4 && j== 0){
                            printf("  ");
                            sleep(1);
                        }
                        if(i== 4 && j== 1){
                            printf("\n\t%c", vet[i][j]);
                        }
                        if(i== 4 && j== 2){
                            printf("   %c", vet[i][j]);
                        }
                        if(i==4 && j== 3){
                            printf(" ");
                        }
                        if(i== 4 && j== 4){
                            printf(" ");
                        }
                    }
                }

                break;
                /*desenhando a letra u*/
			case 2:
					system("cls");
					sleep(1);
					printf("Desenhando a letra U....\n\n");

					for(r= 0; r<5; r++){
						for(s=0 ;s<5; s++){
							mat[r][s]= '*';
							if(r== 0 && s== 0){
								printf("%c   ", mat[r][s]);
							}
							if(r == 0 && s < 4){
									printf(" ");
							}
							if(r == 0 && s== 4){

								printf("%c", mat[r][s]);
								sleep(1);
							}
							if(r == 1 && s == 0){
								printf("\n%c   ", mat[r][s]);

							}
							if(r == 1 && s < 4){
								printf(" ");
							}
							if(r == 1 && s == 4){
								printf("%c", mat[r][s]);
								sleep(1);
							}
							if(r == 2 && s==0){
								printf("\n%c   ", mat[r][s]);
							}
							if(r == 2 && s < 4){
								printf(" ");
							}
							if(r== 2 && s == 4){
								printf("%c", mat[r][s]);
								sleep(1);
							}
							if(r== 3 && s== 0){
								printf("\n%c   ", mat[r][s]);
							}
							if(r == 3 && s < 4){
								printf(" ");
							}
							if(r == 3 && s == 4){

								printf("%c",mat[r][s]);
								sleep(1);
							}
							if(r == 4 && s == 1){
								printf("\n  %c", mat[r][s]);
							}
							if(r== 4 && s==2){
								printf(" %c",mat[r][s]);

							}
							if(r== 4 && s== 3){
								printf(" %c",mat[r][s]);
							}

						}
					}
                    break;

			case 3:
					system("cls");


                for(i=0; i<5; i++){
                    for(j=0; j<5; j++){
                        vet[i][j] = '*';

                        if(i== 0 && j == 0){
                            printf(" ");
                        }
                        if(i== 0 && j== 1){
                            printf("\t");
                            sleep(1);
                        }
                        if(i== 0 && j== 2){
                            printf("  %c", vet[i][j]);

                        }
                        if(i== 0 && j== 3){
                            printf("    %c", vet[i][j]);
                        }
                        if(i== 0 && j== 4){
                            printf("\n\n");
                        }
                        if(i== 1 && j== 0){
                            printf(" ");
                            sleep(1);
                        }
                        if(i== 1 && j== 1){
                            printf("\t%c", vet[i][j]);
                        }
                        if(i== 1 && j == 2){
                            printf(" ");
                        }
                        if(i== 1 && j== 3){
                            printf(" ");
                        }
                        if(i==1 && j== 4){
                            printf("\n\t");
                        }
                        if(i==2 && j==0){
                            printf(" ");
                        }
                        if(i== 2 && j== 1){
                            printf(" ");
                            sleep(1);
                        }
                        if(i== 2 && j== 2){
                            printf("%c", vet[i][j]);
                        }
                        if(i== 2 && j== 3){
                            printf("   %c", vet[i][j]);
                        }
                        if(i==2 && j== 4){
                            printf("\n");
                        }
                        if(i== 3 && j== 0){
                            printf("  ");
                        }
                        if(i== 3 && j== 1){
                            printf(" ");
                        }
                        if(i== 3 && j==2){
                            printf(" ");
                            sleep(1);
                        }
                        if(i== 3 && j== 3){
                            printf("\n\t       %c", vet[i][j]);
                        }
                        if(i== 3 && j== 4){
                            printf(" ");
                        }
                        if(i==4 && j== 0){
                            printf("  ");
                            sleep(1);
                        }
                        if(i== 4 && j== 1){
                            printf("\n\t%c", vet[i][j]);
                        }
                        if(i== 4 && j== 2){
                            printf("   %c", vet[i][j]);
                        }
                        if(i==4 && j== 3){
                            printf(" ");
                        }
                        if(i== 4 && j== 4){
                            printf(" ");
                        }
                    }

				   }

					  	sleep(1);
					for(r= 0; r<5; r++){
						for(s=0 ;s<5; s++){
							mat[r][s]= '*';
							if(r== 0 && s== 0){
								printf("\n\n%c   ", mat[r][s]);
							}
							if(r == 0 && s < 4){
									printf(" ");
							}
							if(r == 0 && s== 4){

								printf("%c", mat[r][s]);
								sleep(1);
							}
							if(r == 1 && s == 0){
								printf("\n%c   ", mat[r][s]);

							}
							if(r == 1 && s < 4){
								printf(" ");
							}
							if(r == 1 && s == 4){
								printf("%c", mat[r][s]);
								sleep(1);
							}
							if(r == 2 && s==0){
								printf("\n%c   ", mat[r][s]);
							}
							if(r == 2 && s < 4){
								printf(" ");
							}
							if(r== 2 && s == 4){
								printf("%c", mat[r][s]);
								sleep(1);
							}
							if(r== 3 && s== 0){
								printf("\n%c   ", mat[r][s]);
							}
							if(r == 3 && s < 4){
								printf(" ");
							}
							if(r == 3 && s == 4){

								printf("%c",mat[r][s]);
								sleep(1);
							}
							if(r == 4 && s == 1){
								printf("\n  %c", mat[r][s]);
							}
							if(r== 4 && s==2){
								printf(" %c",mat[r][s]);

							}
							if(r== 4 && s== 3){
								printf(" %c",mat[r][s]);
							}

						}
					}
                    break;



            case 4:
                    system("cls");
                    printf("\nCalculando o valor total das margens.\n\n");
                    printf("Preencha a matriz:\n\n");

                    /*Preenchendo a matriz*/
                    for(t = 0; t< 5; t++){
                        for(f= 0; f<5; f++){
                            printf("Digite o valor da linha %d coluna %d: ",t,f);
                            scanf("%d", &ma[t][f]);
                        }
                    }
                        /*Imprimindo a matriz original*/

                    printf("\nMatriz original:\n");
                    for(t= 0; t<5; t++){
                        for(f= 0; f<5; f++){
                            printf("%d ", ma[t][f]);
                        }
                        printf("\n");

                    }

                    /*calculando a soma das margens*/

                    printf("\nSoma das margens:\n");
                    for(t=0 ; t<5; t++){
                        for(f=0; f<5; f++){
                            if(t== 0){
                                soma += ma[t][f];
                            }
                            if(t==1 && f== 0){
                                soma2 = ma[t][f];
                            }
                            if(t== 1 && f== 4){
                                soma3 = ma[t][f];
                            }
                            if(t== 2 && f == 0){
                                soma4 = ma[t][f];
                            }
                            if(t== 2 && f== 4){
                                soma5 = ma[t][f];
                            }
                            if(t == 3 && f==0){
                                soma6 = ma[t][f];
                            }
                            if(t == 3 && f == 4){
                                soma7 = ma[t][f];
                            }
                            if(t == 4){
                                somo += ma[t][f];
                            }
                        }
                    }


        /*Imprimindo a soma das margens*/

                    somafinal = soma + soma2 + soma3 + soma4 + soma5 + soma6 + soma7 + somo;
                    printf("\nSoma= %d", somafinal);

                break;
            case 5:
                    /*Desenhando o rectângulo*/
                    system("cls");
                    printf("Desenhando o rectangulo.....\n");
                    char m[5][5];
    printf("\n");

                    for(t= 0; t<5; t++){
                        for(f=0; f<5; f++){
                            m[t][f] = '*';
                            if(t==0 && f >= 0){
                                printf(" ");
                            }
                            if(t== 1 && f == 0){
                                printf("\n");
                            }
                            if(t==1 && f==1){
                                printf("     %c", m[t][f]);
                                sleep(1);
                            }
                            if(t==1 && f >=2 && f <=3){
                                printf("     %c", m[t][f]);

                            }
                            if(t==1 && f ==3){
                                printf("     %c", m[t][f]);
                            }
                            if(t== 2 && f == 1){
                                sleep(1);
                                printf("\n\n     %c", m[t][f]);
                            }
                            if(t== 2 && f == 3){
                                sleep(1);
                                printf("                 %c\n\n", m[t][f]);
                            }
                            if(t== 3 && f ==1){
                                sleep(1);
                                printf("     %c", m[t][f]);
                            }
                            if(t==3 && f >= 2 && f<=3){
                                printf("     %c", m[t][f]);
                            }
                            if(t==3 && f==3){
                                printf("     %c", m[t][f]);
                            }

                        }
                    }
                    break;
            case 6:
                /*Conversão de metros*/
                system("cls");
                printf("Convertendo metros em decimetros, centimetros e milimetros..");

                printf("\n\nDigite um valor em metros(m): ");
                scanf("%f", &num);

                decimetro = num * 10;
                centimetro = num * 100;
                milimetro = num * 1000;

                printf("\nCorrespondencia de %.2fm em decimetro e: %.2fdm.\n\n",num, decimetro);
                printf("Correspondencia de %.2fm em centimetro e: %.2fcm.\n\n", num, centimetro);
                printf("Correspondencia de %.2fm em milimetros e: %.2fmm.", num, milimetro);
                break;

            case 7:
                system("cls");
                system("pause");

    }

}
    return 0;
}
