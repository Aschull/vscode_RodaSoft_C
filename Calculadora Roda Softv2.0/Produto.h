void Produto() //Produto de matrizes\\

{
    int linha=0,coluna=0,valor=0,resultado=0,aux=0;
    int ia=0,ja=0,q=0,k=0;
    int ib=0,jb=0;
    int ic=0,jc=0;


    printf("Matriz A\n");
    printf("Informe a quantidade de linhas\n");
    scanf("%d",&ia);
    fflush;
    printf("Informa a quantidade de colunas\n");
    scanf("%d",&ja);
    fflush;
    q = ia;

    if (ia >3){
        printf("Quantidade Invalida\n");
        Produto();
    }
    if (ja >3){
        printf("Quantidade Invalida\n");
        Produto();
    }


    int matrizA [ia][ja];

    //Matriz A\\

    printf("Matriz A\n");
        for (linha=0; linha <ia; linha++){
            for(coluna=0; coluna <ja; coluna++){
                system("cls");
                printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
                scanf("%d",&valor);
                fflush;
                matrizA[linha][coluna]=valor;
                system("cls");
            }
        }

    printf("Matriz B\n");

    printf("Informe a quantidade de linhas\n");
    scanf("%d",&ib);
    fflush;
    printf("Informa a quantidade de colunas\n");
    scanf("%d",&jb);
    fflush;

    int matrizB [ib][jb];

    if (ib >3){
        printf("Quantidade Invalida\n");
        Produto();
    }
    if (jb >3){
        printf("Quantidade Invalida\n");
        Produto();
    }
    if (q != jb){
        printf("Quantidade de linhas diferente de colunas\n");
        Produto();
    }


    // Matriz B \\

    for (linha=0; linha <ib; linha++){
        for(coluna=0; coluna <jb; coluna++){
            system("cls");
            printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
            scanf("%d",&valor);
            fflush;
            matrizB[linha][coluna]=valor;
            system("cls");
        }
    }


    // Imprime Matriz A \\

    printf("\n\n");
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

    int x=0;

    int matrizC [ib][ja];

    for (linha=0; linha <ia; linha++){
        for(coluna=0; coluna <jb; coluna++){
            matrizC[linha][coluna] = 0;

            for(x=0; x<ja; x++){
                resultado += matrizA[linha][x] * matrizB[x][coluna];
                matrizC[linha][coluna] = resultado;
            }
            resultado = 0;
        }
    }


    // Imprime Matriz C \\


    printf("         Matriz C");
    for(linha=0; linha<ia; linha++){
        printf("\n\n\t");
        fflush;
        for(coluna=0; coluna<jb; coluna++){
            printf("%d\t",matrizC[linha][coluna]);
        }
    }
    printf("\n\n");

    printf("\n\n");


    printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");

        scanf("%d",&q);

        switch(q){

        case 0:
            system("cls");
            Produto();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
}
