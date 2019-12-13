/*The code I have written is executed by system & doesn't interact with user.
It only needs "Enter" after each level to continue. It has been set for the user
to see the result of every step ^_^
The game will continue until the screen is full of characters X & O. Of course
 there is the possibility to does not exist the winner.
  If game finishes anyway, an alarm will be produced. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a, b, i, j, w;
    int arr[9]={0};
    char dooz[9]={};
    for (w=0;w<10;w++) {
    if ( (15!=arr[0]+arr[1]+arr[2]) && (27!=arr[0]+arr[1]+arr[2])
           &&(15!=arr[3]+arr[4]+arr[5]) && (27!=arr[3]+arr[4]+arr[5])
           &&(15!=arr[6]+arr[7]+arr[8]) && (27!=arr[6]+arr[7]+arr[8])
           &&(15!=arr[0]+arr[3]+arr[6]) && (27!=arr[0]+arr[3]+arr[6])
           &&(15!=arr[1]+arr[4]+arr[7]) && (27!=arr[1]+arr[4]+arr[7])
           &&(15!=arr[2]+arr[5]+arr[8]) && (27!=arr[2]+arr[5]+arr[8])
           &&(15!=arr[0]+arr[4]+arr[8]) && (27!=arr[0]+arr[4]+arr[8])
           &&(15!=arr[2]+arr[4]+arr[6]) && (27!=arr[2]+arr[4]+arr[6]) ) {
                    printf("Player X:\n");
                for (i=0;i<90;i*1) {
                    srand(time(0));
                    a=rand()%9;
                    if ((arr[a]!=5) && (arr[a]!=9)) {
                        arr[a]=5;
                        dooz[a]='X';
                        printf("%d\n", a+1);
                        printf(" %c | %c | %c\n %c | %c | %c\n %c | %c | %c",
                        dooz[0], dooz[1], dooz[2], dooz[3], dooz[4], dooz[5], dooz[6], dooz[7], dooz[8]);
                        printf("\n");
                        i=3000;
                    getchar();
                }
                else
                    i=0;
                }
           }
           else if ( (15==arr[0]+arr[1]+arr[2]) || (15==arr[3]+arr[4]+arr[5])
           ||(15==arr[6]+arr[7]+arr[8]) ||(15==arr[0]+arr[3]+arr[6])
           ||(15==arr[1]+arr[4]+arr[7]) ||(15==arr[2]+arr[5]+arr[8])
           ||(15==arr[0]+arr[4]+arr[8]) ||(15==arr[2]+arr[4]+arr[6]) ) {
                printf("X wins! :\)\n\a");
                return 0;
           }

           else {
                printf("O wins! :\)\n\a");
                return 0;
           }
            if ( ((arr[0]==5) || (arr[0]==9) ) && ((arr[1]==5) || (arr[1]==9) ) &&
               ((arr[2]==5) || (arr[2]==9) ) && ((arr[3]==5) || (arr[3]==9) ) &&
               ((arr[4]==5) || (arr[4]==9) ) && ((arr[5]==5) || (arr[5]==9) ) &&
               ((arr[6]==5) || (arr[6]==9) ) && ((arr[7]==5) || (arr[7]==9) ) &&
               ((arr[8]==5) || (arr[8]==9))){
                printf("Nobody wins \):\n\a");
               return 0;
               }

                if ((15!=arr[0]+arr[1]+arr[2]) && (27!=arr[0]+arr[1]+arr[2])
           &&(15!=arr[3]+arr[4]+arr[5]) && (27!=arr[3]+arr[4]+arr[5])
           &&(15!=arr[6]+arr[7]+arr[8]) && (27!=arr[6]+arr[7]+arr[8])
           &&(15!=arr[0]+arr[3]+arr[6]) && (27!=arr[0]+arr[3]+arr[6])
           &&(15!=arr[1]+arr[4]+arr[7]) && (27!=arr[1]+arr[4]+arr[7])
           &&(15!=arr[2]+arr[5]+arr[8]) && (27!=arr[2]+arr[5]+arr[8])
           &&(15!=arr[0]+arr[4]+arr[8]) && (27!=arr[0]+arr[4]+arr[8])
           &&(15!=arr[2]+arr[4]+arr[6]) && (27!=arr[2]+arr[4]+arr[6]) )  {
            printf("Player O:\n");
                for (j=0;j<90;j*1) {
                srand(time(0));
                b=rand()%9;
                if ((arr[b]!=5) && (arr[b]!=9)) {
                    arr[b]=9;
                    dooz[b]='O';
                    printf("%d\n", b+1);
                    printf(" %c | %c | %c\n %c | %c | %c\n %c | %c | %c",
                    dooz[0], dooz[1], dooz[2], dooz[3], dooz[4], dooz[5], dooz[6], dooz[7], dooz[8]);
                    printf("\n");
                    j=6000;
                    getchar();
                }
                else
                    j=0;
                }
           }
                else if ( (15==arr[0]+arr[1]+arr[2]) || (15==arr[3]+arr[4]+arr[5])
           ||(15==arr[6]+arr[7]+arr[8]) ||(15==arr[0]+arr[3]+arr[6])
           ||(15==arr[1]+arr[4]+arr[7]) ||(15==arr[2]+arr[5]+arr[8])
           ||(15==arr[0]+arr[4]+arr[8]) ||(15==arr[2]+arr[4]+arr[6]) ) {
                printf("X wins! :\)\n\a");
                return 0;
           }

           else {
                printf("O wins! :\)\n\a");
                return 0;
           }
            }
            if ( ((arr[0]==5) || (arr[0]==9) ) && ((arr[1]==5) || (arr[1]==9) ) &&
               ((arr[2]==5) || (arr[2]==9) ) && ((arr[3]==5) || (arr[3]==9) ) &&
               ((arr[4]==5) || (arr[4]==9) ) && ((arr[5]==5) || (arr[5]==9) ) &&
               ((arr[6]==5) || (arr[6]==9) ) && ((arr[7]==5) || (arr[7]==9) ) &&
               ((arr[8]==5) || (arr[8]==9))){
                printf("Nobody wins \):\n\a");
               return 0;
               }
    return 0;
           }
