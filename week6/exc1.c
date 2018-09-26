#include <stdio.h>
#define N 256
int main(void) {

	char s1[N] = "Something", s2[N] = ""; //s1 - first String, s2 - second String
	int pi[2];

	pipe(pi);

	write(pi[1], s1, N);
	read(pi[0], s2, N);

	printf("%s", s2);

	return 0;
}
