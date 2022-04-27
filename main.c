//
//  main.c
//  guessthenumber
//
//  Created by Marvens Luc on 3/12/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    int user_input;
    //int y;
    int number_of_tries = 5;
    //printf("how many tries does the user get");
    //scanf("%d",&number_of_tries);
    
    
    while(number_of_tries > 0){
    
    
    do{
        printf("give me a number between 1 and 20: ");
        scanf("%d",&user_input);
        
        
    }while(user_input > 20);
    if (user_input > randomNumber) {
        printf("The number is too high\n");
    }
    else if (user_input < randomNumber){
        printf("the number is too low\n");
        
    }
    else if (user_input == randomNumber){
        printf("you guess the right number\n");
        break;
        
    }
        number_of_tries--;
        printf("you have %d number of tries left:\n ",number_of_tries);
}
    return 0;
}
