#include <stdio.h>



int main(void) {

				

					int n,i;

					scanf("%d",&n);

					int a[n];

					int sum=0;
					
					if(n>1 && n<=10000)

					for(i=0;i<n;i++)

					{

						scanf("%d",&a[i]);

					}

					for(i=0;i<n;i++)

					{

						sum=sum+a[i];

					

					}

					printf("%d",sum);

					

					

	return 0;

}
