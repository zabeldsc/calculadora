#include <iostream>
#include "calc.h"

int main(){
	int n1, n2, resultado;
	char operador;
	
	std::cout << "Insira o primeiro número: ";
	std::cin >> n1;
	
	std::cout << "Insira o segundo número: ";
	std::cin >> n2;
	
	std::cout << "Insira o operador: ";
	std::cin >> operador;
	
	switch(operador){
		case '+':
			resultado = soma(n1, n2);
			break;
		case '-':
			resultado = sub(n1, n2);
			break;
		case '*':
			resultado = mult(n1, n2);
			break;
		case '/':
			resultado = divisao(n1, n2);
			break;
	}
	
	std::cout << "Resultado: " << resultado << "\n";
	
	return 0;
}
