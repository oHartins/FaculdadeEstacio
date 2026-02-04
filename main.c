#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[3]; // comporta siglas como "SP"
  char codigo_da_carta1[4];
  char nome_da_cidade1[50];
  int populacao1;
  float area1;
  float pib_per_capita1;
  int numero_de_pontos_turisticos1;
  
  // Área para entrada de dados da primeira cidade
  printf("\n--- Dados da Primeira Cidade ---\n");
  printf("Digite o estado (ex: SP): ");
  scanf("%2s", estado1); // %2s limita a 2 letras
  
  printf("Digite o código da carta: ");
  scanf("%3s", codigo_da_carta1);
  
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_da_cidade1);
  
  printf("Digite a população: ");
  scanf("%d", &populacao1);
  
  printf("Digite a área (em km²): ");
  scanf("%f", &area1);
  
  printf("Digite o PIB per capita: ");
  scanf("%f", &pib_per_capita1);
  
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numero_de_pontos_turisticos1);

  // Área para exibição dos dados da cidade
  printf("\n--- Carta da Primeira Cidade ---\n");
  printf("Estado: %s\n", estado1);
  printf("Código da Carta: %s\n", codigo_da_carta1);
  printf("Nome da Cidade: %s\n", nome_da_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB per capita: %.2f\n", pib_per_capita1);
  printf("Número de Pontos Turísticos: %d\n\n\n", numero_de_pontos_turisticos1);

  // Área para definição das variáveis para armazenar as propriedades da segunda cidades
  char estado2[3]; // comporta siglas como "SP"
  char codigo_da_carta2[4];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib_per_capita2;
  int numero_de_pontos_turisticos2;
  
  // Área para entrada de dados da segunda cidade
  printf("\n--- Dados da Segunda Cidade ---\n");
  printf("Digite o estado (ex: SP): ");
  scanf("%2s", estado2); // %2s limita a 2 letras
  
  printf("Digite o código da carta: ");
  scanf("%3s", codigo_da_carta2);
  
  printf("Digite o nome da cidade: ");
  scanf(" %[^\n]", nome_da_cidade2);
  
  printf("Digite a população: ");
  scanf("%d", &populacao2);
  
  printf("Digite a área (em km²): ");
  scanf("%f", &area2);
  
  printf("Digite o PIB per capita: ");
  scanf("%f", &pib_per_capita2);
  
  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &numero_de_pontos_turisticos2);

  // Área para exibição dos dados da cidade
  printf("\n--- Carta da Cidade ---\n");
  printf("Estado: %s\n", estado2);
  printf("Código da Carta: %s\n", codigo_da_carta2);
  printf("Nome da Cidade: %s\n", nome_da_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB per capita: %.2f\n", pib_per_capita2);
  printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);

return 0;
} 