#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga as instruções para implementar cada parte do desafio.


int main() {
      //  Informações de estados e cidades.
  int populacao1, populacao2;   //%d
  int pontosturisticos1, pontosturisticos2;  //%d
  char estado1 [50], estado2 [50];  //%s
  char codigos1 [50], codigos2 [50]; //%s
  char cidade1[60], cidade2 [60];   //%s
  float area1, area2;  //%f
  float pib1, pib2;  //%f

  //Informações da carta 1:
  printf("\n Vamos jogar!\n");
  printf("Digite os dados da carta 1 \n");
  printf("Digite a letra ou nome do Estado (A-H):\n");

  printf("Digite o primeiro estado:\n");
  scanf("%s", estado1);

  printf("Digite o codigo da carta 1:\n");
  scanf("%s", codigos1);

  printf("Digite sua primeira cidade:\n");
  scanf("%s", cidade1);

  printf("Digite a populacao dessa cidade:\n");
  scanf("%d", &populacao1);

  printf("Digite pontos_turisticos:\n");
  scanf("%d", &pontosturisticos1);

  printf("Digite area da cidade:\n");
  scanf("%f", &area1);

  printf("Digite o pib dessa cidade:\n");
  scanf("%f", &pib1);

  //Informações da carta 2:
  printf("\n Digite os dados da carta 2 \n");
  printf("Digite a letra ou nome do Estado (A-H):\n");

  printf("Digite o segundo estado:\n");
  scanf("%s", estado2);

  printf("Digite o codigo da carta 2:\n");
  scanf("%s", codigos2);

  printf("Digite sua segunda cidade:\n");
  scanf("%s", cidade2);

  printf("Digite a populacao dessa cidade:\n");
  scanf("%d", &populacao2);

  printf("Digite pontos_turisticos:\n");
  scanf("%d", &pontosturisticos2);

  printf("Digite area da cidade:\n");
  scanf("%f", &area2);

  printf("Digite o pib dessa cidade:\n");
  scanf("%f", &pib2);


  // Imprime todas as informações da carta 1
  printf("\n Resultados da Primeira carta:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo da carta: %s\n", codigos1);
  printf("Cidade: %s\n", cidade1);
  printf("Populacao da cidade: %d\n", populacao1);
  printf("Pontos turisticos: %d\n", pontosturisticos1);
  printf("Area da cidade: %f\n", area1);
  printf("Pib da cidade: %f\n", pib1);

  //Imprime todas as inforções da carta 2
  printf("\n Resultados da segunda carta: \n");
  printf("Estado: %s\n", estado2);
  printf("Codigo da carta: %s\n", codigos2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao da cidade: %d\n", populacao2);
  printf("Pontos turisticos: %d\n", pontosturisticos2);
  printf("Area da cidade: %f\n", area2);
  printf("Pib da cidade: %f\n", pib2);
  printf("\n OBRIGADO! \n");

    return 0;
}
