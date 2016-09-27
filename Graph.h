#ifndef GRAFO_H
#define GRAFO_H

#include <bits/stdc++.h>
using namespace std;

class Grafo{
	public:
	Grafo(int nSt, int nAB);
	~Grafo();
	void connect(int s1, int s2);
	void disconnect(int s1, int s2);
	void printMatrix();
	int returnnumVert();
	private:
	int **M;
	int numStates;
	int numAlphaB;
};

#endif
