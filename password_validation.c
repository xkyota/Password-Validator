#include <stdio.h> 

int str_len(char* text){
    int count = 0; 

    while (text[count] != '\0')
    {
        count = count + 1; 
    }

    return count; 
}

int contains_special_characters(char* text){
    int i = 0; 

    while (text[i] != '\0')
    {
    if ((text[i] <= 47 && text[i] >= 33) || (text[i] <= 64 && text[i] >= 58) || (text[i] <= 96 && text[i] >= 91) || (text[i] <= 126 && text[i] >= 123))
    {
        return 1; 
    }
    i = i + 1; 
    }
    return 0; 
}

int contains_uppercase_letters(char* text){ 
    int i = 0; 

    while (text[i] != '\0')
    {
        if (text[i] <= 90 && text[i] >= 65 )
        {
            return 1; 
        }
        i = i + 1;
    }
    return 0; 
}

int contains_lowercase_letters(char* text){ 
    int i = 0; 

    while (text[i] != '\0')
    {
        if (text[i] <= 122 && text[i] >= 97 )
        {
            return 1; 
        }
        i = i + 1;
    }
    return 0; 
}

int contains_digits(char* text){ 

    int i = 0; 

    while (text[i] != '\0')
    {
        if (text[i] <= 57 && text[i] >= 48)
        {
            return 1; 
        }
        i = i + 1;
    }
    return 0; 
}

void password_validation(char* pass){

    int score = 0; 

    if(str_len(pass) < 8 || str_len(pass) > 25){
        printf("Password is too short or too long \n");
        return; 
    }

    if(contains_digits(pass))
        score++; 
    if(contains_lowercase_letters(pass))
        score++; 
    if(contains_uppercase_letters(pass))
        score++; 
    if(contains_special_characters(pass))
        score++;

    printf("Your score is %d \n", score); 
    
    if(score < 2){
        printf("You are weak! \n"); 
    } else if (score >= 3)
    {
        printf("I am a hero after all \n "); 
    }else{
        printf("Pokatit \n"); 
    }
}

int main(void){
    char pass[50];

    printf("Enter your password >>> "); 
    scanf("%s", pass);
    password_validation(pass);

    return 0; 
}