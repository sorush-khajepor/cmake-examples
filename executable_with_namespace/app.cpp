#include "square/base.h"
#include "rectangle/base.h"
using namespace Geometry;
int main() {

	Square::Base s;
	Rectangle::Base r;
	
	Shape::Print(s);
	Shape::Print(r);
	return 0;
}