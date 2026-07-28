#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
 // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigoCarta [20], nomeCidade [50];
  int pontosTuristicos;
  float area, pib, densidadePopulacional, pibPerCapita, superPoder;
  unsigned long int populacao;

  char estado2;
  char codigoCarta2 [20], nomeCidade2 [50];
  int pontosTuristicos2;
  float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
  unsigned long int populacao2;

  // Área para entrada de dados
  printf("Carta 1: \n");
  printf("Digite a letra do Estado: ");
  scanf(" %c", &estado);
    
  printf("Digite o Código da Carta: ");
  scanf("%s", codigoCarta);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nomeCidade);

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao);

  printf("Digite a área da cidade: ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos);

  printf("Carta 2: \n");
  printf("Digite a letra do Estado: ");
  scanf(" %c", &estado2);
    
  printf("Digite o Código da Carta: ");
  scanf("%s", codigoCarta2);

  printf("Digite o Nome da Cidade: ");
  scanf("%s", nomeCidade2);

  printf("Digite a população da cidade: ");
  scanf("%lu", &populacao2);

  printf("Digite a área da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  //Calculando Densidade Populacional e PIB per Capita

  densidadePopulacional = (float) populacao / area;
  pibPerCapita = (float) (pib * 1000000000.0) / populacao;

  densidadePopulacional2 = (float) populacao2 / area2;
  pibPerCapita2 = (float) (pib2 * 1000000000.0)/ populacao2;

  //Calculando Super Poder
  superPoder = (float) populacao + area + pib + pontosTuristicos + pibPerCapita + (1 / densidadePopulacional);

  superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

  // Área para exibição dos dados da cidade
  printf("Carta 1: \n");
  printf("Estado: %c \n", estado);
  printf("Código: %s \n", codigoCarta);
  printf("Nome da Cidade: %s \n", nomeCidade);
  printf("População: %lu \n", populacao);
  printf("Área: %.2f km² \n", area);
  printf("PIB: %.2f bilhões de reais \n", pib);
  printf("Números de Pontos Turísticos: %d \n", pontosTuristicos);
  printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional);
  printf("PIB per Capita: %.2f reais \n", pibPerCapita);

  printf("Carta 2: \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigoCarta2);
  printf("Nome da Cidade: %s \n", nomeCidade2);
  printf("População: %lu \n", populacao2);
  printf("Área: %.2f km² \n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Números de Pontos Turísticos: %d \n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

  // Comparação de Cartas:
  // Desenvolva a lógica de comparação entre duas cartas.
  // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

  printf("Comparação de Cartas (Atributo: População): \n");
  printf("Carta 1 - %s (%c): %lu \n", nomeCidade, estado, populacao); 
  printf("Carta 2 - %s (%c): %lu \n", nomeCidade2, estado2, populacao2); 

  if (populacao > populacao2){
    printf("A cidade vencedora é: %s \n", nomeCidade);
  } else {
    printf("A cidade vencedora é: %s \n", nomeCidade2);
  };

    return 0;
}
