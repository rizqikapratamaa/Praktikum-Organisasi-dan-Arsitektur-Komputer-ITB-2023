#include <stdio.h>
#include <stdlib.h>

void main() {
    int i, edx, ecx;
    char* n = malloc(7); // Allocate memory for a 6-character string plus the null terminator
    char* ptr;
    if (n == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return an error code
    }
    for (n[0] = 'a'; n[0] <= 'z'; n[0]++) {
        for (n[1] = 'a'; n[1] <= 'z'; n[1]++) {
            for (n[2] = 'a'; n[2] <= 'z'; n[2]++) {
                for (n[3] = 'a'; n[3] <= 'z'; n[3]++) {
                    for (n[4] = 'a'; n[4] <= 'z'; n[4]++) {
                        for (n[5] = 'a'; n[5] <= 'z'; n[5]++) {
                            edx = 0;
                            for (i = 0; i != 6; i++) {
                                if (i % 2 == 0) {
                                    ecx = n[i] & 7;
                                    if (ecx == 0) {
                                        edx -= 4;
                                    } else if (ecx == 1) {
                                        edx -= 6;
                                    } else if (ecx == 2) {
                                        edx -= 7;
                                    } else if (ecx == 3) {
                                        edx -= 0;
                                    } else if (ecx == 4) {
                                        edx -= 5;
                                    } else if (ecx == 5) {
                                        edx -= 2;
                                    } else if (ecx == 6) {
                                        edx -= 3;
                                    } else if (ecx == 7) {
                                        edx -= 1;
                                    }
                                } else {
                                    ecx = n[i] & 7;
                                    if (ecx == 0) {
                                        edx += 4;
                                    } else if (ecx == 1) {
                                        edx += 6;
                                    } else if (ecx == 2) {
                                        edx += 7;
                                    } else if (ecx == 3) {
                                        edx += 0;
                                    } else if (ecx == 4) {
                                        edx += 5;
                                    } else if (ecx == 5) {
                                        edx += 2;
                                    } else if (ecx == 6) {
                                        edx += 3;
                                    } else if (ecx == 7) {
                                        edx += 1;
                                    }
                                }
                            }
                            if (edx == -4) { // If edx = -4, then it's correct
                                printf("cGVrb3JhIGJlc3QgZ2lybA==. The fight with the dragon leaves you nearly insane. Can you really handle the remaining areas?");
                                free(n);
                                return 0;
                            }
                            else{
                                illegal_move();
                            }
                        }
                    }
                }
            }
        }
    }
    free(n); // Free the allocated memory
}