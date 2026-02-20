/*Muitos alunos de diversas universidades conhecem o portal de programação IRU. 
Este portal possui milhares de problemas de programação disponíveis. 
Diariamente a equipe do IRU recebe diversos feedbacks (elogios, bugs, dúvidas, sugestões, ...) 
que precisam primeiramente ser atribuídos para membros da equipe resolver.

Como a equipe é muito ocupada e não tem tempo para classificar estes feedbacks, 
você foi convidado a escrever um programa que faça isso e mostre quem será o 
membro responsável por resolver e responder o feedback.

Os membros responsáveis em cada setor são:

1.Elogios: Rolien
2.Bugs: Naej
3.Dúvidas: Elehcim
4.Sugestões: Odranoel

Entrada
O primeiro valor a ser lido é o número de casos de teste N (1 < N < 100). 
Cada caso de teste representa um dia de trabalho respondendo feedbacks. 
Cada caso de teste inicia com K (1 < K < 50), indicando o número de feedbacks recebidos naquela data. 
Seguem K linhas indicando a categoria de cada um dos feedbacks, conforme mostrado acima (1, 2, 3 ou 4).*/

#include <stdio.h>

int main() {
  int N,K,i,j;

  // Variável usada para retornar qual será o membro responsável
  int feedback;

  // Casos de teste N 
  scanf("%d",&N);

  for(i = 1; i <= N; i++){

    // Número de feedbacks K
    scanf("%d",&K);

    for(j = 1; j <= K; j++){

      // Reseta para 0 a cada repetição, evita nomes repetidos
      feedback = 0;
      scanf("%d",&feedback);

      // Escolhi o switch case por conta da legibilidade do código (mais bonito resumindo)
      switch(feedback){
        case 1:
          printf("Rolien\n");
          break;
        case 2:
          printf("Naej\n");
          break;
        case 3:
          printf("Elehcim\n");
          break;
        case 4:
          printf("Odranoel\n");
          break;
      }
    }
  }

  return 0;

}