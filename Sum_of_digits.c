#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum=0,temp;
    scanf("%d", &n);
    for (int i=0;i<5;i++){
        temp=n%10;
        n=n/10;
        sum=sum+temp;
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
