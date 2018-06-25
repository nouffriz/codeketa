#include <stdio.h>
#include<string.h>
int main(void) {

					char str[20];
					int i,l;
					scanf("%[^\n]s",str);
					l=strlen(str);
					for(i=l-1;i>=0;i--)
					{
						printf("%c",str[i]);
					}

	return 0;
}
