#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const char* vencedor(int jogador, int computador) {
    if (jogador == computador) {
        return "Empate";
    } else if ((jogador == 0 && computador == 2) || (jogador == 1 && computador == 0) || (jogador == 2 && computador == 1)) {
        return "Jogador";
    } else {
        return "Computador";
    }
}

int main() {
    int jogador, computador;
    int vitoriasJogador = 0, vitoriasComputador = 0, rodadas = 0;


    srand(time(NULL));


    while (vitoriasJogador < 3 && vitoriasComputador < 3) {

        printf("\nEscolha: 0 para Pedra, 1 para Papel, 2 para Tesoura: ");
        scanf("%d", &jogador);

        {
        }

        computador = rand() % 3;


        const char* resultado = vencedor(jogador, computador);


        printf("\nEscolha do jogador: ");
        if (jogador == 0) printf("Pedra");
        else if (jogador == 1) printf("Papel");
        else printf("Tesoura");

        printf("\nEscolha do computador: ");
        if (computador == 0) printf("Pedra");
        else if (computador == 1) printf("Papel");
        else printf("Tesoura");

        printf("\nResultado da rodada: %s\n", resultado);

        if (resultado == "Jogador") {
            vitoriasJogador++;
        } else if (resultado == "Computador") {
            vitoriasComputador++;
        }

        rodadas++;

        printf("\nPlacar: Jogador %d x %d Computador\n", vitoriasJogador, vitoriasComputador);
    }

    if (vitoriasJogador == 3) {
        printf("\nVocê venceu o duelo com %d vitórias!\n", vitoriasJogador);
    } else {
        printf("\nO computador venceu o duelo com %d vitórias!\n", vitoriasComputador);
    }

    return 0;
}

