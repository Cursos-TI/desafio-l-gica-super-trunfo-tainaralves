#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int comparacao1, comparacao2, pontosCarta1, pontosCarta2;
  char estado;
  char codigoCarta[20], nomeCidade[50];
  int pontosTuristicos;
  float area, pib, densidadePopulacional, pibPerCapita, superPoder;
  unsigned long int populacao;

  char estado2;
  char codigoCarta2[20], nomeCidade2[50];
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

  // Calculando Densidade Populacional e PIB per Capita

  densidadePopulacional = (float)populacao / area;
  pibPerCapita = (float)(pib * 1000000000.0) / populacao;

  densidadePopulacional2 = (float)populacao2 / area2;
  pibPerCapita2 = (float)(pib2 * 1000000000.0) / populacao2;

  // Calculando Super Poder
  superPoder = (float)populacao + area + pib + pontosTuristicos + pibPerCapita + (1 / densidadePopulacional);

  superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

  // Área para exibição dos dados da cidade
  // printf("Carta 1: \n");
  // printf("Estado: %c \n", estado);
  // printf("Código: %s \n", codigoCarta);
  // printf("Nome da Cidade: %s \n", nomeCidade);
  // printf("População: %lu \n", populacao);
  // printf("Área: %.2f km² \n", area);
  // printf("PIB: %.2f bilhões de reais \n", pib);
  // printf("Números de Pontos Turísticos: %d \n", pontosTuristicos);
  // printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional);
  // printf("PIB per Capita: %.2f reais \n", pibPerCapita);

  // printf("Carta 2: \n");
  // printf("Estado: %c \n", estado2);
  // printf("Código: %s \n", codigoCarta2);
  // printf("Nome da Cidade: %s \n", nomeCidade2);
  // printf("População: %lu \n", populacao2);
  // printf("Área: %.2f km² \n", area2);
  // printf("PIB: %.2f bilhões de reais \n", pib2);
  // printf("Números de Pontos Turísticos: %d \n", pontosTuristicos2);
  // printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacional2);
  // printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

  // Primeira comparação de Atributos com switch
  printf("Escolha uma opção no menu abaixo para realizar a 1ª comparação das cartas: \n");
  printf("Opção 1: População \n");
  printf("Opção 2: Área \n");
  printf("Opção 3: PIB \n");
  printf("Opção 4: Número de pontos turísticos \n");
  printf("Opção 5: Densidade demográfica \n");
  scanf("%d", &comparacao1);

  printf("As cidade avaliadas são: %s, %s\n", nomeCidade, nomeCidade2);

  switch (comparacao1)
  {
  case 1:
    printf("Atributo selecionado: População \n");
    printf("Carta 1: %lu \n", populacao);
    printf("Carta 2: %lu \n", populacao2);
    pontosCarta1 = populacao > populacao2 ? 1 : 0;
    break;

  case 2:
    printf("Atributo selecionado: Área \n");
    printf("Carta 1: %.2f km² \n", area);
    printf("Carta 2: %.2f km² \n", area2);
    pontosCarta1 = area > area2 ? 1 : 0;
    break;

  case 3:
    printf("Atributo selecionado: PIB \n");
    printf("Carta 1:  %.2f bilhões de reais \n", pib);
    printf("Carta 2:  %.2f bilhões de reais \n", pib2);
    pontosCarta1 = pib > pib2 ? 1 : 0;
    break;

  case 4:
    printf("Atributo selecionado: Número de pontos turísticos \n");
    printf("Carta 1:  %d \n", pontosTuristicos);
    printf("Carta 2:  %d \n", pontosTuristicos2);
    pontosCarta1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
    break;

  case 5:
    printf("Atributo selecionado: Densidade Populacional \n");
    printf("Carta 1:  %.2f hab/km² \n", densidadePopulacional);
    printf("Carta 2:  %.2f hab/km² \n", densidadePopulacional2);
    pontosCarta1 = densidadePopulacional < densidadePopulacional2 ? 1 : 0;
    break;
  default:
    printf("Opção escolhida inválida!");
    break;
  }

  // Segunda comparação de Atributos com switch
  printf("Escolha uma opção no menu abaixo para realizar a 2ª comparação das cartas: \n");
  printf("Opção 1: População \n");
  printf("Opção 2: Área \n");
  printf("Opção 3: PIB \n");
  printf("Opção 4: Número de pontos turísticos \n");
  printf("Opção 5: Densidade demográfica \n");
  scanf("%d", &comparacao2);

  if (comparacao1 == comparacao2)
  {
    printf("Opção inválida, foi selecionado o mesmo atributo! \n");
  }
  else
  {
    switch (comparacao2)
    {
    case 1:
      printf("Atributo selecionado: População \n");
      printf("Carta 1: %lu \n", populacao);
      printf("Carta 2: %lu \n", populacao2);
      pontosCarta2 = populacao < populacao2 ? 1 : 0;
      break;

    case 2:
      printf("Atributo selecionado: Área \n");
      printf("Carta 1: %.2f km² \n", area);
      printf("Carta 2: %.2f km² \n", area2);
      pontosCarta2 = area < area2 ? 1 : 0;
      break;

    case 3:
      printf("Atributo selecionado: PIB \n");
      printf("Carta 1:  %.2f bilhões de reais \n", pib);
      printf("Carta 2:  %.2f bilhões de reais \n", pib2);
      pontosCarta2 = pib < pib2 ? 1 : 0;
      break;

    case 4:
      printf("Atributo selecionado: Número de pontos turísticos \n");
      printf("Carta 1:  %d \n", pontosTuristicos);
      printf("Carta 2:  %d \n", pontosTuristicos2);
      pontosCarta2 = pontosTuristicos < pontosTuristicos2 ? 1 : 0;
      break;

    case 5:
      printf("Atributo selecionado: Densidade Populacional \n");
      printf("Carta 1:  %.2f hab/km² \n", densidadePopulacional);
      printf("Carta 2:  %.2f hab/km² \n", densidadePopulacional2);
      pontosCarta2 = densidadePopulacional > densidadePopulacional2 ? 1 : 0;
      break;
    default:
      printf("Opção escolhida inválida!");
      break;
    }
  }

  if ((pontosCarta1 == 1 && pontosCarta2 == 1) || (pontosCarta1 == 0 && pontosCarta2 == 0)){
    printf("O jogo empatou!");
  }
  else if (pontosCarta1 == 1 && pontosCarta2 == 0){
    printf("A carta 1 venceu");
  }
  else{
    printf("A carta 2 venceu!");
  }

  return 0;
}
