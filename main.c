#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

FILE *fp;
char name[100];
printf("Input a file name :");
scanf("%s",name); /* name �� �����Ͷ� & ���� */
//fopen  
fp = fopen(name, "r");
// error handling 
if (fp==NULL)
{
	printf ("ERROR! check the file name : %s\n",name);
	return -1; /* ���������� ������ �Ͱ� �ٸ� �� */ 
}

	return 0;
}
