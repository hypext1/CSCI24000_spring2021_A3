#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

//five horses starting at 0
int horses[5] = {0,0,0,0,0};
int win = 0;

//randomly move horses forward
void advance(){
  int x;
  int r1;
  for (x=0;x<5;x++){
    r1 = rand() % 10;
    if (r1 % 2 == 0){
      horses[x] = horses[x] + 1;
    }
  }
};

//display race on screen
void display(){
  int j;
  int k;
  int l;
  for (j=0;j<5;j++){
    for (k=(14-horses[j]);k<14;k++){
      std::cout << ".";
    }
    std::cout << j;
    for (l=horses[j];l<14;l++){
      std::cout << ".";
    }
    std::cout << "\n";
  }
};

//detect if somone has won
void detectWin(){
  int i;
  for (i=0;i<5;i++){
    if (horses[i] > 13){
      win = 1;
      std::cout << "Horse " << i << " wins!";
    }
  }
};

//create the seed
void makeSeed(){
  int s;
  std::cout << "Enter seed: ";
  std::cin >> s;
  srand(s);
};

//main (runs everything)
int main(){
  makeSeed();
  while (win == 0){
  std::cin.ignore();
    advance();
    display();
    detectWin();
  }
  return 0;
}
