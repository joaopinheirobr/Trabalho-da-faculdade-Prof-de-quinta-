#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade
    
    // CRIANDO AS CAIXINHAS NA MEMORIA
    int mat[3][3]; // Cria uma matriz (tabela) de 3 linhas e 3 colunas para numeros inteiros
    int x;            // Contador para controlar as LINHAS
    int y;            // Contador auxiliar para controlar as COLUNAS

    printf("* Lendo os elementos da Matriz 3x3 *\n\n");

    // REPETICAO PARA ANDAR PELAS LINHAS
    for (x = 0; x < 3; x++) {
        
        // REPETICAO PARA ANDAR PELAS COLUNAS
        for (y = 0; y < 3; y++) {
            
            printf("Digite o valor para a posicao [%d][%d]: ", x, y);
            scanf("%d", &mat[x][y]); // Guarda o numero digitado na linha 'x', coluna 'y'
            
        } // Fim da repeticao das colunas (y)
        
    } // Fim da repeticao das linhas (x)

    printf("\n* Elementos da Diagonal Principal *\n\n");

    // REPETICAO PARA MOSTRAR OS ELEMENTOS DA DIAGONAL
    // Como a diagonal principal so acontece quando a linha e igual a coluna (0,0; 1,1; 2,2),
    // nos precisamos de apenas UMA repeticao simples usando o 'x' para acessar essas posicoes.
    for (x = 0; x < 3; x++) {
        
        // Exibe o elemento onde a linha e a coluna possuem o mesmo valor de 'x'
        printf("Elemento na posicao [%d][%d] = %d\n", x, x, mat[x][x]);
        
    } // Fim da repeticao da diagonal

    return 0; // Indica ao sistema que o programa terminou com sucesso
    
} // Fim da funcao principal

