#include <stdio.h>
#include <string.h>

int main()
{
	char ep[20] = {};		
	char password[20] = "cju21";							 // ���ڿ� �ʱ�ȭ

	printf("ENTER THE PASSWORD: \n");

	do {
		scanf_s("%s", ep, 20);								// ���ο� ���ڿ� �Է�
		if (strcmp(password, ep) == 0)						// ���ڿ� ��
		{
			printf("normal termination..\n");
			break;			 
		}
		else
			printf("not matched retry..\n\n");
	} while (1);
	return 0;
}