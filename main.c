
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>

int main()
{
    char computerchoice[10];
    char yourchoice[10];
    printf(" enter Rock, Paper, Scissors or quit\n");
    printf("Enter your choice:");
    scanf("%s",yourchoice);
    printf("Enter computer choice:");
    scanf("%s",computerchoice);
    while(strcmp(yourchoice,"quit"))
    {
     if(strcmp(yourchoice,computerchoice)==0)
    {
     printf("Draw\n");
    }
    else if(strcmp(yourchoice,"rock")==0)
    {
        if(strcmp(computerchoice,"scissors")==0)
            printf("you Wins!\n");
        else
            printf("computer wins!\n");
    }
    else if(strcmp(yourchoice,"scissors")==0)
     {
        if(strcmp(computerchoice,"paper")==0)
            printf("you Wins!\n");
        else
            printf("computer wins!\n");
     }
    else if(strcmp(yourchoice,"paper")==0)
    {
        if(strcmp(computerchoice,"rock")==0)
            printf("you Wins!\n");
          else
            printf("computer wins!\n");
    }
    printf(" enter Rock, Paper, Scissors or quit\n");
    printf("Enter your choice:");
    scanf("%s",yourchoice);
    printf("Enter computer choice:");
    scanf("%s",computerchoice);
    }
    return 0;
}





