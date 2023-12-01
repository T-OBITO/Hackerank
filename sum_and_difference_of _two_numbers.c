#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float d,c;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&d,&c);
    printf("%d %d",a+b,a-b);
    printf("\n%0.1f %0.1f",d+c,d-c);
    return 0;
}
