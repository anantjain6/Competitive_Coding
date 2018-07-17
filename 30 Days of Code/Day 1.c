#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    
    
    int i2;
    double d2;
    char s2[50];
    char s3[100];

    strcpy(s3,s);
    
    scanf("%d\n%lf\n",&i2,&d2);
    
    gets(s2);
    
    printf("%d\n",i+i2);
    
    printf("%.1f\n",d+d2);
    
   strcat(s3,s2);

    puts(s3);    

    return 0;
}
