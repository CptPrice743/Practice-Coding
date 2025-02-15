#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  // Code for copying a string goes here
  while(*src == '\0'){
    strcpy(dst, src);
    src++;
    dst++;
  }
  *dst == '\0';
}

 
int main(){
    char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
    char dstString[sizeof(srcString)/sizeof(char)];
    strcpy(dstString, srcString);
    printf("%s", dstString);
}