#include <iostream>

class Shape {
public:
	virtual std::string GetName() {
		return "shape";
	}
};

void PrintShape(Shape& shape) {
	std::cout << shape.GetName();
};

