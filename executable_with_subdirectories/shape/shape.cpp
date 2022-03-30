#include "shape.h"
#include<iostream>

std::string Shape::GetName() {
	return "shape";
}

void PrintShape(Shape& shape) {
	std::cout << shape.GetName();
};