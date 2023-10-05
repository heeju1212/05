#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int abs;
	printf("정수 하나를 입력하세요 :");
	scanf("%d",&num);
	
	
	if (num < 0){
		abs = -num;
	}
	else{
		abs = num;
	}
	printf("절댓값은 %d입니다.\n",abs);
	system("PAUSE");
	return 0;
}
