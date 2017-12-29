/*
 * Perceptron.cpp
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#include "Perceptron.h"

using namespace learning;

Perceptron::Perceptron() {
	this->bias = 0;
}

Perceptron::Perceptron(map<string, Input*> map, int bias) {
	this->inputs = map;
	this->bias = bias;
}

int Perceptron::activation(map<string, int> values) {
	float dotProductRes = dotProduct(values);
	float biasedProduct = dotProductRes + bias;
	if (biasedProduct > 0) {
		return 1;
	} else {
		return 0;
	}
}

float Perceptron::dotProduct(map<string, int> values) {
	float totalActivation = 0;
	for(map<string, int>::iterator iter = values.begin(); iter != values.end(); ++iter) {
		Input * i = inputs[iter->first];
		totalActivation += i->value(iter->second);
	}
	return totalActivation;
}

Perceptron::~Perceptron() {
	inputs.clear();
	free(this);
}
