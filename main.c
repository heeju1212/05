#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int abs;
	printf("���� �ϳ��� �Է��ϼ��� :");
	scanf("%d",&num);
	
	
	if (num < 0){
		abs = -num;
	}
	else{
		abs = num;
	}
	printf("������ %d�Դϴ�.\n",abs);
	system("PAUSE");
	return 0;
}
