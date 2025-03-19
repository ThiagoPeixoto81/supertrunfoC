#include <stdio.h>

struct CartasSuperTrunfo
{
    char estado[2];
    char codigo[255];
    char nomeDaCidade[255];
    unsigned long int populacao;
    float areaEmKm;
    float pib;
    int numeroPontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
};


int main() {

    struct CartasSuperTrunfo carta1 = {"A", "A01", "Arapiraca", 200000, 240, 5000000000, 10, 200000/240, 5000000000/200000, 200000+240+5000000000+10+(200000/240)+(5000000000/200000)};
    struct CartasSuperTrunfo carta2 = {"M", "M01", "Maceió", 1000000, 429, 50000000000, 47, 1000000/429, 50000000000/1000000, 1000000+429+50000000000+10+(1000000/429)+(50000000000/1000000)};


    printf("====================\n%s\n====================\nEstado: %c\nCódigo: %s\nPopulação: %d\nÁrea em Km²: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %f hab/km²\nPib Per Capita: %f reais\nSuper poder: %f\n\n\n",carta1.nomeDaCidade, carta1.estado, carta1.codigo, carta1.populacao, carta1.areaEmKm,carta1.pib,carta1.numeroPontosTuristicos, carta1.densidadePopulacional, carta1.pibPerCapita, carta1.superPoder);

    printf("====================\n%s\n====================\nEstado: %c\nCódigo: %s\nPopulação: %d\nÁrea em Km²: %f\nPIB: %f\nNúmero de pontos turísticos: %d\nDensidade Populacional: %f hab/km²\nPib Per Capita: %f reais\nSuper poder: %f\n\n\n",carta2.nomeDaCidade, carta2.estado, carta2.codigo, carta2.populacao, carta2.areaEmKm,carta2.pib,carta2.numeroPontosTuristicos, carta2.densidadePopulacional, carta2.pibPerCapita, carta2.superPoder);
    
    int opcao;
    printf("Escolha qual atributo você quer que seja comparado entre as duas cartas:\n[1]População\n[2]Área\n[3]PIB\n[4]Número de Pontos Turísticos\n[5]Densidade Demográfica\nEscolha a opção: ");
    scanf("%d", &opcao);

    printf("====================\n%s vs %s\n====================\n\n", carta1.nomeDaCidade, carta2.nomeDaCidade);

    switch (opcao) {
        case 1:

            printf("O Atributo escolhido para comparação foi a População\n");
            printf("População de %s: %d\nPopulação de %s: %d\n", carta1.nomeDaCidade, carta1.populacao, carta2.nomeDaCidade, carta2.populacao);

            if (carta1.populacao > carta2.populacao){
                printf("%s tem maior população\n", carta1.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta1.nomeDaCidade);
            } else {
                printf("%s tem maior população\n", carta2.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta2.nomeDaCidade);
            };

        break;

        case 2:

            printf("O Atributo escolhido para comparação foi a Área\n");
            printf("A Área de %s: %f km²\nA Área de %s: %f km²\n", carta1.nomeDaCidade, carta1.areaEmKm, carta2.nomeDaCidade, carta2.areaEmKm);

            if (carta1.areaEmKm > carta2.areaEmKm){
                printf("%s tem a maior área\n", carta1.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta1.nomeDaCidade);
            } else {
                printf("%s tem a maior área\n", carta2.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta2.nomeDaCidade);
            };

        break;

        case 3:

            printf("O Atributo escolhido para comparação foi o PIB\n");
            printf("O PIB de %s: %f\nO PIB de %s: %f\n", carta1.nomeDaCidade, carta1.pib, carta2.nomeDaCidade, carta2.pib);

            if (carta1.pib > carta2.pib){
                printf("%s tem o maior PIB\n", carta1.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta1.nomeDaCidade);
            } else {
                printf("%s tem o maior PIB\n", carta2.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta2.nomeDaCidade);
            };

        break;

        case 4:

            printf("O Atributo escolhido para comparação foi o número de pontos turísticos\n");
            printf("O número de pontos turísticos de %s: %d\nO número de pontos turísticos de %s: %d\n", carta1.nomeDaCidade, carta1.numeroPontosTuristicos, carta2.nomeDaCidade, carta2.numeroPontosTuristicos);

            if (carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos){
                printf("%s tem um maior número de pontos turísticos\n", carta1.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta1.nomeDaCidade);
            } else {
                printf("%s tem um maior número de pontos turísticos\n", carta2.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta2.nomeDaCidade);
            };

        break;

        case 5:

            printf("O Atributo escolhido para comparação foi a densidade demográfica\n");
            printf("A densidade demográfica de %s: %f\nA densidade demográfica de %s: %f\n", carta1.nomeDaCidade, carta1.densidadePopulacional, carta2.nomeDaCidade, carta2.densidadePopulacional);

            if (carta1.densidadePopulacional > carta2.densidadePopulacional){
                printf("%s tem uma maior densidade populacional\n", carta1.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta1.nomeDaCidade);
            } else {
                printf("%s tem uma maior densidade populacional\n", carta2.nomeDaCidade);
                printf("%s VENCEU!!!\n", carta2.nomeDaCidade);
            };

        break;

        default:
            printf("Opção inválida. Tente Novamente!");
    }


    //Comparação das cartas

    // int pontosCarta1 = 0;
    // int pontosCarta2 = 0;

    

    // printf("População de %s: %d\nPopulação de %s: %d\n", carta1.nomeDaCidade, carta1.populacao,carta2.nomeDaCidade, carta2.populacao);

    // if (carta1.populacao > carta2.populacao){
    //     pontosCarta1++;
    //     printf("%s tem maior população, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem maior população, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };

    // printf("PIB de %s: %f\nPIB de %s: %f\n", carta1.nomeDaCidade, carta1.pib,carta2.nomeDaCidade, carta2.pib);

    // if (carta1.pib > carta2.pib){
    //     pontosCarta1++;
    //     printf("%s tem maior PIB, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem maior PIB, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };

    // printf("Área em Km² de %s: %f\nÁrea em Km² de %s: %f\n", carta1.nomeDaCidade, carta1.areaEmKm,carta2.nomeDaCidade, carta2.areaEmKm);

    // if (carta1.areaEmKm > carta2.areaEmKm){
    //     pontosCarta1++;
    //     printf("%s tem maior extensão territorial, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem maior extensão territorial, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };

    // printf("Número de pontos turísticos de %s: %d\nNúmero de pontos turísticos de %s: %d\n", carta1.nomeDaCidade, carta1.numeroPontosTuristicos,carta2.nomeDaCidade, carta2.numeroPontosTuristicos);

    // if (carta1.numeroPontosTuristicos > carta2.numeroPontosTuristicos){
    //     pontosCarta1++;
    //     printf("%s tem mais pontos turísticos, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem mais pontos turísticos, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };


    // printf("Densidade populacional de %s: %f\nDensidade populacional de %s: %f\n", carta1.nomeDaCidade, carta1.densidadePopulacional,carta2.nomeDaCidade, carta2.densidadePopulacional);

    // if (carta1.densidadePopulacional < carta2.densidadePopulacional){
    //     pontosCarta1++;
    //     printf("%s tem menor densidade populacional, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem menor densidade populacional, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };


    // printf("Pib per capita de %s: %f\nPib per capita de %s: %f\n", carta1.nomeDaCidade, carta1.pibPerCapita,carta2.nomeDaCidade, carta2.pibPerCapita);

    // if (carta1.pibPerCapita > carta2.pibPerCapita){
    //     pontosCarta1++;
    //     printf("%s tem maior pib per capita, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem maior pib per capita, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };


    // printf("Super poder de %s: %f\nSuper poder de %s: %f\n", carta1.nomeDaCidade, carta1.superPoder,carta2.nomeDaCidade, carta2.superPoder);

    // if (carta1.superPoder > carta2.superPoder){
    //     pontosCarta1++;
    //     printf("%s tem maior Super poder, por isso venceu nesse atributo\n\n", carta1.nomeDaCidade);
    // } else {
    //     pontosCarta2++;
    //     printf("%s tem maior Super poder, por isso venceu nesse atributo\n\n", carta2.nomeDaCidade);
    // };


    // if (pontosCarta1 > pontosCarta2){
    //     printf("====================\n%s %d x %d %s\n====================\n\n%s VENCEU!!!\n", carta1.nomeDaCidade, pontosCarta1, pontosCarta2, carta2.nomeDaCidade, carta1.nomeDaCidade);
    // } else {
    //     printf("====================\n%s %d x %d %s\n====================\n%s VENCEU!!!\n", carta1.nomeDaCidade, pontosCarta1, pontosCarta2, carta2.nomeDaCidade, carta2.nomeDaCidade);
    // };
    

    return 0;
}