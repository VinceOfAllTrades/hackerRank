#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int n;                                       //number of socks
  scanf("%d",&n);
  int *c = malloc(sizeof(int) * n);            //sock color array
  for(int i = 0; i < n; i++){
    scanf("%d",&c[i]);
  }
  int pairs=0;                                 //number of pairs

  for(int i = 0; i < n; i++){                  //iterate sock1
    if(c[i] > 0){                              //don't re-count
      for(int j = i+1; j < n; j++){            //match to sock2
        if(c[j] == c[i]){
          c[j] = -99;                          //remove from search
          pairs++;                             //count pairs
          break;                               //don't keep looking!
        }
      }
    }
  }

  printf("%d\n", pairs);

  return 0;
}
