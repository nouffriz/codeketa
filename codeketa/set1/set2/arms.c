#include <stdio.h>

int main(void) {
					int a;
					int temp;
					int rem;
					int result=0;
					scanf("%d",&a);
					temp=a;
					while(temp!=0)
					{
							rem=temp%10;
							result=result+rem*rem*rem;
							temp=temp/10;
				  }
					if(result==a)
					{
						printf("yes",a);
					}
					else
					printf("no",a);
	return 0;
}
