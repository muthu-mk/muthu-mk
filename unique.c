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
    int ar[100],n,num,i,j,c=0;
    printf("ENTER THE ARRAY SIZE\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&num);
        ar[i]=num;
        
    }
    qsort(ar,n,sizeof(int),sortarray);
   
    for(i=0;i<n;i++)
        {
       printf("%d ",ar[i]);
    }
   
    for( i=0,j=1;i<n-2,j<=n-2;i=i+2,j=j+2)
        {
         if(ar[i]==ar[j])
            {
               
            }
        else
            {
            printf("unique value is:%d",ar[i]);
            c=-1;
            i=n+5;
          }
    }
    if(c!=-1)
        {
        printf("unique value is:%d",ar[n-1]);
    }
   
        
    return 0;
}
