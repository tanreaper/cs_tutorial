#include <stdio.h>
#define BUFFERSIZE 4096

enum day {sunday = 1, tuesday, wednesday, thursday = 100, friday, saturday};

int main()
{
    /* Enum example */
	enum day d = thursday;
	printf("The day number stored in d is %d\n", d);

    /* roman number code help */
    char str[BUFFERSIZE];
    printf("Enter Roman number\n");
    fgets(str, (sizeof(str) / sizeof(str[0])), stdin);
    printf("%s", str);

	return 0;
}
