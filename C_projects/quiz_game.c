#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    time_t  t;
    time(&t);
    char choice;
    char player_name[20];
    printf("\t\t=================== your name please : ===================\n\t\t\t\t\t");
    fgets(player_name, 20, stdin); //Reads a line from a file and advances the position indicator
    printf("\n\t\t---------------------------------------------------------\n");
    printf("\t\t\t\t WELCOME TO QUIZ GAME %s", player_name);
    printf("\n\t\t\t > Press S to start the game.");
    printf("\n\t\t\t > Press V to view the highest score. ");
    printf("\n\t\t\t > Press R to reset score.");
    printf("\n\t\t\t > Press H for help.");
    printf("\n\t\t\t > Press Q to quit.\n");

    for(int i=0; i<80; i++){
        printf("=");
    }
    printf("\nCurrent date and time : %s", ctime(&t));
    for(int i=0; i<80; i++){
        printf("=");
    }
    printf("\n");
    choice=toupper(getchar());
    getchar();
    if(choice=='S'){
              printf("\n\t=================== WELCOME TO C PROGRAMMING GAME ===================\n\t\t\t\t\t");
      printf("\n\t============= Here are some tips you might wanna know ===============\n\t\t\t\t\t");
      printf("\n>>There are 2 rounds in this Quiz game, WARMUP ROUND & CHALLENGE ROUND\t\t\t\t\t");
      printf("\n>>In warmup round you will be asked total 6 questions to test your\ngeneral knowledge, you are eligible to play the gave if you give at least\n2 right answers, otherwise you can't process furtheer to the challenge");
      printf("\n>>Your game starts with CHALLENGE ROUND. In this round you will be asked\ntotal of 23 questions. Each right answer will be awarded $100.000!!\nBy this way you can win up to one MILLION cash price.");
      printf("\n>>You will be given 4 options and you have to press A, B, C or D for the \nright option.");
      printf("\n>>You will be asked questions continuosly, till right answers are given.");
      printf("\n>>No negative marking for wrong answer. Good Luck!");
      printf("\n\nPress Y to start the game. Press any other key to return to the main menu.");
      int score=0;
      choice=toupper(getchar());
       getchar();
      if(choice=='Y'){
        printf("Good luck.\n");
        for(int i=0; i<3; i++){
            printf("Where is Tunisia\nA.America\tB.Asia\nC.North Africa\tD.Europe\n");
            choice=toupper(getchar());
             getchar();
            if(choice=='C'){
                printf("Correct!\n");
                score++;
                break;
            }
            else{
                printf("Try again.\n");

            }
            }
            for(int i=0; i<3; i++){
                printf("What is the language of Tunisia\nA.French\tB.Arabic\nC.English\tD.Bambara\n");
                choice=toupper(getchar());
                 getchar();
                if(choice=='B'){
                    printf("Correct!\n");
                    score++;
                    break;
                }
                else{
                    printf("Try again!\n");
                }

            }
             for(int i=0; i<3; i++){
                printf("What is the capital of Tunisia\nA.Mahres\tB.Tunis\nC.Sousse\tD.Gafsa\n");
                 choice=toupper(getchar());
                 getchar();
                if(choice=='B'){
                    printf("Correct!\n");
                    score++;
                    break;
                }
                else{
                    printf("Try again!\n");
                }

            }
             for(int i=0; i<3; i++){
                printf("What is the religion of Tunisia\nA.Christianity\tB.Hinduism\nC.Buddhism\tD.Islam\n");
                choice=toupper(getchar());
                 getchar();
                if(choice=='D'){
                    printf("Correct!\n");
                    score++;
                    break;
                }
                else{
                    printf("Try again!\n");
                }

            }
            if(score>=3){
                printf("You can play the real game now, your current score is: %d ", score);            
      }


    }
    else if(choice=='V'){
        printf("V");
    }
    else if(choice=='H'){
        printf("H");
    }
    else if(choice=='Q'){
        printf("Q");
    }

    return 0;
}