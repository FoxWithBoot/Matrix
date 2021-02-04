#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
vector<float> minusss(vector<float> r1, vector<float> r2, float t) {
	for (int i = 0; i < r1.size(); i++) {
		r1[i] = r1[i] - r2[i] * t;
	}
	return r1;
}