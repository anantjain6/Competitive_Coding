#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,i,j;
    char s[10][100000];
    scanf("%d\n",&t);
    
    for(i=0;i<t;i=i+1)
    {
        gets(s[i]);
    }
    for(i=0;i<t;i=i+1)
    {
        for(j=0;;j=j+2)
        {
            if(s[i][j]=='\0')
                break;
            printf("%c",s[i][j]);
        }
        printf(" ");
        for(j=1;;j=j+2)
        {
            if(s[i][j]=='\0')
               break;
            printf("%c",s[i][j]);
        }
        printf("\n");
	}
    return 0;
}

