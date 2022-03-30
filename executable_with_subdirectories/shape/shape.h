#include <string>

class Shape {
public:
	virtual std::string GetName();
};

void PrintShape(Shape& shape);