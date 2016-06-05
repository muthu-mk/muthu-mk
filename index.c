#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
    {
    int array[100],n,i,c=0;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",&array[i]);
    
    for(i=0;i<n;i++)
        {
        if(array[i]==i)
            {
            printf("index:%d  array value:%d\n",i,array[i]);
            c=1;
            }
    }
    if(c==0)
        printf("no match values");
    
    return 0;
}
