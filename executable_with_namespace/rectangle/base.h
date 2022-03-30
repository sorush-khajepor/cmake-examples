#include "shape/base.h"

namespace Geometry::Rectangle{

	class  Base : public Shape::Base {
	public:
		virtual std::string GetName() override;
	};

}
