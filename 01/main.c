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

// strmal function
char* strmal(char *str){
    /*
    input: fullname 
    process : using ascii values to convert 
    output: lowercase , nospace
    */
   int j = 0;
   for(int i =0 ; str[i]!='\0';i++){
    if( str[i]>='A' && str[i]<='Z'){
        str[i] = str[i] + 32; // increasing the ascii value by 32 i.e converting to smallcase for male array
    }
    if(str[i] != ' ') {
        str[j++] = str[i]; // removing the spaces 
    }
   }
   str[j] = '\0'; // ending the string 
   return str; // returing the string 
   }

int main(){

    // char *male[] = {"Name1"};
    // char *female[] = {"Name2"};

    
    // char output = flames(male, female);
    printf("the output is %s %s",strmal("i am not good"),strmal("like everyone else"));


    // switch (output)
    // {
    // case 'F':
    //     break;
    // case 'L':
    //     break;
    // case 'A':
    //     break;
    // case 'M':
    //     break;
    // case 'E':
    //     break;
    // case 'S':
    // }



    return 0;
}



