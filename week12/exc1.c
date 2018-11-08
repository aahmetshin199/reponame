#include <stdio.h>
#define N 20 + 1

int main() {

    FILE *file = fopen("/dev/random", "r");
    char str[N];
    fgets(str, N, file);
    printf("%s", str);
    fflush(stdout);

    return 0;
}
