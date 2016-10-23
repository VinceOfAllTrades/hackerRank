#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int i, j;                         //loop counters
    int n;                            //number of lines
    scanf("%d",&n);

    for(i=0;i<n;i++){                 //line position
       for(j=1;j<=n;j++){             //char position
           if(j >= n-i) printf("#");
           else printf(" ");
       }
       printf("\n");
    }
    return 0;
}
