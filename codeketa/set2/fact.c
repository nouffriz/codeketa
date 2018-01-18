#include <stdio.h>

int main(void) {
					int n;
					int i;
					int fact=1;
					scanf("%d",&n);
					for(i=1;i<=n;i++)
					fact=fact*i;
					 printf("%d",fact);
	return 0;
}
