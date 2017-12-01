//ADT of a queue of non-negative integers
/* initializes a queue of a given capacity*/
int QUEUEinit(int capacity);
/* queues i, returns 1 if successful, 0 otherwise */
int enQUEUE(int i);
/* dequeues one node, returns value, or -1 if queue
	 is empty */
int deQUEUE(); // or int deQUEUE(int * i);
/* returns 1 if there exists a node with value i */
int isInQUEUE(int i);
void QUEUEdestroy();
int GRAPHpath(int v, int w);
void GRAPHpath(FILE *f);