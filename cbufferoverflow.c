#include <stdio.h>
#include <string.h>

int main(void) 
{
    //Define buffer 
    char buff[15];
    char help;
    int pass = 0;

    printf("\nEnter the password: \n");
    gets(buff);

    if(strcmp(buff, "letmein")) {
        printf("\n[-] Wrong Password. \n");
    }
    else {
        printf("\n[+] Correct Password. \n");
        pass = 1;
    }

    //"pass" is equal 1, so if you recognize it
    if (pass) {
        printf("\n[+ ]Root privileges given to the user \n");
    }
    return 0;
}