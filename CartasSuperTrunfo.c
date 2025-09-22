#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int Carta1;
  char Estado[20];
  char cidade[50] = "São Paulo";
  char codigo [4] = "A01";
  int População = 12325000;
  float Area = 1521.11;
  float PIB = 699.28;
  int pontoTuristico = 50;
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
