#include "shape/base.h"

namespace Geometry::Square {
	class  Base : public Shape::Base {
	public:
		virtual std::string GetName() override;
	};
}
