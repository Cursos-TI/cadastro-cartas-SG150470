#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 
// Area  para determinar as variaveis
 char codigo1[4]= "A01";
 char codigo2[4]= "B02";
 char Estado1[30]= "SP";
 char Estado2[30]= "RJ";
 char nomeCidade1[30] ="Sãopaulo";
 char nomeCidade2[30]= "Riodejaneiro";
 int populacao1 = 12325000;
 int populacao2 = 6748000;
 float Area1 = 15211.11;
 float Area2 = 1200.25;
 float PIB1 = 699.28;
 float PIB2 = 300.50;
 int pontoTuristico1= 50;
 int pontoTuristico2 = 30;

 //Area para entrada de dados
 printf("Digite o codigo1 : ");
 scanf("%s" , &codigo1 );

 printf("Digite o codigo2:  ");
 scanf("%s" , &codigo2);
 
 printf("Digite o Estado1:  ");
 scanf("%s", &Estado1);

 printf("Digite o Estado2: ");
 scanf("%s", &Estado2);
 

 printf("Digite o nome da Cidade1: ");
 scanf("%s", &nomeCidade1);
 
 printf("Digite o nome da Cidade2: ");
 scanf("%s", &nomeCidade2);

printf("Digite a populacao1: ");
scanf("%d" , &populacao1 );

printf("Digite a populacao2: ");
scanf("%d", &populacao2);

printf("Digite a Area1: ");
scanf("%f", &Area1 );

printf("Digite a Area2: ");
scanf("%f" , &Area2);


printf("Digite o PIB1:  ");
scanf("%f", &PIB1 );

printf("Digite o PIB2:  ");
scanf("%f", &Area2); 


printf("Digite o ponto Turistico1: ");
scanf("%d" , &pontoTuristico1 );

printf("Digite o ponto Turistisco2:  ");
scanf("%d", &pontoTuristico2);


printf("O codigo1 é: %s\n", codigo1 );
printf("O codigo2 é: %s\n", codigo2 );
printf("O Estado1 é: %s\n", Estado1 );
printf("O Estado2 é: %s\n", Estado2 );
printf("A Cidade1 é: %s\n", nomeCidade1 );
printf("A Cidade2 é: %s\n", nomeCidade2 );
printf("A populacao1 é : %d\n" , populacao1);
printf("A populacao2 é : %d\n" , populacao2);
printf("A Area1 é : %f\n" , Area1 );
printf("A Area2 é : %f\n" , Area2);
printf("O PIB1 é: %f\n" , PIB1);
printf("O PIB2 é: %f\n" ,PIB2);
printf("O ponto Turistisco1 é : %d\n", pontoTuristico1);
printf("O ponto Turistisco2 é : %d\n", pontoTuristico2);












    return 0;
 }