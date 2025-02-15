#include<stdio.h>
#include<string.h>

int main(){
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dba cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "dba cccccaacb cdbababdcdcdab dcdad";

  int i;
  int j;

  for(int i = 0; i < strlen(s1); i++){
    if(s1[i] == 'a'){
      counter1[0]++;
    }
    else if(s1[i] == 'b'){
      counter1[1]++;
    }
    else if(s1[i] == 'c'){
      counter1[2]++;
    }
    else if(s1[i] == 'd'){
      counter1[3]++;
    }
    }

  for(int i = 0; i < strlen(s2); i++){
    if(s2[i] == 'a'){
      counter2[0]++;
      }
    if(s2[i] == 'b'){
      counter2[1]++;
    }
    if(s2[i] == 'c'){
      counter2[2]++;
    }
    if(s2[i] == 'd'){
      counter2[3]++;
    }
  }

  int flag;
  if(counter1[i] == counter2[j]){
    flag = 0;
    printf("Agaram!");
  }else if(counter1[i] != counter2[j]){
    flag = 1;
    printf("Not Anagram!");
  }
  }