#include <stdio.h> // Traz a biblioteca padrão pra gente conseguir usar o printf e o scanf

int main() { // Aqui é onde o computador começa a rodar o nosso código de verdade
    
    // GUARDANDO ESPAÇO NA MEMÓRIA
    float num1, num2, resultado; // Cria caixinhas pra números quebrados (tipo 4.5 ou 10.2)
    char operacao;               // Cria uma caixinha pra guardar só uma letra ou símbolo (+, -, *, /)

    // PEGANDO A OPERAÇÃO
    printf("Digite a operacao (+, -, *, /): "); // Pergunta pro usuário qual operação ele quer fazer
    scanf(" %c", &operacao); // Pega o símbolo. Esse espaço antes do %c limpa o "Enter" que costuma travar o teclado

    // PEGANDO OS NÚMEROS
    printf("Digite o primeiro numero: "); // Pede o primeiro número
    scanf("%f", &num1);                  // Salva o que foi digitado na caixinha num1
    
    printf("Digite o segundo numero: "); // Pede o segundo número
    scanf("%f", &num2);                  // Salva na caixinha num2

    // HORA DO SWITCH (O ROTEADOR DE ESCOLHAS)
    // O switch olha o símbolo que o usuário digitou e escolhe o "case" certo
    switch (operacao) {
        
        case '+': // Se o usuário digitou +, vem pra cá:
            resultado = num1 + num2;                 // Soma os valores
            printf("Resultado: %.2f\n", resultado); // Mostra o resultado com só 2 números depois da vírgula
            break;                                   // Sai correndo do switch pra não rodar o que tá embaixo

        case '-': // Se o usuário digitou -, vem pra cá:
            resultado = num1 - num2;                 // Faz a subtração
            printf("Resultado: %.2f\n", resultado); // Mostra na tela
            break;                                   // Dá o fora do switch

        case '*': // Se o usuário digitou *, vem pra cá:
            resultado = num1 * num2;                 // Multiplica geral
            printf("Resultado: %.2f\n", resultado); // Mostra na tela
            break;                                   // Partiu fim do switch

        case '/': // Se o usuário digitou /, vem pra cá:
            // EVITANDO DAR RUIM NA MATEMÁTICA
            if (num2 != 0) { // Se o segundo número NÃO for zero, tá safo, pode dividir
                resultado = num1 / num2;                 // Faz a divisão
                printf("Resultado: %.2f\n", resultado); // Mostra na tela
            } 
            else { // Mas se o infeliz tentar dividir por zero...
                printf("Erro: Nao e possivel dividir por zero!\n"); // Avisa que não dá pra fazer milagre
            }
            break; // Sai do switch de boa

        default: // Se o usuário digitou qualquer doideira que não seja +, -, * ou /
            printf("Erro: Operacao invalida!\n"); // Avisa que ele errou o botão
            break;                                // Fim de papo
    }

    return 0; // Diz pro sistema operacional: "Tudo certo, o programa rodou sem travar!"
} // Fecha a função principal e encerra o show