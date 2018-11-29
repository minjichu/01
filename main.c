#include <stdio.h>
#include <stdlib.h>
int is_whitespace(char c)
{   
	if (c== ' '  ||
		c== '\t' ||
		c== '\n' ||
		c== '\r' ||
		c==	'('  ||
		c== ')'	) 
	return 1; // 공백글자다 
	return 0;// 유의미한 글자다. 
 } 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fget_word(FILE* fp , char* word) {
	char c;
	int cnt; 

	while((c=fgetc(fp)) != EOF) { //1 문자 받음 
		if (is_whitespace==0){
			break;
		} 
	}
	if (c==EOF) //최초 읽은 문자가 마지막일떄  
	{	
		return 0;
	}
	
	// 본격적으로 단어를 한글자씩 읽음 
		cnt=0;
		word[cnt++]=c; //아까 읽은 첫글자 입력
		word[cnt] = '\0'; // 혹시 뒤에서 못읽을 수 있으므로 (한글짜자리 단어 )
		
		while ((word[cnt]= fgetc(fp))!=EOF){ //1문자 받음
			if (is_whitespace(word[cnt])== 1) //공백문자면 받은거 취소하고 나감  
			{
				word[cnt] = '\0';
				break; 
			}
			cnt ++;
		} 


	
	return 0;
}
 
  int main(int argc, char *argv[]) { 
  
 
  FILE *fp; 
  char name[100]; 
  char word[100];
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
 	//word reading
 	while (fget_word(fp, word) !=0)
 	{
 		//processing
 		count_word(word);
 		
	 }
	 print_word();
	 
	 //fclose
 	fclose(fp);
 	
  	return 0; 
  } 

