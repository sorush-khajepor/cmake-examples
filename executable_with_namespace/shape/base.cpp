#include "base.h"
#include<iostream>


namespace Geometry::Shape{
	
	std::string Base::GetName() {
		return "shape";
	}

	void Print(Base& shape) {
		std::cout << shape.GetName()<<"\n";
	};
}