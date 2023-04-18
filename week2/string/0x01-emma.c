#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[] = "Emma";
        int length = strlen(name);

        for (int i = 0; i < length; i++)
        {
        	printf("%c\n", name[i]);
        }
        return (0);
}
