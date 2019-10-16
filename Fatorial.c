#include <stdio.h>


int main()
{
	int a;
	scanf("%d", &a);
	int res = 1;
	
    if(a<0){
        while(a<0){
            printf("ERROR! Enter a positive number!\n");
            scanf("%d",&a);
        }
    }
    if(a>=0){
	    while(a>0)
	        {res*=a;
	        a--;}
    }
	printf("%d\a", res);
    return 0;
}