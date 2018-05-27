#include <stdio.h>

int main(void) {
					int n;
					int i,j,k;
					int count=0;
					scanf("%d",&n);
					int a[n];
					for(i=0;i<n;i++)
					{
						scanf("%d",&a[i]);
					}
					scanf("%d",&k);
					for(i=0;i<n;i++)
					{
						for(j=i+1;j<n;j++)
						{
							if(a[i]+a[j]==k)
							{
								count++;
							}	
						}
					}
					if(count>=1)
					{
						printf("YES");
					}
					else
					printf("NO");
					return 0;
}
