#include<stdio.h>
#include<string.h>


struct Player{
  char name[12];
  int score;
};

int main(){

 struct Player player1;
 struct Player player2;

 strcpy(player1.name, "Ryan");
 strcpy(player2.name, "Pia");

 player1.score = 100;
 player2.score = 200;

 printf("%s %d\n", player1.name, player1.score);
 printf("%s %d\n", player2.name, player2.score);

  return 0;
}