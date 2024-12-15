#include <stdio.h>


int main() {
    printf("Super Trunfo! \n");
    printf("Novo comit\n");

//Definição das variáveis
    char Estado[3];
    char codigo_da_carta[10];
    char Nome_da_cidade[50];    
    int populacao;
    float area_em_km;
    float pib;
    int numero_pontos_turisticos;
    float densidade_populacional;
    float pib_percapita;

//Início da entrada dos dados
    printf("Digite o Estado: \n");
    scanf("%s",Estado);

    printf("Digite o código da carta: \n");
    scanf("%s",codigo_da_carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s",Nome_da_cidade);  

    printf("Digite a população: \n");
    scanf("%d",&populacao);

    printf("Digite a Área: \n");
    scanf("%f",&area_em_km);

    printf("Digite o PIB: \n");
    scanf("%f",&pib);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d",&numero_pontos_turisticos);

//Cálculo das variáveis derivadas
    densidade_populacional= (float) populacao/area_em_km;
    pib_percapita=  (float) pib/(float)populacao;

//Exibição dos dados
    printf("Estado: %s\n",Estado);
    printf("Código da Carta: %s\n",codigo_da_carta);
    printf("Nome da Cidade: %s\n",Nome_da_cidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2f\n",area_em_km);
    printf("Densidade populacional: %.2f\n",densidade_populacional);
    printf("PIB: %.2f\n",pib);
    printf("Número de Pontos Turísticos: %d\n",numero_pontos_turisticos);
    printf("PIB per Capita: %.2f\n",pib_percapita);
    


    return 0;   //Indica que o programa terminou com sucesso


}