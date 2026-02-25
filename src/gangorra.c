/*
Joãozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não 
é simétrica, uma das extremidades é mais longa que a outra. Após brincar algumas vezes com um amigo de mesmo peso, 
ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na 
parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, a gangorra se desequilibra para o lado 
do amigo. Sem entender a situação, Joãozinho pediu ajuda a outro amigo de outra série, que explicou que o 
comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando

P1 ∗ C1 = P2 ∗ C2

onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os comprimentos da 
gangorra do lado esquerdo e direito, respectivamente.

Entrada
A primeira e única linha da entrada contém 4 inteiros, P1, C1, P2 e C2, (10 ≤ P1, C1, P2 e C2 ≤ 100) nesta ordem.
*/

#include <stdio.h>

int main() {
  int P1,C1,P2,C2;
  int equilibrio1;
  int equilibrio2;

  // P1 e C1 se referem ao lado ESQUERDO da gangorra
  // P2 e C2 se referem ao lado DIREITO da gangorra
  scanf("%d%d%d%d",&P1,&C1,&P2,&C2);

  // Apenas para facilitar a leitura nas condicionais
  equilibrio1 = P1 * C1;
  equilibrio2 = P2 * C2;

  if (equilibrio1 == equilibrio2) {
    printf("0\n");
  } else if (equilibrio1 > equilibrio2) {
    printf("-1\n");
  } else if (equilibrio1 < equilibrio2) {
    printf("1\n");
  }

  return 0;

}