#pragma once
#ifndef Header2_h
#define Header2_h
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <math.h>
#include "trianglematrix.h"//приведение матрицы к ступенчатому виду
#include "transponation.h"//транспонирование матрицы
using namespace std;

class Matrix
{
private:
	int n;
	int m;
	vector<vector<float>> a;

public:

	Matrix(int valuen, int valuem) { // конструктор1
			n = valuen;
			m = valuem;
			a.resize(valuen);
			for (int i = 0; i < valuen; i++) {
				a[i].resize(valuem);
			}
	}

	Matrix(int valuen, int valuem, vector<vector<float>> valuematrix) { // конструктор2
			n = valuen;
			m = valuem;
			a = valuematrix;
	}

	void setmatrix(vector<vector<float>> valuematrix) {
		a = valuematrix;
	}

	vector<vector<float>> getmatrix() {
		return a;
	}

	vector<vector<float>> step() { //приведение матрицы к ступенчатому виду
		return (treug_matrix(a));
	}

	float det() { //определитель матрицы
		vector<vector<float>>b;
		float determ = 1;
			b = treug_matrix(a);
			for (int i = 0; i < n; i++) {
				determ = determ*b[i][i];
			}
			return determ;
	}

	vector<vector<float>> transp() {
		return transponation(a);
	}

	Matrix& operator = (const Matrix &other) { // переопределение =
		this->n = other.n;
		this->m = other.m;
		this->a.clear();
		this->a.resize(0);
		this->a = other.a;
		return *this;
	}

	Matrix operator * (const float &f) { //умножение матрицы на число
		Matrix b(this->n, this->m);
		b.a = this->a;
		for (int i = 0; i < this->n; i++) {
			for (int q = 0; q < this->m; q++) {
				b.a[i][q] = this->a[i][q] * f;
			}
		}
		return b;
	}

	Matrix operator / (const float &f) { //деление матрицы на число
		Matrix b(this->n, this->m);
		b.a = this->a;

		for (int i = 0; i < this->n; i++) {
			for (int q = 0; q < this->m; q++) {
				b.a[i][q] = this->a[i][q] * (1 / f);
			}
		}
		return b;
	}

	Matrix operator * (const Matrix &other) { //перемножение матрицы
			Matrix b(this->n, other.m);
			for (int i = 0; i < b.n; i++) {
				for (int q = 0; q < b.m; q++) {
					for (int j = 0; j < other.n; j++) {
						b.a[i][q] = b.a[i][q] + this->a[i][j] * other.a[j][q];
					}
				}
			}
			return b;
	}

	Matrix operator +(const Matrix &other) {
		Matrix b(this->n, this->m);
		for (int i = 0; i < b.n; i++) {
			for (int q = 0; q < b.m; q++) {
				b.a[i][q] = this->a[i][q] + other.a[i][q];
			}
		}
		return b;
	}

	Matrix operator -(const Matrix &other) {
		Matrix b(this->n, this->m);
		for (int i = 0; i < b.n; i++) {
			for (int q = 0; q < b.m; q++) {
				b.a[i][q] = this->a[i][q] - other.a[i][q];
			}
		}
		return b;
	}

	float minor(const int &x,const int &y) { //минор
		Matrix b(n - 1, m - 1);
		vector<vector<float>> matm;
		vector<float> t;
			for (int i = 0; i < n; i++) {
				for (int q = 0; q < m; q++) {
					if ((i != x) && (q != y)) {
						t.push_back(a[i][q]);
						if (t.size() == n - 1) {
							matm.push_back(t);
							t.resize(0);
						}
					}
				}
			}
			b.setmatrix(matm);
			return b.det();
	}

	float dop(const int &x, const int &y) { //алгебраическое дополнение
			return (pow(-1, x + y)*this->minor(x, y));
	}

	vector<vector<float>> inverse() { //обратная матрица
		Matrix b(n, m, a);
		Matrix c(n, m);
			for (int i = 0; i < n; i++) {
				for (int q = 0; q < m; q++) {
					c.a[i][q] = b.dop(i, q);
				}
			}
			c.transp();
			c = c / b.det();
			return c.a;
	}
};
#endif