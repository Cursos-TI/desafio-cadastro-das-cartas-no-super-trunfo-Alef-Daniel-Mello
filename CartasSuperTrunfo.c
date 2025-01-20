#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int City1Code, City2Code = 0;
    char City1Name[50], City2Name[50] = "None";
    int City1Population, City2Population = 0;
    float City1Area, City2Area = 0;
    float City1PIB, City2PIB = 0;
    int City1Places, City2Places = 0;
    
    float Density1, Density2 = 0;
    float PIBpC1, PIBpC2 = 0;

     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Insira o código da cidade :\n");
    scanf("%d",&City1Code);
    printf("Código da cidade definido como : %d\n", City1Code);

    printf("Agora, insira o nome da cidade :\n");
    scanf("%s",&City1Name);
    printf("Nome da cidade definido como : %s\n", City1Name);

    printf("Agora insira a população da cidade :\n");
    scanf("%d",&City1Population);
    printf("População da cidade definida como : %d\n", City1Population);

    printf("Agora insira o PIB :\n");
    scanf("%f",&City1PIB);
    printf("PIB definido como : %f\n", City1PIB);

    printf("Insira também a área da cidade em metros quadrados :\n");
    scanf("%f",&City1Area);
    printf("Área da cidade definida como : %f metros quadrados\n", City1Area);

    printf("Por último, insira a quantidade de pontos turísticos da cidade :\n");
    scanf("%d",&City1Places);
    printf("Quantidade de pontos turísticos definida como : %d\n", City1Places);
    
    PIBpC1 = City1PIB / City1Population;
    Density1 = City1Population / City1Area;

    printf("Valores definidos, mostrando resultados :\n");
    printf(" \n");

    printf("Nome : %s\n", City1Name);
    printf("Código : %d\n", City1Code);
    printf("População : %d\n", City1Population);
    printf("PIB : %f\n", City1PIB);
    printf("PIB per Capita : %f\n", PIBpC1);
    printf("Área : %f metros quadrados\n", City1Area);
    printf("Densidade populacional : %f\n", Density1);
    printf("Pontos turísticos : %d\n", City1Places);

    printf(" \n");
    printf("Agora, iremos configurar a segunda cidade\n");

// Segunda cidade

    printf("Insira o código da cidade :\n");
    scanf("%d",&City2Code);
    printf("Código da cidade definido como : %d\n", City2Code);

    printf("Agora, insira o nome da cidade :\n");
    scanf("%s",&City2Name);
    printf("Nome da cidade definido como : %s\n", City2Name);

    printf("Agora insira a população da cidade :\n");
    scanf("%d",&City2Population);
    printf("População da cidade definida como : %d\n", City2Population);

    printf("Agora insira o PIB :\n");
    scanf("%f",&City2PIB);
    printf("PIB definido como : %f\n", City2PIB);

    printf("Insira também a área da cidade em metros quadrados :\n");
    scanf("%f",&City2Area);
    printf("Área da cidade definida como : %f metros quadrados\n", City2Area);

    printf("Por último, insira a quantidade de pontos turísticos da cidade :\n");
    scanf("%d",&City2Places);
    printf("Quantidade de pontos turísticos definida como : %d\n", City2Places);
    
    PIBpC2 = City2PIB / City2Population;
    Density2 = City2Population / City2Area;

    printf("Valores definidos, mostrando resultados :\n");
    printf(" \n");

    printf("Nome : %s\n", City2Name);
    printf("Código : %d\n", City2Code);
    printf("População : %d\n", City2Population);
    printf("PIB : %f\n", City2PIB);
    printf("PIB per Capita : %f\n", PIBpC2);
    printf("Área : %f metros quadrados\n", City2Area);
    printf("Densidade populacional : %f\n", Density2);
    printf("Pontos turísticos : %d\n", City2Places);

    printf(" \n");
    printf("Cartas cadastradas, iniciando embate!\n");
    printf(" \n");


    printf("Comparando população...\n");
    printf("Primeira cidade maior que a segunda cidade : %d\n", City1Population > City2Population);
    printf("Comparando área...\n");
    printf("Primeira cidade maior que a segunda cidade : %d\n", City1Area > City2Area);
    printf("Comparando PIB...\n");
    printf("Primeira cidade maior que a segunda cidade : %d\n", City1PIB > City2PIB);
    printf("Comparando pontos turísticos...\n");
    printf("Primeira cidade maior que a segunda cidade : %d\n", City1Places > City2Places);
    printf("Comparando Densidade...\n");
    printf("Primeira cidade maior que a segunda cidade : %d\n", Density1 > Density2);
    printf("Comparando PIBperC...\n");
    printf("Primeira cidade maior que a segunda cidade : %d\n", PIBpC1 > PIBpC2);
        printf(" \n");

        printf("Comparando Superpoder!\n");
        long int City1Power = (int)City1Population + City1Area + City1PIB + City1Places;
        long int City2Power = (int)City2Population + City2Area + City2PIB + City2Places;
        printf("Primeira cidade : %d\n",City1Power);
        printf("Segunda cidade : %d\n",City2Power);
        printf("Primeira cidade maior que a segunda cidade : %d\n", City1Power > City2Power);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
