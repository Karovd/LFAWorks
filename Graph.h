#ifndef GRAFO_H
#define GRAFO_H

#include "MatrixCell.h"
using namespace std;


class Grafo{
	public:
	Grafo(int nSt, int nAB);
	~Grafo();
	void connect(int s1, int s2);
	void disconnect(int s1, int s2);
	void setInitialState(int s1, int s2);
	void setFinalState(int s1, int s2);
	void printMatrix();
	int returnNAB();
	int returnNstates();
	private:
	MatrixCell **M;
	int numStates;
	int numAlphaB;
};

#endif
