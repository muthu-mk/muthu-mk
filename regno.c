#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

sortarray(int const *a,int const *b)
    {
    return(*(int*)a-*(int*)b);
}

int main(){
    int array[100],regno,n,c=0;
    printf("ENTER THE NO OF REG NUMBERS\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
        scanf("%d",&regno);
        array[i]=regno;
    }
    qsort(array,n,sizeof(int),sortarray);
    for(int i=0;i<n;i++)
        {
       // printf("%d ",array[i]);
    }
    printf("repeated registered numbers are:\n");
   int first=array[0];
    for(int i=1;i<=n;i++)
        {
        if(first==array[i])
            {
               c=1;
            }
        else
            {
              if(c==1)
                    {
                      printf("%d\n",first);
                      c=0;
                    }
             else
                 {
                 first=array[i];
               }
        }
    }
    
    return 0;
}
