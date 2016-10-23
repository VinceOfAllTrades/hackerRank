// Fails Test #5, 12, 13, 14

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;                                 //number of integers
    int k;                                 //number of rotations
    int q;                                 //number of queries
    scanf("%d %d %d",&n,&k,&q);
    k = k%n;                               //avoid repetition

    int *a = malloc(sizeof(int) * n);      //integer array
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int a_pre, a_cur;                      //holds previous/current values


    //Rotate Array
    for(int i=0; i<k;i++){
      for(int a_i = 0; a_i < n; a_i++){     //iterate elements
        a_cur = a[a_i];                     //store current
        if(a_i==0) a[0] = a[n-1];           //wrap last element
        else       a[a_i] = a_pre;          //replace with previous
        a_pre = a_cur;                      //move current to previous
      }
    }

    for(int a0 = 0; a0 < q; a0++){          //Query
        int m;
        scanf("%d",&m);                     //Get position
        printf("%d\n",a[m]);                //Print position
    }

    return 0;
}
