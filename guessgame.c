#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main()
{
    int number,guess,nguess=0;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("the guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("my number is lessthan %d\n",guess);

        }
        else if(guess<number)
        {
            printf("my nuber is greatr than %d\n",guess);
        }
        else{
            printf("you guessed the actual number %d in %d attempts\n",number,nguess);

        }
nguess++;
    }

    while (guess!=number);
    if(guess !=number)
    {
    
        printf("not guessed yet",nguess);

    }
    
return 0;
}