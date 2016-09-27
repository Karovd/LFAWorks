#include "Graph.h"
using namespace std;

int main(int argc, char** argv){
	Grafo *G;
	fstream file;
	int auto_state=0, auto_iterator=0, auto_statenum=0;
	string all_states, alphabet, connections, initial_states;
	char ch;

	file.open(argv[1], ios::in | ios::out);
	if(file.fail()) {
		cout<<"Erro ao abrir o arquivo!"<<endl;
		file.clear();
	} else {
		auto_state=0;
		while(!file.eof()) {
			ch=file.get();
			switch(auto_state) {
				case 0:	if(ch==' ' || ch=='\t') {
						auto_state=0;
					} else if(isdigit(ch)) {
						cout<<"File input incorrect, aborting process"<<endl;
						exit(0);
					} else {
						auto_state=1;
					}
				break;
				case 1: if(ch!='{') {
						auto_state=1;
					} else {
						auto_state=2;
					}
				break;
				case 2: if(ch!='}') {
						if(auto_iterator==0) {
							all_states+=ch;
						} else if(auto_iterator==1) {
							alphabet+=ch;
						} else if(auto_iterator==2) {
							connections+=ch;
						}
					} else {
						if(auto_iterator==2) {
							auto_state=3;
						} else {
							auto_iterator++;
							auto_state=1;
						}
					}
				break;
				case 3: if(ch!=')') {
						initial_states+=ch;
					} else {
						file.unget();
						auto_state=4;
					}
				break;
			}
		}
		cout<<all_states<<endl<<alphabet<<endl<<connections<<endl<<initial_states<<endl;
	}	
		
	return 0;
}
