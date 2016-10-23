/*********************************************************
  Time Conversion

  Given a time in 12-hour format, convert it to 24-hour
  format.

  Sample Input:
  07:05:45PM
  ********************************************************/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
/*  This is how this /should/ be done...but pointers scare me.

    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
*/
    int hour, min, sec;             //Stores time components
    char ampm[3];                   //Holds 'AM' or 'PM'
    scanf("%d:%d:%d%s",             //Apparently this works?
          &hour,&min,&sec,ampm);
    printf("%s\n",ampm);
    //strcmp() returns 0 if strings are equal, so we need to negate it
    if((!strcmp(ampm,"PM") || !strcmp(ampm, "pm")) && hour!=12) hour+=12;
    if((!strcmp(ampm,"AM") || !strcmp(ampm, "am")) && hour==12) hour=0;
    printf("%02d:%02d:%02d\n",
            hour,min,sec);

    return 0;
}
