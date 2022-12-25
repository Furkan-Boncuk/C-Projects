#include <stdio.h>
#include <stdlib.h>

void dortgen(int kisa,int uzun){
	int i,j;
	for(i=0;i<kisa;i++){
		for(j=0;j<uzun;j++){
			if(i==0){
				printf("*");
			}
			else if(i==(uzun-1)){
				printf("*");
			}
			else{
				if(j==0 || j==(kisa-1)){
					printf("*");	
				}
			else{
				printf(" ");	
			}
		}
	}		
	printf("\n");
}
}

int main() {
	
	dortgen(5,9);
	
}
