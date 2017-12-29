/*
 * And.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */
#include "Perceptron.h"

#ifndef AND_H_
#define AND_H_

#include "Logic.h";

using namespace std;

namespace learning {
namespace logic {
class And: public Logic {
private:
public:
	And() {
		map<string, Input*> inputs;
		inputs["0"] = new Input("0", 1);
		inputs["1"] = new Input("1", 1);

		int bias = -1;
		this->inputs = inputs;
		this->bias = bias;
	}
	virtual ~And();
};
}
} /* namespace learning */

#endif /* AND_H_ */
