#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int sum=*a+*b;
    int diff1=*a-*b;
    int diff2=*b-*a;
    
    printf("%d\n",sum);
    if(*a>*b){
        printf("%d",diff1);
    } 
    
    else
    printf("%d",diff2);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
  //  printf("%d\n%d", a, b);

    return 0;
}
