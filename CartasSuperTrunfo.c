#include <stdio.h>

int main(){
  
    // Área para definição das variáveis para armazenar as propriedades das cidades
    int Estado;
    char CódigodaCarta[50];
    char NomedaCidade[50];
    int População;
    float Área;
    float PIB;
    int NúmerodePontosTurísticos;
    
    // Área para entrada de dados
    printf("Digite o estado: ");
    scanf("%i", &Estado);

    printf("Digite o Código da carta: ");
    scanf("%s", &CódigodaCarta);

    printf("Digite o Nome da cidade: ");
    scanf("%s", &NomedaCidade);

    printf("Digite a população: ");
    scanf("%i", &População);

    printf("Digite a área: ");
    scanf("%f", &Área);
    
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    
    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &NúmerodePontosTurísticos); 

    // Área para exibição dos dados da cidade
    printf("DADOS DA CARTA\n");
    printf("Estado: %i\n", Estado);
    printf("Código da carta: %s\n", CódigodaCarta);
    printf("Nome da cidade: %s\n", NomedaCidade);
    printf("População: %i\n", População);
    printf("Área: %.2f Km²\n", Área);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %i\n", NúmerodePontosTurísticos);
   
    return 0;


}
