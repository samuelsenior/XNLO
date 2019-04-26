#include "../../Eigen/Dense"

#include "../maths/maths_textbook.hpp"
#include "../physics/physics_textbook.hpp"

using namespace Eigen;

namespace XNLO {

	struct Result {
		ArrayXXd acceleration;
		ArrayXXd w;
		ArrayXXd E;
		ArrayXXcd wavefunction;
	};

	Result XNLO(ArrayXXcd A_w_active, ArrayXd w_active, int w_active_min_index_UPPE,
				maths_textbook& maths, physics_textbook& physics, std::string print="minimum");

} // XNLO namespace
