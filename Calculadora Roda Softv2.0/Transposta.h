void Transposta() // Transposição de matrizes \\

{
    int linha=0,coluna=0,valor=0,resultado=0,aux=0;
    int i=0,j=0,q=0;

    printf("Matriz A\n");
    printf("Informe a quantidade de linhas\n");
    scanf("%d",&i);
    printf("Informa a quantidade de colunas\n");
    scanf("%d",&j);


    if (i >3){
        printf("Quantidade Invalida\n");
        Transposta();
    }
    if (j >3){
        printf("Quantidade Invalida\n");
        Transposta();
    }

    int matrizA [i][j];


    //Matriz A\\

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

    // Imprime Matriz A Transposta \\

    printf("\n\n");
    printf("         Matriz A");
    for(linha=0; linha<j; linha++){
        printf("\n\n\t");
        for(coluna=0; coluna<i; coluna++){
            printf("%d\t",matrizA[coluna][linha]);
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
            Transposta();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
}
