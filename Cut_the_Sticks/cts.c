#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void printArr(int *a, int n){
    for(int i = 0; i < n; i++){
      printf("%d ",a[i]);
    }
    printf("\n");
}

//Sorts Array
void sortArr(int *a, int n){
    int tmp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i] > a[j]){
                tmp  = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main(){
    int n;                                    //number of integers
    scanf("%d",&n);
    int a[n];                                 //int array
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }

    sortArr(a, n);                            //Sort array
    /*printf("Sorted array: ");
    printArr(a, n);   */                      //Print sorted array

    int lcut;                                 //length of cut
    int nsticks=99;                           //number of sticks
    printf("%lu\n",sizeof(a)/sizeof(a[0]));   //initial size
    while(nsticks>1){
        nsticks=0;
        lcut=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){                       //ignore 0s
                if(lcut == 0) lcut = a[i];    //set cut length
                a[i]-=lcut;                   //cut values
                if(a[i] > 0)nsticks++;        //count value if not 0
            }
        }
        /*  Printing stuff for troubleshooting
        printf("Length of Cut: %d\n", lcut);
        printf("Updated Array: ");
        printArr(a,n);
        printf("Number of Sticks: "); */
        if(nsticks > 0) printf("%d\n",nsticks);
    }
    return 0;
}
