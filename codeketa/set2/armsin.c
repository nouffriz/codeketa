#include <stdio.h>

int main() {
				          int a;
				          int b;
				           scanf("%d",&a);
				            scanf("%d",&b);
				            for(int i=a;i<=b;i++)
				              {
					                int rem=0;
					                int res;
					                int temp=i;
					              while(temp!=0)
				            {
						            res=temp%10;
						            rem=rem+res*res*res;
						            temp=temp/10;
							
				          }
				            if(i==rem)
				        {
					        printf("%d\n",i);
				        }
				
			}		
			return 0;
      }
