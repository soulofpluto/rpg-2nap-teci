#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int boas_vindas()
{

    // boas vindas

    // contextualização
    printf("Bem vindo(a) ao MS, um RPG baseado em Ordem Paranormal. Ordem Paranormal é um sistema de RPG fundado pelo youtuber"
           "e streamer Rafael Lange, Cellbit, em 2020.\n");
    printf("'O Paranormal não vem para a nossa realidade de maneira fácil' é o que eles dizem, é o que lhes disseram no seu primeiro dia, onde você viu tudo desabar\n");
    printf("A membrana que separa a nossa realidade do Outro Lado está cada vez mais enfraquecida pelo Medo!"
           "Diversos grupos de ocultistas tem utilizado isso ao seu favor para invocar as entidades do Outro Lado."
           "O seu dever como um membro dos Ocultos é impedir que isso aconteceça a qualquer custo!\n");
    // Apresentação de personagem
    printf("Você é um agente dos 'Ocultos' e vive em Londres\n");
    printf("Você é considerado um 'iniciado', resolveu algumas missões fáceis e agora estão em busca de seu primeiro grande alvo!\n");
    printf("Cada escolha tem sua consequência, pense antes de tomar uma decisão, ela poderá se tornar motivo de felicidade ou de tristeza!\n");
}

void criacao_personagem(int *classe_agente)
{
    char personagem[50];

    printf("Criação de personagem\n");

    // Informações do personagem
    printf("Qual o nome do seu personagem? ");
    scanf("%s", personagem);

    // Classes
    printf("Escolha sua classe: \n");
    printf("1. Combatente\n");
    printf("2. Investigador\n");
    printf("3. Ocultista\n");
    printf("4. Características das classes\n");
    scanf("%d", classe_agente);  // Passar o endereço da variável classe_agente

    if (*classe_agente == 4) {
        printf("Características de Classes:\n");
        printf("COMBATENTE\n");
        printf("Classe usada por pessoas que gostam de combate corpo a corpo.\n");
        printf("Possui grande destaque para força física e resistência.\n");
        printf("Não importa como concluímos nossa tarefa, apenas importa que ela seja feita!\n");

        printf("INVESTIGADOR\n");
        printf("Classe usada por pessoas que gostam de resolver enigmas, pode combater seus inimigos tanto de perto quanto de longe.\n");
        printf("Busca soluções para todos os problemas, mesmo que eles sejam sobrenaturais.\n");
        printf("Os pequenos detalhes são os mais importantes!\n");

        printf("OCULTISTA\n");
        printf("Classe usada por pessoas que gostam de combate a longa distância.\n");
        printf("Se relaciona com o sobrenatural, os ocultistas usam ele ao seu favor, seja para curar ou para atacar.\n");
        printf("Eu só tive medo uma vez na vida. E eu não vou me permitir ter isso outra vez!\n");
    } else {
        printf("Voltar ao menu anterior!\n");
    }
}

