#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&arr[i]);
    }
    n=n-1;
    while(n>=0)
    {
        printf("%d",arr[n]);
        if(n!=0)
            printf(" ");
        n=n-1;
    }
    return 0;
}

