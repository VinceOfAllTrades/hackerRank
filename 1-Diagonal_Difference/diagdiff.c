#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;                                 //Matrix Size n x n
    int sum1=0, sum2=0;                    //Diagonal sums
    int diff;                              //Diagonal Difference
    //printf("Input matrix size: ");
    scanf("%d",&n);                        //Read size
    int a[n][n];                           //Create 2d array to store values

    //printf("Input matrix values with %d values per row:\n", n);
    for(int a_i = 0; a_i < n; a_i++){      //Read Matrix Values
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
       printf("\n");
       sum1+=a[a_i][a_i];                  //Sum tl;br diagonal
       sum2+=a[a_i][n-1-a_i];              //Sum tr;bl diagonal
    }
    printf("%d\n",abs(sum1-sum2));         //Print difference

    return 0;
}
