#include <stdio.h>

int main(){

    char estado[8];  //Registra estado da carta
    char codigo[4];  //Registra código da carta 
    char cidade[50]; //Registra cidade da carta 
    int populacao;   //Registra população da carta
    float area;      //Registra area km2 da carta (apenas numeros)
    float pib;       //Registra pib da carta
    int pturisticos; //Registra pontos turisticos da carta

    printf("Bem vindo ao SuperTrunfo \n"); //Programa é iniciado
   
    printf("Insira estado da carta 1 de A-H \n"); //Usuario insere estado da carta 1
    scanf("%s", &estado); 

    printf("Insira o codigo da carta 1, com 1 letra e 2 numeros \n"); //Usuario insere codigo da carta 1; ex: A01, B11, C22
    scanf("%s", &codigo);

    printf("Insira o nome da cidade da carta 1 \n"); //Usuario insere nome da cidade (max 50 letras, sem espaços)
    scanf("%s", &cidade);

    printf("Insira o numero da população da carta 1 \n"); //Usuario insere num da populacao
    scanf("%d", &populacao);

    printf("Insira a área em km2 da carta 1 [xxxx.xx] \n"); //Usuario insere area em km2 (apenas numeros ex: 1000.00)
    scanf("%f", &area);

    printf("Insira o PIB da carta 1 [xxx.xx] \n"); //Usuario insere PIB (apenas numeros ex: 999.99)
    scanf("%f", &pib);

    printf("Insira o número de pontos turísticos da carta 1 \n"); //Usuario insere numero de pontos turisticos
    scanf ("%d", &pturisticos); 
    // ---------------------------------------- Inserção de dados da carta 1 termina aqui

    printf("Vamos ver os dados da sua carta 1. \n \n");  
    printf("ESTADO: %s\n", estado);                        //Mostra estado C1
    printf("CÓDIGO: %s\n", codigo);                        //Mostra código da C1
    printf("CIDADE: %s\n", cidade);                        //Mostra cidade da C1
    printf("POPULAÇÃO: %d\n", populacao);                  //Mostra população da C1
    printf("ÁREA [km2]: %f\n", area);                      //Mostra área em km2 da C1
    printf("PIB: %f\n", pib);                              //Mostra PIB da C1
    printf("PONTOS TURISTICOS: %d\n", pturisticos);        //Mostra pontos turísticos da C1

    
        // ---------------------------------------- Carta 1 termina aqui
        
        printf("\n \n Faça o registro da sua Carta 2 \n \n");

// ---------------------------------------- Dados para registro da carta 2
    char estado2[8];  //Registra estado da carta
    char codigo2[4];  //Registra código da carta 
    char cidade2[50]; //Registra cidade da carta 
    int populacao2;   //Registra população da carta
    float area2;      //Registra area km2 da carta (apenas numeros)
    float pib2;       //Registra pib da carta
    int pturisticos2; //Registra pontos turisticos da carta

    printf("Insira estado da carta 2 de A-H \n"); //Usuario insere estado da carta 2
    scanf("%s", &estado2); 

    printf("Insira o codigo da carta 2, com 1 letra e 2 numeros \n"); //Usuario insere codigo da carta 2; ex: A01, B11, C22
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade da carta 2 \n"); //Usuario insere nome da cidade (max 50 letras, sem espaços)
    scanf("%s", &cidade2);

    printf("Insira o numero da população da carta 2 \n"); //Usuario insere num da populacao
    scanf("%d", &populacao2);

    printf("Insira a área em km2 da carta 2 [xxxx.xx] \n"); //Usuario insere area em km2 (apenas numeros ex: 1000.00)
    scanf("%f", &area2);

    printf("Insira o PIB da carta 2 [xxx.xx] \n"); //Usuario insere PIB (apenas numeros ex: 999.99)
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da carta 2 \n"); //Usuario insere numero de pontos turisticos
    scanf ("%d", &pturisticos2); 
    // ---------------------------------------- Inserção de dados da carta 2 termina aqui

        printf("Vamos ver os dados da sua carta 2. \n \n"); 
    printf("ESTADO: %s\n", estado2);                        //Mostra estado C2
    printf("CÓDIGO: %s\n", codigo2);                        //Mostra código da C2
    printf("CIDADE: %s\n", cidade2);                        //Mostra cidade da C2
    printf("POPULAÇÃO: %d\n", populacao2);                  //Mostra população da C2
    printf("ÁREA [km2]: %f\n", area2);                      //Mostra área em km2 da C2
    printf("PIB: %f\n", pib2);                              //Mostra PIB da C2
    printf("PONTOS TURISTICOS: %d\n", pturisticos2);        //Mostra pontos turísticos da C2
        // ---------------------------------------- Carta 2 termina aqui

        return 0;



}





