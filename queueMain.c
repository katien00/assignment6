#include <stdlib.h>
#include "queue.h"

int main(int argc, int *argv[]){
	FILE *f = fopen(argv[1], "rw");
	char *current;

	char file_vals = strtok(f, " ");
	int vertices = atoi(file_vals);
	file_vals = strtok(NULL, " ")
	int edges = atoi(edges);

	for(int i=0; i<vertices; i++){
		
	}


	GRAPHprint(f);
	printf("Enter a pair of vertices (^D to quit): ");
	scanf("%s", current);
	char str = strtok(current, " ");

	while(strcmp(str, "^D") != 0){
		int start = atoi(str);
		str = strtok(NULL, " ");
		int end = atoi(str);
		int isPath = GRAPHpath(start, end);

		if(isPath == 1){
			printf("path exists\n");
		}
		else{
			printf("path does not exist\n");
		}

		printf("Enter a pair of vertices (^D to quit): ");
		scanf("%s", current);
		str = strtok(current, " ");
	}
}

void GRAPHinsertE(){

}