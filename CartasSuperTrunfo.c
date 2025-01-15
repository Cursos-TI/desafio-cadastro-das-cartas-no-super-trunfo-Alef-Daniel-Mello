#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int CityCode = 123;
    char CityName[50] = "None";
    int CityPopulation = 100;
    float CityArea = 25.5;
    int CityPlaces = 23;
    
     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    printf("Insira o código da cidade :\n");
    scanf("%d",&CityCode);
    printf("Código da cidade definido como : %d\n", CityCode);

    printf("Agora, insira o nome da cidade :\n");
    scanf("%s",&CityName);
    printf("Nome da cidade definido como : %s\n", CityName);

    printf("Agora insira a população da cidade :\n");
    scanf("%d",&CityPopulation);
    printf("População da cidade definida como : %d\n", CityPopulation);

    printf("Insira também a área da cidade em metros quadrados :\n");
    scanf("%f",&CityArea);
    printf("Área da cidade definida como : %f metros quadrados\n", CityArea);

    printf("Por último, insira a quantidade de pontos turísticos da cidade :\n");
    scanf("%d",&CityPlaces);
    printf("Quantidade de pontos turísticos definida como : %d\n", CityPlaces);
    
    printf("Valores definidos, mostrando resultados :\n");

    printf("Nome : %s\n", CityName);
    printf("Código : %d\n", CityCode);
    printf("População : %d\n", CityPopulation);
    printf("Área : %f metros quadrados\n", CityArea);
    printf("Pontos turísticos : %d\n", CityPlaces);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
