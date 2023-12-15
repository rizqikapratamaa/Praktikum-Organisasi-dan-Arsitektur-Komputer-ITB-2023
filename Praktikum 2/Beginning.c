#include <stdio.h>
#include <string.h>

void Beginning() {
    int n = 0;
    char var[100]; // Allocate memory
    char answer[] = "The disappearing railroads, a train that was supposed to turn, and an empty music that cannot be heard";

    // Receiving input from user
    fgets(var, sizeof(var), stdin);

    // Calculating var string length
    while (var[n] != '\0') {
        n++;
    }

    //Answer length
    int nmax = strlen(answer);

    // Checking answer length
    if (n != nmax) {
        illegal_move();
        return; // Quit the procedure if entering the illegal_move
    }

    // Checking character similarity
    for (int i = 0; i < nmax; i++) {
        if (var[i] != answer[i]) {
            illegal_move();
            return; // Quit the procedure if entering the illegal_move
        }
    }

    // If all the criteria passed, then show the message
    printf("Congratulations, you passed the first area. Feeling satisfied?\n");
}