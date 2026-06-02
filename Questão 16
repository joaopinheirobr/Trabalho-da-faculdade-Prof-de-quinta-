#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade
    
    // CRIANDO AS CAIXINHAS NA MEMORIA
    int numero;     // Variavel para guardar o numero que o usuario digitar
    int x;          // O contador para o 'for'
    int fatorial = 1; // Guarda o resultado das multiplicacoes. Comeca com 1 porque se comecasse com 0, qualquer multiplicacao daria zero.

    // PEGANDO O NUMERO DO USUARIO
    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &numero);   // Le o numero inteiro e guarda na variavel 'numero'

    // VALIDACAO DE SEGURANCA MATEMATICA
    if (numero < 0) {
        printf("Erro: Nao existe fatorial de numero negativo!\n");
        return 1; // Para o programa por aqui mesmo se o numero for invalido
    } 

    // ESTRUTURA DE REPETICAO PARA O CALCULO
    // Comeca no valor digitado (x = numero) e vai descendo ate 1 (x >= 1), tirando 1 a cada volta (x--)
    for (x = numero; x >= 1; x--) {
        
        // ESTRUTURA DE MULTIPLICACAO ACUMULADA
        // A variavel 'fatorial' recebe o seu valor atual multiplicado pelo valor de 'x' na volta correspondente
        fatorial = fatorial * x;
        
    } // Fim do bloco 'for': o programa diminui 1 do 'x' e testa a condicao novamente

    // MOSTRANDO O RESULTADO FINAL
    // Usamos o '%d' para exibir o valor final que foi guardado na variavel fatorial
    printf("O fatorial de %d e: %d\n", numero, fatorial);

    return 0; // Indica ao sistema que o programa terminou com sucesso
    
} // Fim da funcao principal


