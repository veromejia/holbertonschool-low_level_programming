#include "holberton.h"
#include <stdio.h>
char *cap_string(char *a){
  int i;
  for(i=0;a[i]!='\0';i++){

    if(a[i]==' ' || a[i]=='\t' || a[i]=='\n' || a[i]==',' || a[i]==';' || a[i]=='.' || a[i]=='!' || a[i]=='?' || a[i]=='"' || a[i]=='(' || a[i]==')' || a[i]=='{' || a[i]=='}'){
      if(a[i+1]>='a' && a[i+1]<='z'){
        a[i+1]= a[i+1]-32;
      }
    }
  }
  return a;
}
