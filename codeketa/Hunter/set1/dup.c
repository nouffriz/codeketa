#include <stdio.h>

int main(void) {
			int i,j,a[20],n;
			scanf("%d",&n);
			for(i=1;i<n;i++)
				{
					scanf("%d",&a[i]);
			
				
			for(i=0;i<n;i++)
				{
				for(j=i+1;j<n;j++)
				{
					if(a[i]==a[j])
					{
						printf("%d",a[i]);
					
					}
					
				}
				}
				
				
	return 0;
				
}
