#include <stdio.h>

int main(void) {
					int a,b;
					int result=1;
					scanf("%d",&a);
					scanf("%d",&b);
					while(b!=0)
					{
						result=result*a;
						b--;
					}
					printf("%d",result);
	return 0;
}
