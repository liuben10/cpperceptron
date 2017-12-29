/*
 * Input.h
 *
 *  Created on: Dec 29, 2017
 *      Author: liuben10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string>

#ifndef INPUT_H_
#define INPUT_H_

using namespace std;

namespace learning {
class Input {
private:
	string feature;
	float weight;
public:
	void setWeight(float);
	string getFeature();
	float getWeight();

	float value(int);
	Input(string, float);
	virtual ~Input();
};
}

#endif /* INPUT_H_ */
