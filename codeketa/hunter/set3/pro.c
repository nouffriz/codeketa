#include <stdio.h>

int main(void) {
						int n;
						int i;
					  int	sum=1;
					  int pro;
						scanf("%d",&n);
						int a[n];
						for(i=0;i<n;i++)
						{
							scanf("%d",&a[i]);
						}
						for(i=0;i<n;i++)
						{
						   sum=sum*a[i];
						}
						for(i=0;i<n;i++)
						{
		
							pro=sum/a[i];
							printf("%d\t",pro);
							
						}
						
						
	return 0;
}
