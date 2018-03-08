#include <stdio.h>

int main(void) {
					int size;
					int a[10];
					int i;
					int temp;
					scanf("%d",&size);
					for(i = 0;i < size;i++){
						scanf("%d",&a[i]);
					}
					temp=a[0];
					for(i=1;i<size;i++)
					if(temp<a[i])
					{
						temp=a[i];
					}
					printf("%d",temp);
					
					
	return 0;
}
