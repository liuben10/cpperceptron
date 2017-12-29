/*
 * Input.cpp
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#include "Input.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
using namespace learning;

Input::Input(string featureId, float w) {
	weight = w;
	feature = featureId;
}

Input::~Input() {
	free(this);
}

float Input::value(int input) {
	return input * weight;
}

string Input::getFeature() {
	return feature;
}

float Input::getWeight() {
	return weight;
}
