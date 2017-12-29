#include "Logic.h"

namespace learning {
namespace logic {
Logic::~Logic() {
	this->inputs.clear();
	free(this);
}

}
} /* namespace learning */
