#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double cost,total;
    int tip,tax;
    scanf("%lf%d%d",&cost,&tip,&tax);
    total=cost+((cost*tip)/100)+((cost*tax)/100);
    printf("The total meal cost is %.0f dollars.",round(total));
    return 0;
}

