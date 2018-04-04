#include <stdio.h>

int main(void) {
					int i,j,n,c=0,k,count=0;
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
							if(a[i]==a[j]){
							count++;
						
					}
						}
					if(count==0)
					{
						for(k=0;k<i;k++){
							if(a[k]==a[i]){
						c=1;
						break;
							}
						}
						if(c==0)
						{
							printf("%d",a[i]);
						}
					}
					c=0;
					count=0;
					}
					return 0;
}
