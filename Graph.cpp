#include "Graph.h"

Grafo::Grafo(int nSt, int nAB){
	numStates = nSt;

	M= new int*[numStates];
	for(int i=0;i<numAlphaB;i++){
		M[i] = new int[numAlphaB];
	}
	for(int i=0;i<numStates;i++){
		for(int j=0;j<numAlphaB;j++){
			M[i][j]=0;
		}
	}

}

void Grafo::connect(int s1, int s2){
	M[s1][s2].setConnection(1);
}

void Grafo::disconnect(int s1, int s2){
	M[s1][s2].setConnection(0);
}

void Grafo::setInitialState(int s1, int s2){
	M[s1][s2].setInit(TRUE);
}

void Grafo::setFinalState(int s1, int s2){
	M[s1][s2].setFinal(TRUE);
}

void Grafo::printMatrix(){
	system("clear");
	for(int i=0;i<numStates;i++){
		for(int j=0;j<numAlphaB;j++){
			cout<<M[i][j].getConnection()<<" ";
		}
	cout<<endl;
	}
}

int Grafo::returnNstates(){
	return numStates;
}

int Grafo::returnNAB(){
	return numAlphaB;
}

