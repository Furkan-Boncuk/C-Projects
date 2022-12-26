//Program that finds the greatest digit value of a entered number,the average of the digits and the number of digits when requested.
#include <stdio.h>
#include <conio.h>
int number,counter,b,c,great;
float total,avrg;
char choose;

void greatest(){
	great=0; b=number;
	while(b!=0){
		c=b-(b/10)*10;
		if(c>great){
			great=c;
		}
		b=b/10;
	}
	printf("Greatest number: %d\n",great);
}
void average(){
	total=0; counter=0; b=number;
	while(b!=0){
		c=b-(b/10)*10;
		total=total+c;
		counter++;
		b=b/10;
	}
	avrg=total/counter;
	printf("Average of digits: %2.1f\n",avrg);
}
void digit(){ 
	b=number; counter=0;
	while(b!=0){
		b=b/10;
		counter++;
	}
	printf("Number of digits: %d\n",counter);
}

int main() {
	printf("Entered a number: ");
	scanf("%d",&number);
	do{
		printf("\nSelect the process you want to do:\n");
	    printf("(1)Find the greatest digit of the number\n");
		printf("(2)Find the average of the digits of the number\n");
		printf("(3)Find the number of digits of the number\n");
		printf("(4)Exit\n");
		printf("Your Choice: "); choose=getch();
		//scanf("%s",&choose);
		printf("\n");
		if(choose=='1') greatest();
		if(choose=='2') average();	
		if(choose=='3') digit();
	}while(choose!='4');
}





