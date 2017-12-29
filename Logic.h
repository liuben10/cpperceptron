/*
 * Logic.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#ifndef LOGIC_H_
#define LOGIC_H_

#include "Perceptron.h"

namespace learning {
namespace logic {

class Logic: public Perceptron {
public:
	virtual ~Logic();

	int activation(int first, int second) {
		map<string, int> inputs;
		inputs["0"] = first;
		inputs["1"] = second;
		return Perceptron::activation(inputs);
	}

	void printActivation(int first, int second) {
		int res = this->activation(first, second);
		printf("(%d, %d) has Activation: %d\n", first, second, res);
	}
};

} /* namespace logic */
}

#endif /* LOGIC_H_ */
