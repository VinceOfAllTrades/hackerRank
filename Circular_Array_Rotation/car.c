// Due to the nature of this problem, which I hadn't considered, you
// don't actually need to rotate the array, and rather just need to
// appropriately shift the index.

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
    k = k%n;                               //minimize rotations

    int *a = malloc(sizeof(int) * n);      //integer array
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int a_pre, a_cur;                      //holds previous/current values

    for(int a0 = 0; a0 < q; a0++){          //query
        int m;
        scanf("%d",&m);                     //get position
        int ind = m-k                       //rotated index
        if(ind>=0) printf("%d\n",a[ind]);   //no wrapping
        else       printf("%d\n",a[ind+n]); //wrapping
    }

    return 0;
}
