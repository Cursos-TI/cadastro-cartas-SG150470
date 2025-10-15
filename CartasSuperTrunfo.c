#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // menus do jogo

    int opcao;

    //Carta 1 variaveis

    char Estado1[20];
    char Codigo1[20];
    char Cidade1[30];
    int Populacao1;
    float Area1;
    float PIB1;
    int pontoTuristico1;
    float Densidade_populacional1;
    float PIB_per_capita1;
    float superpoder1;

    superpoder1 = Populacao1 + Area1 + PIB1 + pontoTuristico1 + PIB_per_capita1 + (1.0 / Densidade_populacional1);

    

   
    char Estado2[20];
    char Codigo2[20];
    char Cidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int pontoTuristico2;
    float Densidade_populacional2;
    float PIB_per_capita2;
    float superpoder2;

    superpoder2 = Populacao2 + Area2 + PIB2 + pontoTuristico2 + PIB_per_capita2 + (1.0 / Densidade_populacional2);


    printf("### BEM VINDO AO JOGO ### \n");

    printf("\n");

    printf("Menu Interativo. ");
    printf("1. Iniciar Jogo \n");
    printf("2. Regras do jogo \n");
    printf("3. Sair do jogo..");
    // codigo do jogo...

    switch (opcao){
    
    case 1:
        printf("Iniciar jogo");
        printf("Carta 1\n");
        printf("Estado(Digite uma letra entre 'A' e 'H'):\n");
        scanf("%s", &Estado1);
        printf("Codigo(Digite a letra do Estado seguinda de um numero de 01 a 04): \n");
        scanf("%s , &codigo1");
        printf("Nome da Cidade: \n");
        scanf("%s , &Cidade");
        printf("População: \n");
        scanf("%d", &Populacao1);
        printf("Area : \n");
        scanf("%f", &Area1);
        printf("Ponto Turistico: \n");
        scanf("%d", &pontoTuristico1);
        printf("\n");


        //operadores matematicos//

        Densidade_populacional1 = (float)Populacao1 / Area1;
        PIB_per_capita1 = (float)PIB1 / Populacao1;
        superpoder1 = Populacao1 + Area1 +PIB1 + pontoTuristico1 + PIB_per_capita1 + (Densidade_populacional1 != 0 ? (1.0 / Densidade_populacional1) 0);
         

       printf("Carta 1\n");
       printf("Estado: %s\n" , Estado1);
       printf("Codigo: %s\n" , Codigo1);
       printf("Nome da Cidade: %s", Cidade1);
       printf("População: %d\n", Populacao1);
       printf("Area: %f\n", Area1);
       printf("PIB: %f\n , Area1");
       printf("Ponto Turistico: %d\n", pontoTuristico1);
       printf("Densidade populacional: %.3f hab/km\n", Densidade_populacional1);
       printf("PIB_per_capita: %.3f Reais\n", PIB_per_capita1);
       printf("Superpoder: %.3f\n ", superpoder1);
       printf("\n");


       printf("Carta 2\n");
       printf("Estado: %s\n" , Estado2);
       printf("Codigo: %s\n" , Codigo2);
       printf("Nome da Cidade: %s", Cidade1);
       printf("População: %d\n", Populacao2);
       printf("Area: %f\n", Area2);
       printf("PIB: %f\n ,PIB2");
       printf("Ponto Turistico: %d\n", pontoTuristico2);
       printf("Densidade populacional: %.3f hab/km\n", Densidade_populacional2);
       printf("PIB_per_capita: %.3f Reais\n", PIB_per_capita2);
       printf("Superpoder: %.3f\n ", superpoder2);


       printf("*** Menu de comparação das Cartas ***");

       printf("1. População \n");
       printf("2. Area \n");
       printf("3. PIB \n");
       printf("4. Ponto Turistico \n");
       printf("5. Densidade_Populacional \n");
       printf("6. PIB_per_capita \n");
       printf("Superpoder \n ");

       int comparacao1 , comparacao2;
       int resultado1 , resultado2;
       printf("\n");

       printf("Escoha o primeiro atributo para comparação.\n");
       scanf("%d", &comparacao1);

       switch (comparacao1)
       {
       case 1:
        printf("População  1 %d\n", Populacao1 );
        printf("População 2 %d\n", Populacao2);
        resultado1 = Populacao1 > Populacao2 ? 1:(Populacao2 > Populacao1)? 2:0;


        break;
       
        case 2:
        printf("Area 1 %f\n" , Area1);
        printf("Area 2 %f\n" , Area2);
        resultado1 = Area1 > Area2 ? 1: (Area2 > Area1) ? 2: 0;

       
        break;

        case 3:
        printf("PIB 1 %f\n", PIB1);
        printf("PIB 2 %f\n " , PIB2);
        resultado1 = PIB1 > PIB2 ? 1: (PIB2 > PIB1) ? 2:0;

        break;

        case 4:
        printf("Ponto Turistico 1 %d\n", pontoTuristico1);
        printf("Ponto Turistico 2 %d\n", pontoTuristico2);
        resultado1 + pontoTuristico1 > pontoTuristico2 ? 1: (pontoTuristico2 > pontoTuristico1)? 2 :0;

        break;

        case 5:
        printf("Densidade_populacional 1 %f\n" , Densidade_populacional1);
        printf("Densidade_Populacional 2 %f\n", Densidade_populacional2);
        resultado1 = Densidade_populacional1 > Densidade_populacional2 ? 1: (Densidade_populacional2 > Densidade_populacional1) ? 2:0;

        break;

        case 6:
        printf("PIB_per_capita 1 %f\n" , PIB_per_capita1);
        printf("PIB_per_capita 2 %f\n" , PIB_per_capita2);
        resultado1 = PIB_per_capita1 > PIB_per_capita2 ? 1: (PIB_per_capita2 > PIB_per_capita1) ? 2:0;

        break;

        case 7:
        printf("Superpoder 1 %f\n" , superpoder1);
        printf("Superpoder 2 %f\n", superpoder2);
        resultado1 = superpoder1 > superpoder2 ?1 : (superpoder2 > superpoder2) ? 2:0;

        break;
        
        printf("\n");

       }
        printf("*** SEGUNDA COMPARAÇÃO ****\n");

        printf("Escolha o segundo atributo para comparação \n");
        printf("\n");

        printf(" Atenção: EScolha um atributo diferente do primeiro\n");
        printf("\n");
        scanf("%d" , &comparacao2);

        switch (comparacao2)
        {
        case 1:
        printf("População 1 %d\n" , Populacao1);
        printf("População 2 %d\n" , Populacao2 );  
    
            
            break;
        

        case 2:
        printf("Area 1 %f\n" , Area1);
        printf("Area 2 %f\n" , Area2);
        resultado2 = Area1 > Area2 ? 1: (Area2 > Area1) ? 2: 0;

       
        break;

        case 3:
        printf("PIB 1 %f\n", PIB1);
        printf("PIB 2 %f\n " , PIB2);
        resultado1 = PIB1 > PIB2 ? 1: (PIB2 > PIB1) ? 2:0;

        break;

        case 4:
        printf("Ponto Turistico 1 %d\n", pontoTuristico1);
        printf("Ponto Turistico 2 %d\n", pontoTuristico2);
        resultado1 + pontoTuristico1 > pontoTuristico2 ? 1: (pontoTuristico2 > pontoTuristico1)? 2 :0;

        break;

        case 5:
        printf("Densidade_populacional 1 %f\n" , Densidade_populacional1);
        printf("Densidade_Populacional 2 %f\n", Densidade_populacional2);
        resultado1 = Densidade_populacional1 < Densidade_populacional2 ? 1: (Densidade_populacional2 < Densidade_populacional1) ? 2:0;

        break;

        case 6:
        printf("PIB_per_capita 1 %f\n" , PIB_per_capita1);
        printf("PIB_per_capita 2 %f\n" , PIB_per_capita2);
        resultado1 = PIB_per_capita1 > PIB_per_capita2 ? 1: (PIB_per_capita2 > PIB_per_capita1) ? 2:0;

        break;

        case 7:
        printf("Superpoder 1 %f\n" , superpoder1);
        printf("Superpoder 2 %f\n", superpoder2);
        resultado1 = superpoder1 > superpoder2 ?1 : (superpoder2 > superpoder2) ? 2:0;    

        break;

        printf("\n");

        printf(" ### RESULTADO DA PRIMEIRA COMPARAÇAÕ ###\n");

        printf("Cidade 1 %s\n", Cidade1);
        printf("Cidade 2 %s\n" , Cidade2);

        if (resultado1 == 1 && resultado2 == 1)
        {
            printf("A carta 1 VENCEU !! ZN");

        }else if (resultado1 == 2 && resultado2 == 2)
        {
            printf("A carta 2  VENCEU !!");
        }else
        {
            printf("O jogo EMPATOU  \n");
        }
        
break;
        
        









        default:

        printf("Opçaõ Invalida");

            break;
        }













       }
        




       return 0;
       
    }































  
