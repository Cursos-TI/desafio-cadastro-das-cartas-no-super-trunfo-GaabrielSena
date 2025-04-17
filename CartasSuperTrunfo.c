#include <stdio.h>

int main(){
    //Dados das Variáveis da carta 1.
    char estado1[50];
    int codigocarta1;
    char nomecidade1[50];
    float populacao1;
    float area1;
    float pib1;
    int pturisticos1;

    //Dados das varáveis da carta 2.
    char estado2[50];
    int codigocarta2;
    char nomecidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int pturisticos2;

    //Dados da carta número 1.
    printf("Bem Vindo ao Jogo Super Trunfo \n");
    printf("Preencha corretamente os dados da carta 1.\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Código da Carta: \n");
    scanf("%d", &codigocarta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomecidade1);

    printf("Digite a População: \n");
    scanf("%f", &populacao1);

    printf("Digite a Área Populacional: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Túristicos: \n");
    scanf("%d", &pturisticos1);


    //Dados da carta numero 2
    printf("Parabéns!!! Você preencheu todos os dados da carta 1.\n");
    printf("Vamos continuar, preencha os dados da carta 2 a seguir.\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o Código da Carta: \n");
    scanf("%d", &codigocarta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Digite a População: \n");
    scanf("%f", &populacao2);

    printf("Digite a Área Populacional: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Túristicos: \n");
    scanf("%d", &pturisticos2);

    printf("~~~~~~~~~~~~~~~~~~~\n");
    //Exibição dos dados da carta 1.
    printf("Super Jogo Trunfo \n Carta 1 \n" );
    printf("---------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %d\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %f\n", populacao1);
    printf("Área Populacional: %f\n", &area1);
    printf("PIB da cidade: %f\n", pib1);
    printf("Numero de Pontos Túristicos: %d\n", pturisticos1);

    printf("////////////////////\n");

    //Exibição dos dados da carta 2.
    printf("Super Jogo Trunfo\n Carta 2 \n");
    printf("---------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %d\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %f\n", populacao2);
    printf("Área Populacional: %f\n", &area2);
    printf("PIB da cidade: %f\n", pib2);
    printf("Numero de Pontos Túristicos: %d\n", pturisticos2);

    printf("////////////////////\n");


}
