#include <stdio.h>

int main(void) {
					int i,j,n;
					int c=0;
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
							if(a[i]==a[j])
							{ 
                if(c==0){
								printf("%d",a[i]);
								c++;
								break;

							}
							}
						}
					}
	return 0;
}
