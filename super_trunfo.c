#include <stdio.h>

int main(){

    //especificação de dados da carta 1
    char estado1[50]= "P";
    char codigoDaCarta1[5] = "P01";
    char cidade1[20] = "Recife";
    int populacao1 = 22446688;
    float area1 = 54.321;
    float PIB1 = 123.456;
    int pontosTuristicos1 = 50;
    float divisao;

    //inicio da entrada e saída de dados da carta 1
    printf("\nCarta 1:\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoDaCarta1);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f m²\n", area1);
    printf("PIB: %f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    //operação de divisão, cálculo da densidade populacional
    divisao = populacao1 / area1 ;
    printf("Densidade populacional: %f\n", divisao);

     //operação de divisão, PIB per Capita
    divisao = PIB1 / populacao1 ;
    printf("PIB per Carpita: %f\n", divisao);

    //fim da entrada e saída de dados da carta 1

    //especificação dos dados da carta 2
    char estado2[50]= "B";
    char codigoDaCarta2[5] = "B02";
    char cidade2[20] = "Brasília";
    int populacao2 = 11335577;
    float area2 = 12.345;
    float PIB2 = 654.321;
    int pontosTuristicos2 = 31;

//inicio da entrada e saída de dados da carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigoDaCarta2);
   
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f m²\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

      //operação de divisão, cálculo da densidade populacional
    divisao = populacao2 / area2 ;
    printf("Densidade populacional: %f\n", divisao);

        //operação de divisão, PIB per Capita
    divisao = PIB2 / populacao2 ;
    printf("PIB per Carpita: %f\n", divisao);

    //fim da entrada e saída de dados da carta 2



    return 0;



}