#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;                                  //Number of test cases
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;                              //Number of students
        int k;                              //Cancelation threshold
        int on_time=0;                      //Counts on-time students
        scanf("%d %d",&n,&k);
        int a[n];                           //Student arrival time
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);             //Unnecessary
           if(a[a_i]<=0) on_time++;
        }
        if(on_time >= k) printf("NO\n");     //No class
        else             printf("YES\n");    //Class
    }
    return 0;
}
