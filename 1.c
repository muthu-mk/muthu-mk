#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num==0)
       printf("ZERO");
    else if(num>0)
        printf("PASITIVE NUMBER");
        else
        printf("NEGATIVE NUMBER");
    return 0;
}
