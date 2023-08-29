#include<stdio.h>
#include<string.h>
int main(){
typedef struct pokemon{

int hp;
int attack;
int speed;
char tier;
char name[15];



}pokemon; 
pokemon a,b,c;
a.attack=56;
a.hp=500;
a.speed=100;
a.tier='A';
strcpy(a.name,"Charizard");


b=a;
printf("%s",b.name);


}