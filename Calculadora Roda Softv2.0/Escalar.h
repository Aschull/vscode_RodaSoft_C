void Escalar() // multiplicação por escalar \\

{
    int linha=0,coluna=0,valor=0,resultado=0,aux=0;
    int multiplicador=0;
    int i=0,j=0,k=0;
    char q=0;

                printf("Matriz A\n");
                printf("Informe a quantidade de linhas\n");
                scanf("%d",&i);
                printf("Informa a quantidade de colunas\n");
                scanf("%d",&j);


                if (i >3){
                    printf("Quantidade Invalida\n");
                    Escalar();
                }
                if (j >3){
                    printf("Quantidade Invalida\n");
                    Escalar();
                }



                int matrizA [i][j];
                int matrizC [i][j];



    printf("Insira o Multiplicador \n");
    scanf("%d",&multiplicador);
    printf("\n\n");

    if (i == 1 && j == 1){
        printf("Resultado : %d \n",multiplicador);
        scanf("%s",q);
        VoltarAoMenu();
    }


    printf("Matriz A\n");
    for (linha=0; linha <i; linha++){
        for(coluna=0; coluna <j; coluna++){
            system("cls");
            printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
            scanf("%d",&valor);
            matrizA[linha][coluna]=valor;
            system("cls");
        }
    }

    printf("\n\n");


                // Matriz C \\


    for (linha=0; linha <i; linha++){
        for(coluna=0; coluna <j; coluna++){
            resultado = multiplicador * matrizA[linha][coluna];
            matrizC[linha][coluna] = resultado;
        }
    }

                // Imprime Matriz C \\

    printf("        Matriz C");
    for(linha=0; linha<i; linha++){
        printf("\n\n\t");
        for(coluna=0; coluna<j; coluna++){
            printf("%d\t",matrizC[linha][coluna]);
        }
    }
    printf("\n\n");

    printf("\n\n");


    printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");

        scanf("%d",&k);

        switch(k){

        case 0:
            system("cls");
            Escalar();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
}