int prologo_base()
{
    int escolha_primeira_acao = 0;
    int menu_manual = 0;
    int acompanhante_missao;
    int classe_agente = 0;
    int classe_acompanhante1 = 0;
    int classe_acompanhante2 = 0;

    // Chama criacao_personagem() e atribui o valor retornado à &classe_agente -> exemplo para outros momentos no código
    criacao_personagem(&classe_agente);

    // Chegada na base e inicio da missão
    printf("Depois de um descanso de uma semana, você recebe a ligação do Presidente da Ordem, Kaiser, te chamando para uma missão e deve ir à base,"
           "chegando lá você se depara com o mesmo ambiente de sempre: agentes rondando de um lado para o outro conversando sobre amenidades e missões"
           "e caminha em direção ao seu armário\n");

    // Escolha um: seguir para a missão ou ler o manual primeiro
    printf("No seu armário, encontra uma pasta preta com um post-it dizendo 'CONFIDENCIAL' e ao lado um manual escrito 'MANUAL BÁSICO SOBRE O PARANORMAL E OS OCULTOS'\n");
    printf("1. Abrir e ler a pasta confidencial\n");
    printf("2. Abrir e ler o manual básico sobre o Pananormal e os Ocultos\n");
    scanf("%d", &escolha_primeira_acao);

    switch (escolha_primeira_acao)
    {
    case 1:
        printf("NARRADOR: Você abre e lê a pasta confidencial, nela contém as informações da sua nova missão\n");
        // Conhecimento do caso + primeiras pistas
        printf("No primeiro documento você encontra umas fotos da Torre de Londres dos últimos 20 anos, todas mostrando de algum ângulo\n"
               "uma imagem distorcida de uma mulher que pelos trajes indica que ela, em algum momento, era uma nobre.\n"
               "Além disso, havia uma suave diferença entre as fotos, por mais que a imagem sempre fosse daquela mulher, havia momentos em que"
               "os seus olhos estavam vermelhos, outros estavam esbranquiçados.");
        printf(" Atrás desse documento, você encontra também um relatório da Ocultos de 2010.\n");
        printf(" Nele constam jornais de 1910 até a data da missão relatando o desaparecimento de pessoas na época em que a imagem dessa mulher aparecia,\n"
               " o relatório diz que uma equipe com 3 membros da ordem foi designada para a missão, no entanto, apenas uma integrante voltou: Valquíria Andrade.\n"
               " No entanto, Valquíria não voltou sã da missão, os Ocultos tentaram todos os tratamentos psicológicos e psiquiátricos possíveis, mas nada adiantou.\n"
               " Seja lá o que tiver acontecido naquele local nunca foi reportado com exatidão. Desde então, a Ocultos evitou mandar novos agentes para lá,\n"
               " além disso a imagem da mulher nunca mais apareceu, até agora."
               " Você deverá ir a essa missão acompanhado de pelo menos um outro agente um pouco mais experiente que você.");
        break;

    case 2:
        printf("Você escolheu abrir o manual básico sobre o Paranormal e os Ocultos\n");
        printf("Menu:");
        scanf("%d", &menu_manual);
        switch (menu_manual)
        {
        case 1:
            printf("O Paranormal\n");
            printf("O que é? O que causa? Por que lutamos contra?");
            break;
        case 2:
            printf("Você escolheu abrir o manual básico sobre o Paranormal e os Ocultos\n");
            printf("Menu:");
            scanf("%d", &menu_manual); // Obtenha a escolha do menu

            switch (menu_manual)
            {
            case 1:
                printf("O Paranormal\n");
                printf("O que é? O que causa? Por que lutamos contra?");
                break;
            case 2:
                printf("Os Ocultos\n");
                printf("O que são? O que fazem? Onde ficam? Há só eles?");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }
    // Quem vai acompanhar na missão?
    //classe do acompanhante
    if (classe_agente== 1){
        classe_acompanhante1 = 2;
        classe_acompanhante2 = 3;
    } else if (classe_agente == 2) {
        classe_acompanhante1 = 3;
        classe_acompanhante2 = 1;
    } else if (classe_agente == 3) {
        classe_acompanhante1 = 1;
        classe_acompanhante2 = 2;
    } else {
        printf("Classe de personagem inválida. Escolha 1, 2 ou 3.\n");
        return 1;  // Encerrar o programa devido a uma escolha inválida
    } 

    // Imprimir a classe do acompanhante com base na escolha do personagem
    printf("Escolha o acompanhante da missão: ");
    if (classe_acompanhante1 == 1 && classe_acompanhante2 == 2) {
        //aproximação
        printf("Você vê dois agentes se aproximando de você, reconhece ser Pietro e Darlene, dois agentes que entraram na mesma época que você.\n");
        //diálogo
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
    } else if (classe_acompanhante1 == 2 && classe_acompanhante2 == 3) {
         //aproximação
        printf("Você vê dois agentes se aproximando de você, reconhece ser Darlene e Arnaldo, dois agentes que entraram na mesma época que você.\n");
        //diálogo
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
    } else if (classe_acompanhante1 == 3 && classe_acompanhante2 == 1) {
               //aproximação
        printf("Você vê dois agentes se aproximando de você, reconhece ser Arnaldo e Pietro, dois agentes que entraram na mesma época que você.\n");
        //diálogo
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
        printf("PIETRO: ");
    }

    }

    int cena_chegada_torre(){

        return 0;

    }

int main()
{
    int b = boas_vindas();
    prologo_base();

    return 0;
}