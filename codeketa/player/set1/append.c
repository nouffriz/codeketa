#include <stdio.h>
#include<string.h>

int main(void) {
					char s1[20];
					int l;
					scanf("%s",s1);
					l=strlen(s1);
					s1[l]='.';
					printf("%s",s1);
					return 0;
}
