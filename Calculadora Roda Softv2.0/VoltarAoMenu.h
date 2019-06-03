int VoltarAoMenu()
{
    int x=0;

    // Calculadora Matricial \\

    printf("\n");
    printf("\n");
    printf("      +---------------------------------------+\n");
    printf("      |   Calculadora Roda Soft               |\n");
    printf("      |                                       |\n");
    printf("      |          MENU                         |\n");
    printf("      |                                       |\n");
    printf("      |   1 - Soma de Matriz                  |\n");
    printf("      |   2 - Produto de Matriz               |\n");
    printf("      |   3 - Subtracao de Matriz             |\n");
    printf("      |   4 - Transposicao de Matriz          |\n");
    printf("      |   5 - Determinante por Sarrus         |\n");
    printf("      |   6 - Solucao de Sistemas por Cramer  |\n");
    printf("      |   7 - Multiplicacao Escalar           |\n");
    printf("      |   0 - Sair                            |\n");
    printf("      |                                       |\n");
    printf("      +---------------------------------------+\n");
    printf("\n");
    printf("\n");
    scanf("%d",&x);
    system("cls");

        switch(x){
            case 0: // Sair \\

                printf("\n\n");
                printf("Encerrando Operacoes \n");
                printf("\n\n");
                ExitProcess(0);

            break;


            case 1: // Soma de Matriz \\

                SomaMatricial();


            break;

            case 2: // Produto de Matriz \\

                Produto();

            break;


            case 3: // subtracao de matriz \\

                Subtracao();

            break;


            case 4: // transposicao de matriz \\

                Transposta();

            break;


            case 5: // determinante por sarrus \\

                Sarrus();

            break;


            case 6: // solucao por cramer \\

                Cramer();

            break;


            case 7: // multiplicacao escalar \\

                Escalar();

            break;

            default:
                printf("Opcao Invalida\n");
        }

    system("PAUSE");
    return(0);
}
