#include <stdio.h>

void demonstrateBitwiseOperators() {
    unsigned char a = 5;  // 0000 0101 in binary
    unsigned char b = 9;  // 0000 1001 in binary

    printf("a = %u, b = %u\n", a, b);
    printf("Bitwise AND (a & b): %u\n", a & b);        // 0000 0001 -> 1
    printf("Bitwise OR (a | b): %u\n", a | b);         // 0000 1101 -> 13
    printf("Bitwise XOR (a ^ b): %u\n", a ^ b);        // 0000 1100 -> 12
    printf("Bitwise NOT (~a): %u\n", (unsigned char)~a); // 1111 1010 -> 250
    printf("Left Shift (a << 1): %u\n", a << 1);       // 0000 1010 -> 10
    printf("Right Shift (a >> 1): %u\n", a >> 1);      // 0000 0010 -> 2

    // More examples
    unsigned char c = 0xF0;  // 1111 0000 in binary
    printf("c = %u\n", c);
    printf("Bitwise AND (c & 0x0F): %u\n", c & 0x0F);  // 0000 0000 -> 0
    printf("Bitwise OR (c | 0x0F): %u\n", c | 0x0F);   // 1111 1111 -> 255
    printf("Left Shift (c << 2): %u\n", c << 2);       // 1100 0000 -> 192
    printf("Right Shift (c >> 2): %u\n", c >> 2);      // 0011 1100 -> 60
}

int main() {
    demonstrateBitwiseOperators();
    return 0;
}
