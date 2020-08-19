#pragma once
#include <iostream>
#include <string>

void PRINT(const std::string &string) {
	std::cout << string << std::endl;
}

void PRINT(float a, float b, float c) {
	std::cout << a << "  " << b << "  " << c << std::endl;
}