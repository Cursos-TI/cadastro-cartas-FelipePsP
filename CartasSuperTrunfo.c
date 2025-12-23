#include <stdio.h>

int main(){
    
    char Estado[50];
    char CódigodaCarta[50];
    char NomedaCidade[50];
    int População;
    float Área;
    float PIB;
    int NúmerodePontosTurísticos;
    float DensidadePopulacional;
    float PIBpercapita;



  //COLETA DE DADOS
    printf("Digite o estado: ");
    scanf("%s", Estado);

    printf("Digite o Código da carta: ");
    scanf("%s", &CódigodaCarta);

    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade);
    
    printf("Digite a população: ");
    scanf("%i", &População);

    printf("Digite a área: ");
    scanf("%f", &Área);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    
    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &NúmerodePontosTurísticos); 

  //CALCULO DA DENSIDADE
    DensidadePopulacional = População / Área;

  //CALCULO DO PIB Per Capita
    PIBpercapita = (PIB * 1000000000.0f) / População;
   

  //Amostra dos dados
    printf("***DADOS DA CARTA***\n");
    printf("Estado: %s\n", Estado);
    printf("Código da carta: %i\n", CódigodaCarta);
    printf("Nome da cidade: %s\n", NomedaCidade);
    printf("População: %i\n", População);
    printf("Área: %.2f Km²\n", Área);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %i\n", NúmerodePontosTurísticos);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita);
   

   
    return 0;
