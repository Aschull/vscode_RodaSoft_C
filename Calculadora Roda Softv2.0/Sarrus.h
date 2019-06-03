void Sarrus() // Determinante por Sarrus \\

{
    int linha=0,coluna=0,valor=0,resultado=0,x=0,y=0,q=0;
    int DiagonalPrincipal=0,DiagonalSecundaria=0,valorP=0,valorS=0; // variaveis para solução de determinante por sarrus

    int MatrizD2[2][2];
    int MatrizD3[3][3];

    printf("Escolha a ordem da Matriz\n");
    printf("0 - Matriz 1x1\n");
    printf("1 - Matriz 2x2\n");
    printf("2 - Matriz 3x3\n");

    scanf("%d",&x);

    switch(x){

    case 0:

        printf("Informe o valor \n");
        scanf("%d",&y);
        printf("Resultado : %d\n",y);

    break;

    case 1:

        printf("Matriz D\n");
        for (linha=0; linha <2; linha++){
            for(coluna=0; coluna <2; coluna++){
                system("cls");
                printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
                scanf("%d",&valor);
                MatrizD2[linha][coluna]=valor;
                system("cls");
            }
        }

        DiagonalPrincipal = MatrizD2[0][0] * MatrizD2[1][1];
        DiagonalSecundaria = MatrizD2[0][1] * MatrizD2[1][0];

        resultado = DiagonalPrincipal - DiagonalSecundaria;

        printf("Resultado : %d\n",resultado);

    break;

    case 2:

        //Matriz D\\

        printf("Matriz D\n");
        for (linha=0; linha <3; linha++){
            for(coluna=0; coluna <3; coluna++){
                system("cls");
                printf("Informe o valor na posicao : <%d : %d>\n",linha,coluna);
                scanf("%d",&valor);
                MatrizD3[linha][coluna]=valor;
                system("cls");
            }
        }

        DiagonalPrincipal = MatrizD3[0][0] * MatrizD3[1][1] * MatrizD3[2][2] ;
        valorP =  DiagonalPrincipal;
        DiagonalPrincipal = MatrizD3[0][1] * MatrizD3[1][2] * MatrizD3[2][0] ;
        valorP =  DiagonalPrincipal + valorP;
        DiagonalPrincipal = MatrizD3[0][2] * MatrizD3[1][0] * MatrizD3[2][1] ;
        valorP =  DiagonalPrincipal + valorP;

        DiagonalSecundaria = MatrizD3[0][2] * MatrizD3[1][1] * MatrizD3[2][0] ;
        valorS =  DiagonalSecundaria;
        DiagonalSecundaria = MatrizD3[0][0] * MatrizD3[1][2] * MatrizD3[2][1] ;
        valorS =  DiagonalSecundaria + valorS;
        DiagonalSecundaria = MatrizD3[0][1] * MatrizD3[1][0] * MatrizD3[2][2] ;
        valorS =  DiagonalSecundaria + valorS;


        //printf(" Valor Primario : %d\n",valorP);
        //printf(" Valor Secundario : %d\n",valorS);

        resultado = valorP - valorS;

        printf(" Resultado : %d\n ", resultado);

    break;
    }


    printf("\n\n");


    printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");

        scanf("%d",&q);

        switch(q){

        case 0:
            system("cls");
            Sarrus();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
}
