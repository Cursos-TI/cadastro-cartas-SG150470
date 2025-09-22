#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int Carta1;
  int Carta2;
  char Estado1[20];
  char Estado2[20];
  char Cidade1[50] = "São Paulo";
  char Cidade2[30] = "Rio de Janeiro;
  char codigo1[4] = "A01";
  char codigo2[4] = "B02";
  int Populacao1 = 12325000;
  int Populacao2 = 6748000;
  float Area1 = 1521.11;
  float Area2 = 1200.25
  float PIB1 = 699.28;
  float PIB2 = 300.50;
  int pontoTuristico1 = 50;
  int pontoTuristico2 = 30

  
  // Área para entrada de dados
  printf("Digite o codigo: ");
  scanf("%s" , &codigo);

  printf("Digite a populaçao: \n");
  scanf("%f\n" , &Populacao);

  printf("Digite a Area: \n");
  scanf("%f"\n ,&Area);

  printf(Digite o PIB: \n");
  scanf("%f"\n , &PIB);

  printf("Digite o ponto Turistico: \n");
  scanf("%d"\n , &pontoTuristico);  
  


  // Área para exibição dos dados da cidade

  printf("A cidade é: %s\n" , cidade);
  printf("O codigo é: %c\n" , codigo);
  printf("A Populacao é: %f\n" , Populacao);
  printf("A Area é: %f\n" , Area);
  printf("O PIB é : %f\n" , PIB);
  printf("O ponto Turistico é: %d\n", pontoTuristico);

  

return 0;
} 
