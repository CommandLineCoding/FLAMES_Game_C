/*
input: male.txt & female.txt
process: random selection of names (one from male and one from female); FLAMES calculation
output: Male Name; Female Name; FLAMES score
*/

#include<stdio.h>

char flames(char* [], char* []);
char* strmal(char[]);
int freq_char(char[]);
int rem_char(char[]);
char flames_char(int);


int main(){

    char *male[] = {"Name1"};
    char *female[] = {"Name2"};

    char output = flames(male, female);

    switch (output)
    {
    case 'F':
        break;
    case 'L':
        break;
    case 'A':
        break;
    case 'M':
        break;
    case 'E':
        break;
    case 'S':
    }



    return 0;
}

