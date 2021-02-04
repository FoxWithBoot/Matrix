#include "stdafx.h"
#include <iostream>
#include <vector>
#include "minus.h"
using namespace std;

vector<vector<float>> treug_matrix(vector<vector<float>> matt) {
	int n, m, r;
	float t;
	n = matt.size();
	m = matt[0].size();
	if (m > n) r = n;
	else r = m;
	for (int i = 0; i < r - 1; i++) {
		if (i == m) break;
		if (matt[i + 1][i] == 0) continue;
		if (matt[i][i] == 0) {
			matt[i] = minusss(matt[i], matt[i + 1], 1);
		}
		for (int q = i + 1; q < n; q++) {
			t = matt[q][i] / matt[i][i];
			//cout << t << endl;
			matt[q] = minusss(matt[q], matt[i], t);
		}
	}
	return matt;
}