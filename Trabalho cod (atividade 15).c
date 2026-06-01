#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade

    // CRIANDO AS VARIAVEIS NA MEMORIA
    float numero;          // Variavel que recebe o numero digitado a cada volta do laço
    float soma = 0.0;      // Variavel acumuladora: deve iniciar em zero para nao conter residuos de memoria
    int x;                 // Contador oficial do laco 'for'

    printf("* Somador de 5 Numeros *\n\n");

    // O FOR PRONTO PARA RODAR 5 VEZES
    // O ciclo comeca em x = 1 e repete enquanto x for menor ou igual a 5, somando 1 a cada volta (x++)
    for (x = 1; x <= 5; x++) {
        
        // PEDINDO O NÚMERO DA VEZ
        printf("Digite o %do numero: ", x); // O '%dº' mostra qual numero esta sendo pedido (1º, 2º, 3º...)
        scanf("%f", &numero);               // Le o valor digitado e armazena na variavel 'numero'
        
        // ESTRUTURA DE ACUMULACAO DE VALORES
        // A variavel 'soma' recebe o seu proprio valor atual somado ao novo 'numero' digitado
        soma = soma + numero; 
        
    } // Fim do bloco 'for': o programa incrementa o 'x' e testa a condicao novamente

    // MOSTRANDO O RESULTADO FINAL
    // Este printf esta fora do laco 'for', portanto sera executado apenas uma vez ao final de todas as leituras
    printf("\nA soma total de todos os numeros e: %.2f\n", soma);

    return 0; // Indica ao sistema operacional que o programa terminou com sucesso
} // Fim da funcao principal