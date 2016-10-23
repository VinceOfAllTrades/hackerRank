#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n;                                 //Matrix Size n x n
    int sum=0;                             //Diagonal Difference
    scanf("%d",&n);                        //Read size
    int a[n][n];                           //Create 2d array to store values

    for(int a_i = 0; a_i < n; a_i++){      //Read Matrix Values
       for(int a_j = 0; a_j < n; a_j++){
          scanf("%d",&a[a_i][a_j]);
       }
       //Rather than make a new loop, let's sum here. 
       sum+=a[a_i][a_i];                   //+tl;br diagonal elements   
       sum-=a[a_i][(n-1)-a_i];             //-tr;bl diagonal elements
    }
    printf("%d\n",abs(sum));

    return 0;
}
