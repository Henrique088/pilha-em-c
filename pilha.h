#ifndef PILHA_H
#define PILHA_H

#ifdef __cplusplus
extern "C" {
#endif

struct Pilha {

	int topo; 
	int capa;
	float *pElem;

};


void criarpilha( struct Pilha *p, int c );
int estavazia ( struct Pilha *p );
int estacheia ( struct Pilha *p );
void empilhar ( struct Pilha *p, char v);
float desempilhar ( struct Pilha *p );
float retornatopo ( struct Pilha *p );


#ifdef __cplusplus
}
#endif



#endif /* PILHA_H */