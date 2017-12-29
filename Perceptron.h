/*
 * Perceptron.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#include <vector>
#include <map>

#include "Input.h"
using namespace std;

#ifndef PERCEPTRON_H_
#define PERCEPTRON_H_

namespace learning {
class Perceptron {
protected:
	int bias;
	map<string, Input*> inputs;
public:
	int activation(map<string, int> values);
	float dotProduct(map<string, int> values);
	Perceptron();
	Perceptron(map<string, Input*> inputs, int bias);
	virtual ~Perceptron();
};
}

#endif /* PERCEPTRON_H_ */
