#include <stdio.h>

// Structure declaration
struct StructureExample {
    int num;
    char character;
};

// Union declaration
union UnionExample {
    int num;
    char character;
};

int main() {
    // Structure usage
    struct StructureExample s;
    s.num = 10;
    s.character = 'A';
    printf("Structure Usage: %d %c\n", s.num, s.character);
    
    // Union usage
    union UnionExample u;
    u.num = 10;
    printf("Union Usage (num): %d\n", u.num);
    u.character = 'A';
    printf("Union Usage (character): %c\n", u.character);
    printf("Union Usage (num after change): %d\n", u.num);

    return 0;
}
