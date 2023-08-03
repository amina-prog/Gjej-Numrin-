//kodi i projektit 1: Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h> //m duhet per me gjeneru numrin e rastesishem

int main(){
	int numri, tentativa, numTentativave=0;
	
	srand(time(0));
	
	numri = rand()%100; //gjeneron nje numer te rastesishem nga 1 ne 100
	
	printf("Mire se erdhet ne loje!\n");
	printf("Eshte zgjedhur nje numer nga 1 ne 100.\n Provo ta gjesh! ");
	
	do{
		printf("\nShkruaj numrin qe mendon se eshte:\n");
		scanf("%d", &tentativa);
		numTentativave++;
		
		if(tentativa > numri){
			printf("Me i vogel.\n");
		}else if(tentativa < numri){
			printf("Me i madh.\n");
		}else{
			printf("Urime, ju e keni gjetur numrin ne %d tentativa :)", numTentativave);
			break;
		}
	}while(1);
	return 0;
}
