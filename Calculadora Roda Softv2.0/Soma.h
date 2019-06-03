void SomaMatricial()
{
    int x=0,y=0;
    int linha=0,coluna=0,valor=0,resultado=0,aux=0;   //as variaveis x e y representam a ecolha no switch case , Valor = variável para popular a matriz
    int ia=0,ja=0;
    int ib=0,jb=0;
    int ic=0,jc=0;
    int q=0;

    printf("( Matriz A ) \n");
    printf("Informe a quantidade de linhas \n");
    scanf("%d",&ia);
    printf("( Matriz A ) \n");
    printf("Informa a quantidade de colunas\n");
    scanf("%d",&ja);


    if (ia >3){
        printf("Quantidade Invalida de linhas\n");
        system("PAUSE");
        system("cls");
        SomaMatricial();
    }
    if (ja >3){
        printf("Quantidade Invalida de colunas\n");
        system("PAUSE");
        system("cls");
        SomaMatricial();
    }


    if ( ia != ja){
        printf("Numero de Linha diferente do Numero de Colunas\n");
        system("PAUSE");
        system("cls");
        SomaMatricial();
    }

    int matrizA [ia][ja];



    printf("Matriz A\n");
    for (linha=0; linha <ia; linha++){
        for(coluna=0; coluna <ja; coluna++){
            system("cls");
            printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
            scanf("%d",&valor);
            matrizA[linha][coluna]=valor;
            system("cls");
        }

    }

    // Matriz B \\

    printf("( Matriz B ) \n");
    printf("Informe a quantidade de linhas\n");
    scanf("%d",&ib);
    printf("( Matriz B ) \n");
    printf("Informa a quantidade de colunas\n");
    scanf("%d",&jb);


    while (ib >3){
        printf("Quantidade Inválida\n");
        break;
    }
    while (jb >3){
        printf("Quantidade Inválida\n");
        break;
    }

    if (ia != ib && ja != jb){
        printf("Numero de Linhas e Colunas entre as matrizes A e B sao diferentes\n");
        system("PAUSE");
        system("cls");
        SomaMatricial();
    }


    int matrizB [ib][jb];

    for (linha=0; linha <ib; linha++){
        for(coluna=0; coluna <jb; coluna++){
            system("cls");
            printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
            scanf("%d",&valor);
            matrizB[linha][coluna]=valor;
            system("cls");
        }
    }

    // Imprime Matriz A \\

    printf("\n");
    printf("         Matriz A");
    for(linha=0; linha<ia; linha++){
        printf("\n\n\t");
        for(coluna=0; coluna<ja; coluna++){
            printf("%d\t",matrizA[linha][coluna]);
        }
    }

    // Imprime Matriz B \\

    printf("\n\n");
    printf("         Matriz B");
    for(linha=0; linha<ib; linha++){
        printf("\n\n\t");
        for(coluna=0; coluna<jb; coluna++){
            printf("%d\t",matrizB[linha][coluna]);
        }
    }
    printf("\n\n");

    // Matriz C \\

    int matrizC [ia][ja];

    for (linha=0; linha <ia; linha++){
        for(coluna=0; coluna <ja; coluna++){
            resultado = matrizA[linha][coluna] + matrizB[linha][coluna];
            matrizC[linha][coluna] = resultado;
        }
    }
    // Imprime Matriz C \\

    printf("         Matriz C");
    for(linha=0; linha<ia; linha++){
        printf("\n\n\t");
        for(coluna=0; coluna<ja; coluna++){
            printf("%d\t",matrizC[linha][coluna]);
        }
    }
    printf("\n\n");


    printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");

        scanf("%d",&q);

        switch(q){

        case 0:
            system("cls");
            SomaMatricial();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
}
