#include <stdio.h>
#include <string.h>
int main()
{
	char test[5];

	test[0] = 'a';
	test[1] = 'c';
	test[2] = 'l';
	test[3] = 'l';
	test[4] = 'o';
		
	printf("%s\n" , test);

	//char test2[10];

	//scanf("%[^\n]", test2);

	//printf("%s\n" , test2);


	//stringfunctions

	//printf("%ld\n",strlen(test));

	char test3[10] = "aac";
	//strcpy(test3, test);
	//printf("%s\n", test3);

	//strncpy(test3, test, 2);
	//printf("%s\n", test3);

	printf("%d\n",strncmp(test, test3, 2));
}
