#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //Carta 01
  char estadoA;
  char codigoDaCartaA[4];
  char nomeDaCidadeA[50];
  int populacaoA;
  float areaKm2A;
  float pibA;
  int pontosTuristicosA;

  //Carta 02
  char estadoB;
  char codigoDaCartaB[4];
  char nomeDaCidadeB[50];
  int populacaoB;
  float areaKm2B;
  float pibB;
  int pontosTuristicosB;

  // Área para entrada de dados

  //Carta 1
  printf("Digite a letra do primeiro Estado:\n");
  scanf("%c", &estadoA);

  printf("Digite o código do primeiro Estado:\n");
  scanf("%s", codigoDaCartaA);

  getchar(); //Limpa o '\n' do buffer
  printf("Digite o nome da primeira Cidade:\n");
  fgets(nomeDaCidadeA, 50, stdin);
  nomeDaCidadeA[strcspn(nomeDaCidadeA, "\n")] = 0;

  printf("Digite a população da primeira Cidade:\n");
  scanf("%d", &populacaoA);

  printf("Digite a área da primeira Cidade:\n");
  scanf("%f", &areaKm2A);

  printf("Digite o PIB da primeira Cidade:\n");
  scanf("%f", &pibA);

  printf("Digite a quantidade de pontos turísticos da primeira Cidade:\n");
  scanf("%d", &pontosTuristicosA);
  getchar();
  

  //Carta 2
  printf("Digite a letra do segundo Estado:\n");
  scanf("%c", &estadoB);

  printf("Digite o código do segundo Estado:\n");
  scanf("%s", codigoDaCartaB);

  getchar(); //Limpa o '\n' do buffer
  printf("Digite o nome da segunda Cidade:\n");
  fgets(nomeDaCidadeB, 50, stdin);
  nomeDaCidadeB[strcspn(nomeDaCidadeB, "\n")] = 0;

  printf("Digite a população da segunda Cidade:\n");
  scanf("%d", &populacaoB);

  printf("Digite a área da segunda Cidade:\n");
  scanf("%f", &areaKm2B);

  printf("Digite o PIB da segunda Cidade:\n");
  scanf("%f", &pibB);  

  printf("Digite a quantidade de pontos turísticos da segunda Cidade:\n");
  scanf("%d", &pontosTuristicosB); 

  
  // Área para exibição dos dados da cidade

  printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estadoA, codigoDaCartaA, nomeDaCidadeA, populacaoA, areaKm2A, pibA, pontosTuristicosA);

  printf("\nCarta 2: \nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estadoB, codigoDaCartaB, nomeDaCidadeB, populacaoB, areaKm2B, pibB, pontosTuristicosB);  


return 0;
}