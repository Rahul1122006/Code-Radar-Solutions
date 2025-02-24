#include <stdio.h>

int main() {
    int number;
        
            // Reading a single integer
                scanf("%d", &number);
                    
                        // Check if the Least Significant Bit (LSB) is set or not
                            if (number & 1) {
                                    // If the LSB is 1
                                            printf("Set\n");
                                                } else {
                                                        // If the LSB is 0
                                                                printf("Not Set\n");
                                                                    }
                                                                        
                                                                            return 0;
                                                                            }