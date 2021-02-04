#include <iostream>

double inputNumber()
{    
    std::cout << "Enter a number: ";
    double num;
    std::cin >> num;

    return num;
}

char getOperator()
{
    std::cout << "Enter one of the following: (+, -, *, /) : ";
    char op;
    std::cin >> op;
    return op;
}

void printResult(double num1, char op, double num2)
{
    if (op == '+'){
        std::cout << num1 << " " << op <<  " " << num2 << " = " << num1 + num2 << '\n';
    }else if (op == '-'){
        std::cout << num1 << " " << op <<  " " << num2 << " = " << num1 - num2 << '\n';
    }else if (op == '*'){
        std::cout << num1 << " " << op <<  " " << num2 << " = " << num1 * num2 << '\n';
    }else if (op == '/'){
        std::cout << num1 << " " << op <<  " " << num2 << " = " << num1 / num2 << '\n';
    }else{
        std::cout << "" << '\n';
    }
}


int main()
{
    double num1{inputNumber()};
    double num2{inputNumber()};
    char op{getOperator()};
    printResult(num1, op, num2);

    return 0;
}