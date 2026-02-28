/*
Keanu estava testando novos modelos de tabuleiros de xadrez quanto teve a seguinte duvida:

Quantas casas brancas e quantas casas pretas tem um tabuleiro de xadrez de tamanho nxn?

Entrada
O input consiste de uma linha com um único inteiro n.
2 ≤ n ≤100
*/

#include <stdio.h>

int main() {
  int n;
  int numCasas;
  int casasDivididas;

  numCasas = n * n;
  casasDivididas = numCasas / 2;

  // Número de casas n*n (quadrado)
  scanf("%d",&n);

  if (n % 2 == 0) {
    printf("%d casas brancas e %d casas pretas",casasDivididas,casasDivididas);
  } else {
    printf("%d casas brancas e %d casas pretas",(casasDivididas)+1,casasDivididas);
  }

  return 0;

}