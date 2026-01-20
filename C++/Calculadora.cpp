//Essa é uma simples calculadora em C++, criada como forma de estudo e exercicio na linguagem!


# include <iostream>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "_______________ CALCULADORA _______________\n";

    std::cout << "Insira um dos seguintes comandos (+ - * /): ";
    std::cin >> op;

    std::cout << "Insira o primeiro valor: ";
    std::cin >> num1;

    std::cout << "Insira o segundo valor: ";
    std::cin >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        std::cout << "resultado: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "resultado: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "resultado: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "resultado: " << result << '\n';
        break;
    default:
        std::cout << "Comando Invalido!:\n";
        break;
    }

    std::cout << "________________ CONCLUIDO ________________";

    return 0;
}
