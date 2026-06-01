#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade
    
    // CRIANDO O VETOR (O NOSSO ARMARIO DE DADOS)
    int vet[5]; // Cria um vetor com 5 posicoes (caixinhas) para guardar numeros inteiros
    int x;        // O seu contador oficial para os lacos 'for'

    printf("* Lendo os 5 valores do vetor *\n\n");

    // PRIMEIRO LACO: PARA LER E GUARDAR OS VALORES
    // O laco vai de x = 0 ate x < 5 (ou seja: posicoes 0, 1, 2, 3 e 4)
    for (x = 0; x < 5; x++) {
        
        printf("Digite o valor para a posicao [%d]: ", x);
        scanf("%d", &vet[x]); // Le o numero e guarda na gaveta de numero 'x' do vetor
        
    } // Fim do primeiro 'for'

    printf("\n* Exibindo os valores guardados *\n\n");

    // SEGUNDO LACO: PARA EXIBIR OS VALORES QUE FORAM GUARDADOS
    // Passa novamente pelas posicoes de 0 ate 4 para mostrar os dados na tela
    for (x = 0; x < 5; x++) {
        
        printf("Valor na posicao [%d] = %d\n", x, vet[x]); // Mostra o numero que esta na gaveta 'x'
        
    } // Fim do segundo 'for'

    return 0; // Indica ao sistema operacional que o programa terminou com sucesso
    
} // Fim da funcao principal

