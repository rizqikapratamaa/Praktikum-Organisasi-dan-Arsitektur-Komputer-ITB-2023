#include <stdio.h>

// Read six number function to read six number from user
void read_six_numbers(int*var1, int *var2, int *var3, int *var4, int *var5, int *var6){
    scanf("%d %d %d %d %d %d", var1, var2, var3, var4, var5, var6);
}

void Black_Rose() {
    int var1, var2, var3, var4, var5, var6;
    read_six_numbers(&var1, &var2, &var3, &var4, &var5, &var6); // Read user input
    
    // Initiate each answers
    int answer1 = 1;
    int answer2 = 2;
    int answer3 = 4;
    int answer4 = 7;
    int answer5 = 28;
    int answer6 = 33;

    // If there is a different value between the user input and the answer, go to illegal move
    if (var1 != answer1) {
        illegal_move();
    }
    if (var2 != answer2) {
        illegal_move();
    }
    if (var3 != answer3) {
        illegal_move();
    }
    if (var4 != answer4) {
        illegal_move();
    }
    if (var5 != answer5) {
        illegal_move();
    }
    if (var6 != answer6) {
        illegal_move();
    }
    
    // If all the inputs and the answers are equal, show the message
    printf("Looks like it's too easy huh? The second area is still merely warm-up.\n");
}