#include <stdlib.h>
#include "queue.h"

int QUEUEinit(int c);
int enQUEUE(int i);
int deQUEUE();
int isInQUEUE();
void QUEUEdestroy();
int GRAPHpath(int v, int w);
void GRAPHpath(FILE *f);
//ADT of a queue of non-negative integers
typedef struct node{
	int i;
	struct node *next;
}Node;

Node *front;
Node *rear;
int capacity, size;

int QUEUEinit(int c){
	front = rear = NULL;
	capacity = c;
	size = 0;
}

int enQUEUE(int i){
	if(size == capacity)
		return 0;
	Node *p = malloc(sizeof(Node));
	if(p == NULL)
		return 0;
	if(front == NULL){
		front = rear = p;
	} else{
		rear->next = p;
		rear = p;
	}
	size++;
	return 1;
}


int deQUEUE(){
	if(front == NULL)
		return -1;
	Node *p = front;
	front = front->next;
	int v = p->i;
	free(p);
	if(front == NULL)
		rear = NULL;
	size--;
	return v;
}

int isInQUEUE(int i){
	Node *p = front;
	while(p != NULL && p->i != i)
		p = p->next;
	if(p == NULL)
		return 0;
	else
		return 1;
}

void QUEUEdestroy(){
	Node *p = front;
	while(p != NULL){
		Node *q = p->next;
		free(p);
		p = q;
	}
	front = rear = NULL;
	size = 0;
}

int GRAPHpath(int v, int w){
	if v == w return 1 
	mark v as visited 
	for all edges v-x 
		if x has not been visited 
			if path(x, w) == 1 
				print edge x-v 
				return 1
			end if 
		end if 
	end for 
	return 0 
end function
}

void GRAPHprint(FILE *f){

}

