#include<stdio.h>
int main(){
struct pokemon
{
    int hp;
    int accuracy;
    int speed;
    char tier;//A,G,S
    /* data */
};
struct pokemon pikachu;
pikachu.accuracy=50;
pikachu.hp=80;
pikachu.speed=70;
pikachu.tier='A';
printf("%d\n",pikachu.accuracy);

struct pokemon charizard;
charizard.accuracy=70;
charizard.hp=120;
charizard.speed=60;
charizard.tier='G';

printf("%d\n",charizard.accuracy);
printf("%c",charizard.tier);





    return 0;
}