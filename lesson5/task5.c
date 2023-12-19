#include <stdio.h>
#include <limits.h>





int main()
{
    char c;
    int num_left = 0;
    int num_right = 0;

    while( (c = getchar()) != '.') {

        if(c==40) num_left++;
        if(c==41) num_right++;

        if (num_left<num_right) {
            printf("Uncorrect\n");
            return 0;
        }
    }

    if (num_left!=num_right) {
        printf("Uncorrect\n");
        return 0;
    }
    printf("Correct\n");
    return 1;

}
   

