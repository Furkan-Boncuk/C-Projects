//program that draws a rectangle with the side lengths entered from the keyboard
#include <stdio.h>
#include <stdlib.h>

int shortEdge,longEdge;
void rectangle(int shortEdge,int longEdge){
	int i,j;
	for(i=1;i<=longEdge;i++){
		for(j=1;j<=shortEdge;j++){
			if(j==1 || j==shortEdge){
				printf("*");
			}else if(i==1 || i==longEdge){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int main() {
	printf("Short Edge: ");
	scanf("%d",&shortEdge);
	printf("Long Edge: ");
	scanf("%d",&longEdge);
	if(longEdge>0 && shortEdge>0 && longEdge>shortEdge){
		printf("\n\n");
		rectangle(shortEdge,longEdge);
	}else{
		printf("\n\nEntered The Invalid Value");
	}
}
