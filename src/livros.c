/*Você começou a competir com seu amigo para ver quem consegue ler mais livros em menos tempo.
Seu amigo lia muito mais que você, até o dia que você percebeu que ele lia somente livros muito finos.

Então você resolveu contar as páginas dos livros, aumentando também a quantidade de páginas lidas por dia. 
Agora você lê 5 páginas por dia e termina 16 dias antes do que se estivesse lendo 3 páginas por dia. 
Neste cenário, quantas páginas tem o livro?

Entrada
A entrada é composta de vários casos de testes. 
Cada caso de teste é composto de três números Q (0 < Q < 20), D (0 < D < 20) e P (0 < P < 20) 
separados por um espaço. Sendo que Q é a quantidade de páginas lidas por dia. 
D é o número de dias que você adiantaria a leitura caso estivesse lendo a quantidade de páginas informada 
pelo número P. Um único valor zero indica o fim da entrada.*/

#include <stdio.h>

int main() {
  int Q,D,P;
  int numPaginas;

  // Vários casos de teste
  while(1){
    scanf("%d%d%d",&Q,&D,&P);

    // Um único valor 0 indica o fim da entrada
    if(Q == 0 || D == 0 || P == 0){
      break;
    }

    // Trata-se de apenas Regra de três
    // Páginas = Páginas por dia * Total de dias
    // Com isso é possível descobrir uma fórmula
    numPaginas = (Q * D * P) / (P - Q);

    // Usando corretamente o plural
    if(numPaginas == 1){
      printf("%d pagina\n",numPaginas);
    } else {
      printf("%d paginas\n",numPaginas);
    }
   

  }

  return 0;

}