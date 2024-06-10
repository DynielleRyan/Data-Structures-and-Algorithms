#include<stdio.h>
#include<string.h>


typedef struct user{
  char name[12];
  int score;
}user;

int main(){

user player1;

strcpy(player1.name,"Ryan");
player1.score = 200;
printf("%s %d",player1.name, player1.score);

  return 0;
}