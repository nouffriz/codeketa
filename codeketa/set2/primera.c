#include <stdio.h>

int main(void) {
						int s,e,i,c=0,j;
						scanf("%d",&s);
						scanf("%d",&e);
						for(i=s;i<=e;i++)
						{
							c=0;
							for(j=2;j<=i/2;j++)
							{
								if((i%j)==0){
								c++;
							}
						}
						if(c==0)
						printf(" %d",i);
						}
						
	return 0;
}
