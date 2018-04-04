#include <stdio.h>

int main(void) {
						int n,i;
						int count;
						scanf("%d",&n);
						int a[n];
						for(i=0;i<n;i++)
						{
							scanf("%d",&a[i]);
						}
						for(i=0;i<n;i++)
						{
							if(i==a[i])
							{
								printf(" %d",a[i]);
								count=count+1;
							}
						}
						if(count==0)
						{
						printf("-1");
						}
						
	return 0;
}
