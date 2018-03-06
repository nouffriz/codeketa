#include <stdio.h>

int main(void) {
		int i,n,c=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0){
			c++;
		}
		}
			if(c==2)
			{
				printf("Yes",n);
			}
			else
			 printf("No",n);
	return 0;
}
