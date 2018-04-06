#include <stdio.h>

int main(void) {
					int i,j;
					int n;
					scanf("%d",&n);
					int a[n];
	        for(i=0;i<n;i++)
					{
						scanf("%d",&a[i]);
					}
					for(i=0;i<n;i++)
					{
						for(j=i+1;j<n;j++)
						{
							if(a[i]+a[j]==0)
							{
								printf("%d %d\t",a[i],a[j]);
								break;
							}
						}
					}
	return 0;
}
