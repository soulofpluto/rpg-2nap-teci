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


int criacao_personagem() {
    int classe = 0;
    char personagem[50];

    printf("Criação de personagem\n");

    // Informações do personagem
    printf("Qual o nome do seu personagem? ");
    scanf("%s", personagem);

    // Classes
    printf("Escolha sua classe: \n");
    printf("[1] Combatente\n");
    printf("[2] Investigador\n");
    printf("[3] Ocultista\n");
    printf("[4] Características das classes\n");
    scanf("%d", &classe);

    // Classes e características
    switch (classe) {
    case 1:
        printf("Classe 1 - Combatente\n");
        break;

    case 2:
        printf("Classe 2 - Investigador\n");
        printf("Seja bem-vindo, %s!\n", personagem);
        printf("\n");
        break;

    case 3:
        printf("Classe 3 - Ocultista\n");
        printf("Seja bem-vindo, %s!\n", personagem);
        printf("Você é um ocultista, praticante do ocultismo e deve usar os seus conhecimentos sobre o paranormal para ajudar seus companheiros e a ordem.\n");
        break;

    case 4:
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
        break;

    default:
        printf("Opção inválida!\n");
    }

    return classe;
}


int prologo_base()
{
    int escolha_primeira_acao = 0;

    // Chegada na base e inicio da missão
    printf("Depois de um descanso de uma semana, você recebe a ligação do Presidente da Ordem, Kaiser, te chamando para uma missão e deve ir à base,"
           "chegando lá você se depara com o mesmo ambiente de sempre: agentes rondando de um lado para o outro conversando sobre amenidades e missões"
           "e caminha em direção ao seu armário\n");

    // Escolha um: seguir para a missão ou
    while (2)
    {
    printf("No seu armário, encontra uma pasta preta com um post-it dizendo 'CONFIDENCIAL' e ao lado um manual escrito 'MANUAL BÁSICO SOBRE O PARANORMAL E OS OCULTOS'\n");
    printf("1. Abrir e ler a pasta confidencial\n");
    printf("2. Abrir e ler o manual básico sobre o Pananormal e os Ocultos\n");
    scanf("%d", &escolha_primeira_acao);

        switch (escolha_primeira_acao) {
            case 1:
                printf("Você abre e lê a pasta confidencial, nela contém as informações da sua nova missão\n");
                printf("No primeiro documento você encontra umas fotos da Torre de Londres dos últimos 20 anos todas mostrando de algum ângulo\n"
                "uma imagem distorcida de uma mulher que pelos trajes indica que ela, em algum momento, era uma nobre.\n"
                "Além disso, havia uma suave diferença entre as fotos, por mais que a imagem sempre fosse daquela mulher, havia momentos em que"
                "os seus olhos estavam vermelhos, outros estavam esbranquiçados.");
                printf("Atrás desse documento, você encontra também um relatório da Ocultos de 2010.");
                printf("");
                break;
            case 2:
                printf("Você escolheu a Opção 2 bla bla bla\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    }
    
}

int main()
{
    int b = boas_vindas();
    int resultado = criacao_personagem();
    prologo_base();

    return 0;
}