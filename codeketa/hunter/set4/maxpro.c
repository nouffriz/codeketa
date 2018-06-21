#include <stdio.h>

int main(void) {
				int n,i,j;
				int mul=1;
				int max=0;
				scanf("%d",&n);
				int a[n];
				for(i=0;i<n;i++)
				{
				scanf("%d",&a[i]);
				}
				for(i=0;i<n;i++)
				{
					mul=a[i];
					
					for(j=i+1;j<n;j++)
					{
						
						
						mul=mul*a[j];
								
					}	
						if(mul>max)
						{
							max=mul;
						}
					
				}
				printf("%d",max);	
	return 0;
}
