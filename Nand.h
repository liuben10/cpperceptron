/*
 * Nand.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#ifndef NAND_H_
#define NAND_H_

#include "And.h"

namespace learning {
namespace logic {

class Nand: public And {
public:

	Nand() : And() {
	}

	using And::activation;

	int activation(int first, int second) {
		return !And::activation(first, second);
	}

	void printActivation(int first, int second) {
		int res = this->activation(first, second);
		printf("(%d, %d) has Activation: %d\n", first, second, res);
	}

	virtual ~Nand();
};

} /* namespace learning */
}
#endif /* NAND_H_ */
