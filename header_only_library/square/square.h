#include "shape/shape.h"

class  Square : public Shape {
public:
	virtual std::string GetName() override{
		return "Square";
	};
};
