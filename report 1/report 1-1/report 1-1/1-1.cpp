#include <stdio.h>
#include <string.h>

int main()
{
	char ep[20] = {};		
	char password[20] = "cju21";							 // 문자열 초기화

	printf("ENTER THE PASSWORD: \n");

	do {
		scanf_s("%s", ep, 20);								// 새로운 문자열 입력
		if (strcmp(password, ep) == 0)						// 문자열 비교
		{
			printf("normal termination..\n");
			break;			 
		}
		else
			printf("not matched retry..\n\n");
	} while (1);
	return 0;
}