#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade
    
    // CRIANDO AS CAIXINHAS NA MEMORIA
    int vet[10];      // Cria um vetor com 10 posicoes para guardar os numeros inteiros
    int x;              // O contador para os 'for'
    int maior;          // Variavel para guardar o maior valor encontrado
    int posicao_maior;  // Variavel para guardar o indice/posicao onde o maior valor estava

    printf("* Lendo os 10 valores do vetor *\n\n");

    // PRIMEIRO LACO: APENAS PARA LER OS 10 NUMEROS
    // Vai de x = 0 ate x < 10 (posicoes de 0 a 9)
    for (x = 0; x < 10; x++) {
        printf("Digite o valor para a posicao [%d]: ", x);
        scanf("%d", &vet[x]); // Guarda o numero digitado na gaveta 'x' do vetor
    }

    // A LOGICA E PROCURAR O MAIOR
    // Forçamos o primeiro elemento (posicao 0) a ser o maior atual, so para termos um ponto de partida
    maior = vet[0];
    posicao_maior = 0; // A posicao do maior, por enquanto, e a zero

    // SEGUNDO: COMPARA O CAMPEAO COM O RESTO DO VETOR
    // Começamos o teste a partir da posicao 1, ja que a posicao 0 ja e o nosso ponto de partida
    for (x = 1; x < 10; x++) {
        
        // Se o numero da gaveta atual for MAIOR do que o nosso campeao...
        if (vet[x] > maior) {
            maior = vet[x];       // O numero dessa gaveta vira o novo maior valor
            posicao_maior = x;      // Salvamos a posicao desse novo campeao
        }
        
    } // Fim do 'for' de comparacao

    // MOSTRANDO O RESULTADO FINAL
    printf("\n* Resultado Final *\n");
    printf("Maior valor encontrado: %d\n", maior);
    printf("Posicao do maior valor: [%d]\n", posicao_maior);

    return 0; // Indica ao sistema que o programa terminou com sucesso
} // Fim da funcao principal

