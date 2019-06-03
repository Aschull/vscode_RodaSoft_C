void Cramer()
{
    int q=0;
    float x=0,y=0,z=0;
    int x1=0,y1=0,z1=0,r1=0;
    int x2=0,y2=0,z2=0,r2=0;
    int x3=0,y3=0,z3=0,r3=0;
    int dp=0,dx=0,dy=0,dz=0;

    printf("Equacao 1\n");
    printf("Informe x\n");
    scanf("%d",&x1);
    fflush;
    printf("Informe y\n");
    scanf("%d",&y1);
    fflush;
    printf("Informe z\n");
    scanf("%d",&z1);
    fflush;
    printf("Informe a Igualdade \n");
    scanf("%d",&r1);
    fflush;

    printf("%d %d %d = %d \n",x1,y1,z1,r1);
    system("cls");

    printf("Equacao 2\n");
    printf("Informe x\n");
    scanf("%d",&x2);
    printf("Informe y\n");
    scanf("%d",&y2);
    printf("Informe z\n");
    scanf("%d",&z2);
    printf("Informe a Igualdade \n");
    scanf("%d",&r2);

    printf("%d %d %d = %d \n",x2,y2,z2,r2);
    system("cls");

    printf("Equacao 3\n");
    printf("Informe x\n");
    scanf("%d",&x3);
    printf("Informe y\n");
    scanf("%d",&y3);
    printf("Informe z\n");
    scanf("%d",&z3);
    printf("Informe a Igualdade \n");
    scanf("%d",&r3);

    printf("%d %d %d = %d \n",x3,y3,z3,r3);
    system("cls");

    dp = (x1 * y2 * z3) + (y1 * z2 * x3) + (z1 * x2 * y3) - ((z1 * y2 * x3) + (x1 * z2 * y3) + (y1 * x2 * z3));

    printf("Determinante principal : %d",dp);
    printf("\n");


    dx = ((r1 * y2 * z3) + (y1 * z2 * r3) + (z1 * r2 * y3)) - ((z1 * y2 * r3) + (r1 * z2 * y3) + (y1 * r2 * z3));

    printf("Determinante X : %d",dx);
    printf("\n");

    if(dp == 0 && dx != 0){
        printf("Sistema Impossivel\n\n");

        printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");


        scanf("%d",&q);

        switch(q){

        case 0:
            system("cls");
            Cramer();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
    }

    if(dp == 0 && dx == 0){
        printf("S(%d, %d, %d)\n",x,y,z);
        printf("Sistema Possivel Indeterminado\n\n");

        printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");

        scanf("%d",&q);

        switch(q){

        case 0:
            system("cls");
            Cramer();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
    }

    dy = ((x1 * r2 * z3) + (r1 * z2 * x3) + (z1 * x2 * r3)) - ((z1 * r2 * x3) + (x1 * z2 * r3) + (r1 * x2 * z3));

    printf("Determinante Y : %d",dy);
    printf("\n");

    dz = ((x1 * y2 * r3) + (y1 * r2 * x3) + (r1 * x2 * y3)) - ((r1 * y2 * x3) + (x1 * r2 * y3) + (y1 * x2 * r3));

    printf("Determinante Z : %d",dz);
    printf("\n");


    if(dp != 0){
        x = (dx/dp);
        y = (dy/dp);
        z = (dz/dp);
        printf("S (%0.0f, %0.0f, %0.0f)\n",x,y,z);
        printf("Sistema Possivel Determinado\n");
    }


    printf("\n\n");


        printf("0 - Outra Operacao\n");
        printf("1 - Menu Principal\n");

        scanf("%d",&q);

        switch(q){

        case 0:
            system("cls");
            Cramer();
        break;

        case 1:
            system("cls");
            VoltarAoMenu();
        break;

            default : ("Opcao Invalida\n");
        break;

        }
}
