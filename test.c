#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct STRUCT {
    char *name;
} STRUCT;

void *test(void *) {

}

DeclareT(char, Char);
DeclarePtrT(char, String);

void print_shit(String s, Char c) {
    printf("%s: %c\n", (char *)s, (char)c);
}

int main() {
    Char n = 'c';
    char buff[1024] = {0};
    strcpy(buff, "GAY");

    String t = (const char *)&buff;
    print_shit(t, n);
    return 0;
}