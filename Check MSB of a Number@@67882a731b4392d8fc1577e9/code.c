#include <stdio.h>

int main() {
    int number, n, bit_value;
        
            // Reading two integers: the number and the bit position (0-based)
                scanf("%d %d", &number, &n);
                    
                        // Retrieve the nth bit using bitwise shift and bitwise AND
                            bit_value = (number >> n) & 1;
                                
                                    // Output the value of the nth bit (0 or 1)
                                        printf("%d\n", bit_value);
                                            
                                                return 0;
                                                }