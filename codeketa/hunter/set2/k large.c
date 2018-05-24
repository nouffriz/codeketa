#include <stdio.h>

int main(void) {
					int n;
					int k;
					int i ,j;
					int temp;
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
							if(a[i]<a[j])
							{
								temp=a[i];
								a[i]=a[j];
								a[j]=temp;
							}
							
						}
					}
				printf("\n %d",a[n-k]);
					
	return 0;
}
