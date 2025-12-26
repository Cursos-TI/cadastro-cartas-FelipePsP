#include <stdio.h>

int main(){
    
    char Estado1[50],Estado2[50];
    char CódigodaCarta1[50],CódigodaCarta2[50];
    char NomedaCidade1[50],NomedaCidade2[50];
    int População1,População2;
    float Área1,Área2;
    float PIB1,PIB2;
    int NúmerodePontosTurísticos1,NúmerodePontosTurísticos2;
    float DensidadePopulacional1,DensidadePopulacional2;
    float PIBpercapita1,PIBpercapita2;
    float SuperPoder1,SuperPoder2;

    //COLETA DE DADOS CARTA 1
    printf("* Digite os dados da primeira carta\n");
    printf("Digite o estado: ");
    scanf("%s", Estado1);

    printf("Digite o Código da carta: ");
    scanf("%s", &CódigodaCarta1);

    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade1);
    
    printf("Digite a população: ");
    scanf("%i", &População1);

    printf("Digite a área: ");
    scanf("%f", &Área1);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    
    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &NúmerodePontosTurísticos1); 

    //CALCULO DA DENSIDADE Carta 1 
    DensidadePopulacional1 = População1 / Área1;

    //CALCULO DO PIB Per Capita Carta 1
    PIBpercapita1 = (PIB1 * 1000000000.0f) / População1;

    //CALCULO DO SUPER PODER Carta 1
    SuperPoder1 = (População1 + Área1 + PIB1 + NúmerodePontosTurísticos1 +
         PIBpercapita1 + (1 / DensidadePopulacional1));
     

//----------------------------------------------------------------------------------------------
    //COLETA DE DADOS CARTA 2
    printf("* Digite os dados da segunda carta\n");
    printf("Digite o estado: ");
    scanf("%s", Estado2);

    printf("Digite o Código da carta: ");
    scanf("%s", &CódigodaCarta2);

    printf("Digite o Nome da cidade: ");
    scanf(" %[^\n]", NomedaCidade2);
    
    printf("Digite a população: ");
    scanf("%i", &População2);

    printf("Digite a área: ");
    scanf("%f", &Área2);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &NúmerodePontosTurísticos2); 

    //CALCULO DA DENSIDADE Carta 2
    DensidadePopulacional2 = População2 / Área2;

    //CALCULO DO PIB Per Capita Carta 2
    PIBpercapita2 = (PIB2 * 1000000000.0f) / População2;

    //CALCULO DO SUPER PODER Carta 2
    SuperPoder2 = (População2 + Área2 + PIB2 + NúmerodePontosTurísticos2 + 
        PIBpercapita2 + (1 / DensidadePopulacional2));

//----------------------------------------------------------------------------------------------   

    //Amostra dos dados
    printf("***DADOS DA CARTA 1***\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %i\n", CódigodaCarta1);
    printf("Nome da cidade: %s\n", NomedaCidade1);
    printf("População: %i\n", População1);
    printf("Área: %.2f Km²\n", Área1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de pontos turisticos: %i\n", NúmerodePontosTurísticos1);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita1);
    printf("O super poder é: %.2f \n\n ", SuperPoder1);

    printf("***DADOS DA CARTA 2***\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %i\n", CódigodaCarta2);
    printf("Nome da cidade: %s\n", NomedaCidade2);
    printf("População: %i\n", População2);
    printf("Área: %.2f Km²\n", Área2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %i\n", NúmerodePontosTurísticos2);
    printf("Densidade populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf("O super poder é: %.2f \n\n ", SuperPoder2);

    //comparaçoes entre os valores das cartas
    printf("*COMPARAÇÃO DAS CARTAS*\n");
    printf("Populaçao: %i\n", População1 > População2);
    printf("Área: %i\n", Área1 > Área2);
    printf("PIB: %i\n", PIB1 > PIB2);
    printf("Pontos turísticos: %i\n", NúmerodePontosTurísticos1 > NúmerodePontosTurísticos2);
    printf("Densidade Populacional: %i\n", DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: %i\n", PIBpercapita1 > PIBpercapita2);
    printf("Super poder: %i\n", SuperPoder1 > SuperPoder2);
   
   
    return 0;
