#include <stdio.h>
#include <string.h>

int main() {
    int pass, ipass, ispass, iscorr;
    char usern[10], iusern[10];

    pass = 123456;
    strcpy(usern, "Ahmed");

    printf("Enter Password: ");
    scanf("%d", &ipass);

    printf("\nEnter User Name: ");
    scanf("%s", iusern);

    if (pass == ipass) {
        ispass = 1;
    } else {
        ispass = 0;
    }

    if (strcmp(usern, iusern) == 0) {
        iscorr = 1;
    } else {
        iscorr = 0;
    }

    if (ispass == 1 && iscorr == 1) {
        printf("\nLogin Successful!");
    } else if (ispass == 0 && iscorr == 1) {
        printf("\nIncorrect Password!");
    } else if (ispass == 1 && iscorr == 0) {
        printf("\nUsername not Found!");
    } else {
        printf("\nBoth username and password are incorrect!");
    }

    return 0;
}

