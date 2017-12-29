/*
 * Xor.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */
#include "Nand.h"
#include "And.h"
#include "Or.h"

#ifndef XOR_H_
#define XOR_H_

namespace learning {
namespace logic {

class Xor : public Logic {
private:
	Or * o;
	Nand * n;
	And * a;
public:
	Xor();
	int activation(int first, int second) {
		int orOutput = this->o->activation(first, second);
		int nandOutput = this->n->activation(first, second);
		return this->a->activation(orOutput, nandOutput);
	}

	void printActivation(int first, int second) {
		int res = this->activation(first, second);
		printf("(%d, %d) has Activation: %d\n", first, second, res);
	}

	virtual ~Xor();
};

} /* namespace logic */
}

#endif /* XOR_H_ */
