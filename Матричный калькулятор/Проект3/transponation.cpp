#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
vector<vector<float>> transponation(vector<vector<float>> a) {
	int n = a.size();
	int m = a[0].size();
	float t;
	vector<vector<float>> tr;
	tr.resize(m);
	for (int q = 0; q < m; q++) {
		tr[q].resize(n);
	}
	for (int i = 0; i < n; i++) {
		for (int q = 0; q < m; q++) {
			tr[q][i] = a[i][q];
		}
	}
	return tr;
}