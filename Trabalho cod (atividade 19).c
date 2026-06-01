#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade
    
    // CRIANDO AS CAIXINHAS NA MEMORIA
    int mat[2][2]; // Cria uma matriz (tabela) de 2 linhas e 2 colunas para numeros inteiros
    int x;            // O contador para as LINHAS
    int y;            // Contador auxiliar para as COLUNAS
    int soma = 0;     // Variavel acumuladora para somar tudo.

    printf("* Lendo os elementos da Matriz 2x2 *\n\n");

    // LACO PARA ANDAR PELAS LINHAS
    for (x = 0; x < 2; x++) {
        
        // LACO PARA ANDAR PELAS COLUNAS (DENTRO DE CADA LINHA)
        for (y = 0; y < 2; y++) {
            
            printf("Digite o valor para a posicao [%d][%d]: ", x, y);
            scanf("%d", &mat[x][y]); // Guarda o numero digitado na linha 'x', coluna 'y'
            
            // SOMANDO PASSO A PASSO
            // A variavel 'soma' acumula o valor que acabou de ser digitado
            soma = soma + mat[x][y];
            
        } // Fim do laco das colunas (y)
        
    } // Fim do laco das linhas (x)

    printf("\n* Exibindo a Matriz Digitada *\n\n");

    // LAÇO DUPLO APENAS PARA MOSTRAR A MATRIZ EM FORMATO DE TABELA
    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            printf("%d\t", mat[x][y]); // O '\t' serve para dar um espaco (Tab) entre os numeros
        }
        printf("\n"); // Pula uma linha na tela toda vez que terminar de imprimir uma linha da matriz
    }

    // MOSTRANDO O RESULTADO DA SOMA
    printf("\nA soma de todos os elementos da matriz e: %d\n", soma);

    return 0; // Indica ao sistema que terminou com sucesso
    
} // Fim da funcao principal

