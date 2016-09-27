#ifndef MATRIXCELL_H
#define MATRIXCELL_H

#include <bits/stdc++.h>
using namespace std;

class MatrixCell{
	public:
	MatrixCell();
	~MatrixCell();
	void setConnection(int c);
	void setInit(bool i);
	void setFinal(bool f);
	int getConnection();
	bool getInit();
	bool getFinal();
	private:
	int connection;
	bool initial;
	bool final;
}

#endif
