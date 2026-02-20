/*Og gosta muito de brincar com seus filhos. Seu jogo preferido é o jogo do maior, de autoria própria.
Este passatempo (no tempo das cavernas se tinha muito tempo disponível para jogos) é jogado em dupla, Og e um dos seus filhos.
O jogo procede da seguinte forma: os dois participantes escolhem um número de rodadas e, a cada rodada, 
cada participante diz um número de 0 até 10 em voz alta, sendo que o participante que falar o número mais alto ganha um ponto 
(em caso de empate, ninguém ganha o ponto). No final das rodadas, os pontos são contabilizados e o participante com o maior número de pontos ganha.

Og e seus filhos gostam muito do jogo, mas se perdem na contagem dos pontos. Você conseguirá ajudar Og a verificar a pontuação de uma lista de jogos?

Entrada
A entrada é composta por vários casos de teste (partidas). Cada caso é iniciado com um inteiro N (de 0 até 10)
representando o número de rodadas da partida, sendo que o valor 0 representa o final da entrada e não deve ser processado. 
Cada uma das próximas N linhas contém dois inteiros, A e B,
onde A é o número escolhido pelo primeiro jogador e B é o número escolhido pelo segundo jogador (0 ≤ A, B ≤ 10).*/

#include <stdio.h>

int main(){
  int A,B,N,i;

  // Acumuladores de pontos
  int pA,pB;

  while(1){

    // Quantidade de casos
    if (scanf("%d",&N) != 1 || N == 0){
      break;
    }

    // Zera pontos sempre que a partida começa novamente
    pA = 0;
    pB = 0;

    // Múltiplos casos de uso
    for (i = 1; i <= N; i++){

      
      // Jogador A primeiro / Jogador B depois
      scanf("%d%d",&A,&B);

      if (A > B){
        // pA = pA + 1
        pA++; 
      } else if (B > A){
        // pB = pB + 1
        pB++;
      }
    }

    // Mostra o total de pontos no final da partida
    printf("%d %d\n",pA,pB);

  }

  return 0;

}