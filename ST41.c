#include <stdio.h>



int main(void)
{
    char grade;

    printf("Give grade ");
    scanf("%c", &grade);

    if (grade == 'E'){
        printf("Excellent");
    }

    else if (grade == 'V'){
        printf("Very Good");
    }

    else if (grade == 'G'){
        printf("Good");
    }

    else if (grade == 'A'){
        printf("Average");
    }

    else if (grade == 'F'){
        printf("Fail");
    }



    else{
        printf("Character is not a grade mark");
    }
}