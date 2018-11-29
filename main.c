#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

FILE *fp;
char name[100];
printf("Input a file name :");
scanf("%s",name); /* name 이 포인터라서 & 생략 */
//fopen  
fp = fopen(name, "r");
// error handling 
if (fp==NULL)
{
	printf ("ERROR! check the file name : %s\n",name);
	return -1; /* 정상적으로 끝나는 것과 다른 값 */ 
}

	return 0;
}
