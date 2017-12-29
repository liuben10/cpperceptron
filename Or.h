/*
 * Or.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#ifndef OR_H_
#define OR_H_

#include "Logic.h"

namespace learning {
namespace logic {

class Or: public Logic {

public:
	Or() {
		map<string, Input*> inputs;
		inputs["0"] = new Input("0", 1);
		inputs["1"] = new Input("1", 1);

		int bias = 0;
		this->inputs = inputs;
		this->bias = bias;
	};

	virtual ~Or();
};

} /* namespace logic */
}

#endif /* OR_H_ */
