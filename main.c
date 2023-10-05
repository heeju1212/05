#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 32;
	int trial = 0;
	int num;
	do{
		printf("Guess a number:");
		scanf("%d",&num);
		
		if (num > answer){
			printf("high!\n");
		}
		else if (num < answer){
			printf("low!\n");
		}
		trial++;
	}
	while(num != answer);
	
	printf("Congratulation! trials : %d\n",trial);
	system("PAUSE");
	return 0;
}
