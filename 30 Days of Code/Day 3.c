#include <stdio.h>
int main(){
    int N; 
    scanf("%d",&N);
    if(N%2)
    {
        printf("Weird");
    }
    else
    {
        if(N>=2 && N<=5)
            printf("Not Weird");
        else if(N>=6 && N<=20)
            printf("Weird");
        else
            printf("Not Weird");
    }
    return 0;
}
