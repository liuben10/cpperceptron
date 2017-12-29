/*
 * And.cpp
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#include "And.h"

namespace learning {
namespace logic {
And::~And() {
	this->inputs.clear();
	free(this);
}

}
} /* namespace learning */

using namespace learning;
using namespace logic;
