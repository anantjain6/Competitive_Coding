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
    for(i=1;i<=10;i=i+1)
        printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}
