#include "Graph.h"

Grafo::Grafo(int nSt, int nAB){
	numStates = nSt;

	M= new int*[numStates];
	for(int i=0;i<numAlphaB;i++){
		M[i] = new int[numAlphaB];
	}
	for(int i=0;i<numVert;i++){
		for(int j=0;j<numAlphaB;j++){
			M[i][j]=0;
		}
	}

}

void Grafo::connect(int s1, int s2){
	M[s1][s2] = 1;
}

int Grafo::disconnect(int s1, int s2){
	M[s1][s2] = 0;
}

void Grafo::printMatrix(){
	system("clear");
	for(int i=0;i<numStates;i++){
		for(int j=0;j<numAphaB;j++){
			cout<<M[i][j]<<" ";
		}
	cout<<endl;
	}
}

int Grafo::returnNstates(){
	return numStates;
}

int Grafo::returnNAB(){
	return numAplhaB;
}

