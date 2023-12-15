void Metropolis(Class input) {
    if (input.nInt != 2) { // Check the length, if not 2, enter illegal move
        illegal_move();
    }
    else {
        if (input.integer[0] == 9) { // Check the value of the input
            if (input.integer[1] == -1335) {
                printf("Kurohime's metropolis has been conquered. The street above the sky awaits.");
            }
            else{
                illegal_move();
            }
        }
        else {
            illegal_move();
        }
    }
}