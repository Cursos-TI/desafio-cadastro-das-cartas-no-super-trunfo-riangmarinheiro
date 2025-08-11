#include <stdio.h>

int main(){

    char estado[8];  //Registra estado da carta
    char codigo[4];  //Registra código da carta 
    char cidade[50]; //Registra cidade da carta 
    int populacao;   //Registra população da carta
    float area;      //Registra area km2 da carta (apenas numeros)
    float pib;       //Registra pib da carta
    int pturisticos; //Registra pontos turisticos da carta


    printf("Bem vindo ao registro de cartas do SuperTrunfo \n"); //Programa é iniciado
   
    printf("Insira estado da carta 1 de A-H \n"); //Usuario insere estado da carta 1
    scanf("%s", &estado); 

    printf("Insira o codigo da carta 1, com 1 letra e 2 numeros \n"); //Usuario insere codigo da carta 1; ex: A01, B11, C22
    scanf("%s", &codigo);

    printf("Insira o nome da cidade da carta 1 \n"); //Usuario insere nome da cidade (max 50 letras)
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

        float densidade = (float) populacao / area; // Cálculo de densidade populacional
        float pibcapita = (float) pib * 10000000000 / populacao;   // Calculo de PIB p Capita
        float densidadeinversa = (float) 1.0 / densidade;   //Calculo de densidade inversa????? (não entendi nada, com certeza vai ter algo errado mesmo funcionando normalmente, mas não sei o que.)
        float superpoder = (float) populacao + area + pibcapita + pturisticos + densidadeinversa; //Calculo de superpoder  

    printf("Vamos ver os dados da sua carta 1. \n \n");  
    printf("ESTADO: %s\n", estado);                        //Mostra estado C1
    printf("CÓDIGO: %s\n", codigo);                        //Mostra código da C1
    printf("CIDADE: %s\n", cidade);                        //Mostra cidade da C1
    printf("POPULAÇÃO: %d\n", populacao);                  //Mostra população da C1
    printf("ÁREA [km2]: %.2f\n", area);                      //Mostra área em km2 da C1
    printf("PIB: %.2f bilhões\n", pib);                              //Mostra PIB da C1
    printf("PONTOS TURISTICOS: %d\n", pturisticos);        //Mostra pontos turísticos da C1
    printf("DENSIDADE POPULACIONAL: %.2f hab km2\n", densidade);  //Mostra densidade (linha 38)
    printf("PIB per Capita: %.2f reais\n", pibcapita);     //Mostra PIB p Capita (linha 39)
    printf("Número do superpoder: %.1f\n", superpoder);   //Mostra superpoder (linha 41)


    
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

    printf("Insira o nome da cidade da carta 2 \n"); //Usuario insere nome da cidade (max 50 letras)
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

        float densidade2 = (float) populacao2 / area2; // Cálculo de densidade populacional
        float pibcapita2 = (float) pib2 * 10000000000 / populacao2;   // Calculo de PIB p Capita
        float densidadeinversa2 = (float) 1.0 / densidade2;   //Calculo de densidade inversa????? (linha 40)
        float superpoder2 = (float) populacao2 + area2 + pibcapita2 + pturisticos2 + densidadeinversa2; //Calculo de superpoder  (ainda não terminei)


        printf("Vamos ver os dados da sua carta 2. \n \n"); 
    printf("ESTADO: %s\n", estado2);                        //Mostra estado C2
    printf("CÓDIGO: %s\n", codigo2);                        //Mostra código da C2
    printf("CIDADE: %s\n", cidade2);                        //Mostra cidade da C2
    printf("POPULAÇÃO: %d\n", populacao2);                  //Mostra população da C2
    printf("ÁREA [km2]: %.2f\n", area2);                      //Mostra área em km2 da C2
    printf("PIB: %.2f bilhões\n", pib2);                              //Mostra PIB da C2
    printf("PONTOS TURISTICOS: %d\n", pturisticos2);        //Mostra pontos turísticos da C2
    printf("DENSIDADE POPULACIONAL: %.2f hab km2\n", densidade2);  //Mostra densidade (linha 38)
    printf("PIB per Capita: %.2f reais\n", pibcapita2);     //Mostra PIB p Capita (linha 39)
    printf("Número do superpoder: %.1f\n", superpoder2);   //Mostra superpoder (linha 41)

        // ---------------------------------------- Carta 2 termina aqui

        // Comparações

        int comparaPopulacao = populacao < populacao2;  //Se P for maior que P2: 0
        int comparaArea = area < area2;                 //Se A for maior que A2: 0
        int comparaPib = pib < pib2;        //Se Pib for maior que Pib2: 0
        int comparaPontosT = pturisticos < pturisticos2;    //Se PT1 for maior que PT2: 0
        int comparaDensInversa = densidadeinversa < densidadeinversa2;  //Algo pode estar errado aqui, mas não sei o que
        int comparaPibCapita = pibcapita < pibcapita2;       // Se PC1 for maior que PC2: 0
        int comparaSuperPoder = superpoder < superpoder2; // Se SP1 for maior que SP2: 0

           printf("\n \n COMPARAÇÕES: \n");
           printf("Se 0: Carta 1 vence  |  Se 1: Carta 2 vence\n");

           printf("População: %d\n", comparaPopulacao);   //Compara população da C1 e  C2 (Linha 114. Fator de vitória: Linha 123)
           printf("Area [km2]: %d\n", comparaArea);  //Compara Area em km2 da C1 e  C2 (Linha 115. Fator de vitória: Linha 123)
           printf("PIB: %d\n", comparaPib);         //Compara PIB da C1 e  C2 (Linha 116. Fator de vitória: Linha 123)
           printf("Pontos Turisticos: %d\n", comparaPontosT);  //Compara Pontos Turisticos da C1 e  C2 (Linha 117. Fator de vitória: Linha 123)
           printf("Densidade Populacional: %d\n", comparaDensInversa); //Algo pode estar errado aqui, mas não sei o que. Linha 118. Fator de vitória da 123 não se aplica aqui
           printf("PIB p Capita: %d\n", comparaPibCapita);  //Compara PIBpCapita da C1 e  C2 (Linha 119. Fator de vitória: Linha 123)
           printf("Super Poder: %d\n", comparaSuperPoder);  //Compara Super poder da C1 e  C2 (Linha 120. Fator de vitória: Linha 123)      


 

        return 0;

}

/* Comentários do fim: Deve ter algo, ou várias coisas erradas neste código. Mecher com números para mim já é extremamente dificil, 
agora com números e "lógica" de programação, é mais dificil ainda. Muitas coisas eu tive que pesquisar mais para algo funcionar corretamente,
e nem tudo pode ir de acordo com o que foi ensinado*/





