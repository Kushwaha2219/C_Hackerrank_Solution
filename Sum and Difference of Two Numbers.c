#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d %d\n%f %f",&a,&b,&c,&d);
    int x=a+b;
    int y=a-b;
    float e=c+d;
    float f=c-d;
    printf("%d %d\n",x,y);
    printf("%.1f %.1f",e,f);
    return 0;
}
