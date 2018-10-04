#include <stdio.h>
#include <stdlib.h>

int N;

int main()
{
    scanf("%d", &N);

    int *a = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
        a[i] = i;

	for (int i = 0; i < N; i++)
        printf("%d\n", a[i]);

	free(a);

    return 0;
}
