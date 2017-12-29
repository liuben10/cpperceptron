/*
 * Xor.cpp
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#include "Xor.h"
#include "And.h"
#include "Nand.h"
#include "Or.h"

namespace learning {
namespace logic {

Xor::Xor() {
	this->n = new Nand();
	this->o = new Or();
	this->a = new And();
}

Xor::~Xor() {

}

} /* namespace logic */
}

using namespace learning;
using namespace logic;

int main() {
	Xor * x = new Xor();
	x->printActivation(0, 0);
	x->printActivation(0, 1);
	x->printActivation(1, 0);
	x->printActivation(1, 1);
}
