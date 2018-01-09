#include <stdio.h>

int main(void) {
	                int n;
	                int temp;
	                int reverse=0;
	                scanf("%d",&n);
	                temp=n;
	                while(temp!=0)
	                {
	                	reverse=reverse*10;
                		 reverse=reverse+temp%10;
                		temp=temp/10;
	                }
	                if(n==reverse)
	                {
	                	printf("yes",n);
	                }
	                else
	                printf("no",n);
	return 0;
}
