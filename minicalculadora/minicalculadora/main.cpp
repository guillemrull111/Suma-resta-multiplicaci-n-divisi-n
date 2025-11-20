#include <iostream>
#include <cmath>
#include "Functions.h"
int main() {

	double a;
	double b;
	short opcion;
	std::cout << "introduce num 1:" << std::endl;
	std::cin >> a;
	std::cout << "introduce num 2:" << std::endl;
	std::cin >> b;
	std::cout << "Que quieres hacer sumar(1) restar(2)" << std::endl;
	std::cin >> opcion;

	switch (opcion)
	{
	case 1:
		std::cout << suma(a, b) << std::endl;
		break;
	case 2:
		std::cout << resta(a, b) << std::endl;
		break;
	default:
		std::cout << "Opción no valida" << std::endl;
		break;
	}
	

	
}