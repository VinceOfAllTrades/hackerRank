#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

 int main(){
     int n;                                    //Number of ints
     int n_pos=0, n_neg=0, n_0=0;              //Number of positive/negative/0
     scanf("%d",&n);
     int a[n];                                 //Int array
     for(int i = 0; i < n; i++){               //Read array
        scanf("%d",&a[i]);
        //Look at the number we just scanned
        if(a[i] > 0)      n_pos++;
        else if(a[i] < 0) n_neg++;
        else              n_0++;
     }
     printf("%.2f\n%.2f\n%.2f\n", (float)n_pos/n, (float)n_neg/n, (float)n_0/n);

     return 0;
 }
