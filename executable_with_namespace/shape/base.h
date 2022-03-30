#pragma once
#include <string>

namespace Geometry::Shape{
	class Base {
	public:
		virtual std::string GetName();
	};

	void Print(Base& shape);
}