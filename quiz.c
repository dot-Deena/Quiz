#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char questions[][100]={"-> What is the capital city of France?",
                         "-> Who was the first President of the United States?",
                         "-> What is the largest desert in the world?",
                         "-> What band performed the hit song -Bohemian Rhapsody-?"};
    char options[][100]={"A) Paris B) London C) Rome D) Berlin",
                         "A) George Washington B) Thomas Jefferson C) Abraham Lincoln D) John Adams", 
                         "A) Sahara Desert B) Gobi Desert C) Arabian Desert D) Antarctica",
                         "A) The Beatles B) Queen C) Led Zeppelin D) Pink Floyd"};
    char answers[10]= {'A','A','A','B'};

    int no = sizeof(questions)/sizeof(questions[0]);
    int n,i, score;
    char guess;


     printf("Enter 1 to start quiz\nEnter 0 to exit: ");
     scanf(" %d", &n);
       if(n==1){
        printf("GAME STARTS\n");
        
        for( i=0; i<no; i++){
            printf("%s\n", questions[i]);
            for(int j= (i*4); j < (i)+4; j++ ){
        printf("%s\n", options[j]);
       }
        }
       printf("guess: ");
       scanf("%c", &guess);
       scanf("%c");
       guess = toupper(guess);
       if(guess==answers[i]){
        ("right");
        score++;
       }
       else{
        printf("invalid");
       }
    printf("score: %d", score);
       }
       else if(n==0){
        printf("Exit");
       }
       else{
        printf("INVALID");
       }
return 0;
}