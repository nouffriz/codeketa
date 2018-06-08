#include <stdio.h>
#include <string.h>
int main(void) {
					char s1[30];
					int l,i;
					scanf("%[^\n]s",s1);
					l=strlen(s1);
					for(i=l-1;i>=0;i--)
					{
						printf("%c\n",s1[i]);
					}
					
					return 0;
}
